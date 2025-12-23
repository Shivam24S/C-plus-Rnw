// #include <iostream>

// using namespace std;

// // by default always private accessor

// class Student
// {

// private:
//     int marks = 80;

// public:
//     void setStudentMarks(int m)
//     {

//         marks = m;
//     }

//     void getStudentMarks()
//     {

//         cout << "student marks " << marks << endl;
//     }
// };

// int main()
// {

//     Student s1;

//     s1.setStudentMarks(90);

//     s1.getStudentMarks();

//     Student s2;

//     s2.setStudentMarks(100);

//     s2.getStudentMarks();

//     return 0;
// }


#include <iostream>

using namespace std;

// by default always private accessor

// class Student
// {

//     int marks = 80;

//     void setStudentMarks(int m)
//     {

//         marks = m;
//     }

//     void getStudentMarks()
//     {

//         cout << "student marks " << marks << endl;
//     }
// };

// int main()
// {

//     Student s1;

//     s1.setStudentMarks(90);

//     s1.getStudentMarks();

//     Student s2;

//     s2.setStudentMarks(100);

//     s2.getStudentMarks();

//     return 0;
// }

class Student
{
    public:

    int marks = 80;

    void setStudentMarks(int m)
    {

        marks = m;
    }

    void getStudentMarks()
    {

        cout << "student marks " << marks << endl;
    }
};

int main()
{
    

    Student s1;

    s1.marks = 150;

    // s1.setStudentMarks(90);

    s1.getStudentMarks();

    Student s2;

    s2.setStudentMarks(100);

    s2.getStudentMarks();

    return 0;
}
