#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    float cgpa;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your CGPA: ";
    cin >> cgpa;

    cout << "\n----- Student Details -----" << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;
    cout << "CGPA : " << cgpa << endl;

    return 0;
}