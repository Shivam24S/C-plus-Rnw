

#include <iostream>

using namespace std;

class Student
{

public:
    void getName()
    {
        cout << "this is student 1";
    }
};

class Student2 : public Student

{

public:
    void getName()
    {
        cout << "this is student 2";
    }
};

int main()
{

    Student2 s1;

    s1.getName();

    return 0;
}