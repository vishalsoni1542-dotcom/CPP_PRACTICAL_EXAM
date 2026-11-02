#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;

public:

    Student()
    {
        name = "";
        rollNumber = 0;
    }
    
    Student(string n, int r)
    {
        name = n;
        rollNumber = r;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << rollNumber << endl;
    }
};

int main()
{
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++)
    {
        string name;
        int rollNumber;

        cout << "\nEnter Student " << i + 1 << " Details: ";

        cout << "\nEnter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        students[i] = Student(name, rollNumber);
    }

    cout << "\n----- Student Details -----\n";

    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    return 0;
}
