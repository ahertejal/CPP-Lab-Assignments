# Employee Operator Overloading

## Description

This C++ program demonstrates the use of **constructors** and **operator overloading** using an `Employee` class.

The program includes:

* Default Constructor
* Parameterized Constructor
* Operator Overloading using `+`
* Display Function

## Concepts Used

* Classes and Objects
* Default Constructor
* Parameterized Constructor
* Operator Overloading
* Member Functions

## How It Works

Two employee objects are created:

* `e1` is created using the default constructor and values are assigned manually.
* `e2` is created using the parameterized constructor.
* `e3` is created by adding `e1` and `e2` using the overloaded `+` operator.

The overloaded `+` operator:

* Adds the employee IDs
* Combines the employee names
* Adds their salaries

## Sample Output

```text
Employee 1:
Employee ID: 101
Name: Rahul
Salary: 50000

Manager:
Employee ID: 102
Name: Priya
Salary: 70000

After Operator Overloading:
Employee ID: 203
Name: Rahul & Priya
Salary: 120000
```

## Requirements

* C++ compiler
* Any C++ IDE such as Visual Studio Code, Code::Blocks, or Dev-C++

## Files

* `Employee.cpp` – Main C++ source code
* `README.md` – Project documentation
* `output.png` – Sample program output screenshot
