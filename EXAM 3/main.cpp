
#include <iostream>
using namespace std;

class Device
{
private:
    string brand;
    int powerConsumption;

public:

    void setBrand(string b)
    {
        brand = b;
    }

    void setPowerConsumption(int p)
    {
        powerConsumption = p;
    }

    
    string getBrand()
    {
        return brand;
    }

    int getPowerConsumption()
    {
        return powerConsumption;
    }
};

class Laptop : public Device
{
private:


public:


    void display()
    {
        cout << "\n----- Laptop Details -----";
        cout << "\nBrand: " << getBrand();
        cout << "\nPower Consumption: " << getPowerConsumption() << " Watts";
    }
};

class Smartphone : public Device
{
private:
    

public:


    void display()
    {
        cout << "\n\n----- Smartphone Details -----";
        cout << "\nBrand: " << getBrand();
        cout << "\nPower Consumption: " << getPowerConsumption() << " Watts";
    }
};

int main()
{
    Laptop l;
    Smartphone s;

    string brand;
    int power, ram, battery;

    cout << "Enter Laptop Brand: ";
    cin >> brand;

    cout << "Enter Laptop Power Consumption: ";
    cin >> power;

    l.setBrand(brand);
    l.setPowerConsumption(power);

    cout << "\nEnter Smartphone Brand: ";
    cin >> brand;

    cout << "Enter Smartphone Power Consumption: ";
    cin >> power;

    s.setBrand(brand);
    s.setPowerConsumption(power);

    
    l.display();
    s.display();

    return 0;
}