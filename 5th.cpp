//Title:static data member ,static member function.
//Problem statement:
//Write a program to demonstrate how a static data member can be accessed with the help of a static
//member function


#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    Student()
    {
        count++;
    }

    static void showCount()
    {
        cout << "Total number of students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;

    Student::showCount();

    return 0;
}
