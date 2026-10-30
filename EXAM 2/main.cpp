#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    int year;
    int speed;

public:
    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    void setSpeed(int s)
    {
        speed = s;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    int getSpeed()
    {
        return speed;
    }
};

int main()
{
    Car c;

    string model;
    int year, speed;

    cout << "Enter Car Model: ";
    cin >> model;

    cout << "Enter Car Year: ";
    cin >> year;

    cout << "Enter Car Speed: ";
    cin >> speed;

    c.setModel(model);
    c.setYear(year);
    c.setSpeed(speed);

    cout << "\n----- Car Details -----";

    cout << "\nModel: " << c.getModel();
    cout << "\nYear: " << c.getYear();
    cout << "\nSpeed: " << c.getSpeed() << " km/h";

    return 0;
}
