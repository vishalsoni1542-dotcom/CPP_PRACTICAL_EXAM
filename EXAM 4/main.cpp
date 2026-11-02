#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;
    float price;

public:

    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    void setPrice(float pr)
    {
        price = pr;
    }

    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }

    float getPrice()
    {
        return price;
    }

    virtual float calculateDiscount() = 0;

    virtual void display()
    {
        cout << "\nBrand: " << brand;
        cout << "\nPower Consumption: " << powerConsumption << " Watts";
        cout << "\nPrice: " << price;
    }

    virtual ~Device() {}
};

class Laptop : public Device
{
public:

    float calculateDiscount()
    {
        if (getPowerConsumption() >= 60)
        {
            return getPrice() * 10 / 100;
        }
        else
        {
            return getPrice() * 5 / 100;
        }
    }

    void display()
    {
        cout << "\n----- Laptop Details -----";
        Device::display();
        cout << "\nDiscount: " << calculateDiscount();
    }
};

class Smartphone : public Device
{
public:

    float calculateDiscount()
    {
        if (getPowerConsumption() <= 30)
        {
            return getPrice() * 8 / 100;
        }
        else
        {
            return getPrice() * 4 / 100;
        }
    }

    void display()
    {
        cout << "\n----- Smartphone Details -----";
        Device::display();
        cout << "\nDiscount: " << calculateDiscount();
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    string brand;
    int power;
    float price;

    cout << "Enter Laptop Brand: ";
    cin >> brand;

    cout << "Enter Laptop Power Consumption: ";
    cin >> power;

    cout << "Enter Laptop Price: ";
    cin >> price;

    l.setBrand(brand);
    l.setPowerConsumption(power);
    l.setPrice(price);

    cout << "\nEnter Smartphone Brand: ";
    cin >> brand;

    cout << "Enter Smartphone Power Consumption: ";
    cin >> power;

    cout << "Enter Smartphone Price: ";
    cin >> price;

    s.setBrand(brand);
    s.setPowerConsumption(power);
    s.setPrice(price);

    Device* devices[2];

    devices[0] = &l;
    devices[1] = &s;

    cout << "\n===== Device Information =====";

    for (int i = 0; i < 2; i++)
    {
        devices[i]->display();

        cout << "\nCalculated Discount: "
             << devices[i]->calculateDiscount() << endl;
    }

    return 0;
}
