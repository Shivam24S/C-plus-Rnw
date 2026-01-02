

// #include <iostream>

// using namespace std;

// class Student
// {
// private:
//     int stu_id;
//     string stu_name;
//     int stu_age;
//     string stu_course;
//     string stu_city;
//     string stu_email;
//     string stu_college;

// public:
//     void setStudentDetail(int id, string name, int age, string course, string city, string email, string college)
//     {

//         this->stu_id = id;
//         this->stu_name = name;
//         this->stu_age = age;
//         this->stu_course = course;
//         this->stu_city = city;
//         this->stu_email = email;
//         this->stu_college = college;
//     }

//     void getStudentDetail()
//     {

//         cout << "Student detail are... " << endl;

//         cout << "ID: " << stu_id << endl;
//         cout << "Name: " << stu_name << endl;
//         cout << "Age: " << stu_age << endl;
//         cout << "Course: " << stu_course << endl;
//         cout << "City: " << stu_city << endl;
//         cout << "Email: " << stu_email << endl;
//         cout << "College: " << stu_college << endl;
//     }
// };

// int main()
// {

//     Student s1;

//     int id = 1;
//     string name = "alice";
//     int age = 22;
//     string course = "fullstack development";
//     string city = "BVN";
//     string email = "name@gmail.com";
//     string college = "RNW";

//     s1.setStudentDetail(id, name, age, course, city, email, college);

//     s1.getStudentDetail();

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void setStudentDetail(int id, string name, int age, string course, string city, string email, string college)
    {

        this->stu_id = id;
        this->stu_name = name;
        this->stu_age = age;
        this->stu_course = course;
        this->stu_city = city;
        this->stu_email = email;
        this->stu_college = college;
    }

    void getStudentDetail()
    {

        cout << "Student detail are... " << endl;

        cout << "ID: " << stu_id << endl;
        cout << "Name: " << stu_name << endl;
        cout << "Age: " << stu_age << endl;
        cout << "Course: " << stu_course << endl;
        cout << "City: " << stu_city << endl;
        cout << "Email: " << stu_email << endl;
        cout << "College: " << stu_college << endl;
    }
};

int main()
{

    Student s[5];

    int id;
    string name;
    int age;
    string course;
    string city;
    string email;
    string college;

    for (int i = 0; i < 5; i++)
    {

        cout << "enter student detail " << i + 1 << endl;

        cout << "id " << endl;
        cin >> id;
        cin.ignore();
        cout << "name " << endl;
        getline(cin, name);
        cout << "age " << endl;
        cin >> age;
        cin.ignore();
        cout << "course " << endl;
        getline(cin, course);
        cout << "city " << endl;
        getline(cin, city);
        cout << "email " << endl;
        getline(cin, email);
        cout << "college " << endl;
        getline(cin, college);

        s[i].setStudentDetail(id, name, age, course, city, email, college);
    }

    cout << "student detail are..." << endl;

    for (int i = 0; i < 5; i++)
    {

        s[i].getStudentDetail();
    };

    return 0;
}