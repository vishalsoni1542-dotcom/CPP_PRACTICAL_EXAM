#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;

public:
    virtual void makeSound() = 0;
    virtual void move() = 0;

    void setName(string n)
    {
        name = n;
    }
};

class Lion : public Animal
{
public:
    void makeSound()
    {
        cout << "\n" << name << " Sound: Roar Roar!";
    }

    void move()
    {
        cout << "\n" << name << " Move: Lion walks and runs.";
    }
};

class Fish : public Animal
{
public:
    void makeSound()
    {
        cout << "\n" << name << " Sound: Fish makes clicking sounds.";
    }

    void move()
    {
        cout << "\n" << name << " Move: Fish swims in water.";
    }
};

int main()
{
    Lion l;
    Fish f;

    string lionName, fishName;

    cout << "Enter Animal Name: ";
    cin >> lionName;

    cout << "Enter Animal Name: ";
    cin >> fishName;

    l.setName(lionName);
    f.setName(fishName);

    Animal* animals[2];

    animals[0] = &l;
    animals[1] = &f;

    cout << "\n===== Animal Information =====\n";

    for (int i = 0; i < 2; i++)
    {
        animals[i]->makeSound();
        animals[i]->move();

        cout << "\n";
    }

    return 0;
}