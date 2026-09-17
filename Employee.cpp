#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    // Default Constructor
    Employee()
    {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized Constructor
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    // Operator Overloading (+)
    Employee operator+(Employee e)
    {
        Employee temp;

        temp.id = id + e.id;
        temp.name = name + " & " + e.name;
        temp.salary = salary + e.salary;

        return temp;
    }

    // Display Function
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // Default Constructor
    Employee e1;
    e1.id = 101;
    e1.name = "Rahul";
    e1.salary = 50000;

    // Parameterized Constructor
    Employee e2(102, "Priya", 70000);

    // Operator Overloading
    Employee e3 = e1 + e2;

    cout << "Employee 1:" << endl;
    e1.display();

    cout << "\nManager:" << endl;
    e2.display();

    cout << "\nAfter Operator Overloading:" << endl;
    e3.display();

    return 0;
}
