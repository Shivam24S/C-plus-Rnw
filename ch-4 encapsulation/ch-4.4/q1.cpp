#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
private:
    int Roll;
    float Gpa;
    string Name;

public:
    // default Constructor
    Student()
    {

        Roll = 0;
        Gpa = 0.0;
        Name = "not set";

        cout << "default Constructor Called" << endl;
    }

    // parameterized Constructor

    Student(int r, float g, string n)
    {
        Roll = r;
        Gpa = g;
        Name = n;

        cout << "parameterized Constructor Called" << endl;
    }

    // copy constructor

    Student(const Student &s)
    {

        Roll = s.Roll;
        Gpa = s.Gpa;
        Name = s.Name;

        cout << "Copy Constructor Called" << endl;
    }

    // getter methods

    int GetRoll() const
    {

        return Roll;
    };

    float GetGpa() const
    {
        return Gpa;
    };

    string GetName() const
    {
        return Name;
    };

    void display() const
    {

        cout << "Name :" << Name << "Roll no : " << Roll << "Gpa" << Gpa << endl;
    }

    ~Student()
    {

        cout << "destructure called object destroyed " << endl;
    }
};

class StudentRecordManagement
{

private:
    vector<Student> students;

public:
    void addStudent(const Student &s)
    {

        students.push_back(s);
        cout << "student Data added";
    }

    void displayAllData()
    {
        cout << "all student detail are" << endl;

        if (students.empty())
        {

            cout << "no student records available" << endl;
        }
        else
        {

            for (int i = 0; i < students.size(); i++)
            {
                students[i].display();
            }
        }
    }

    void searchByRoll(int roll) const
    {

        for (int i = 0; i < students.size(); i++)
        {

            if (students[i].GetRoll() == roll)
            {

                cout << "student found" << endl;

                students[i].display();

                return;
            }
        }
        cout << "student not found with this id" << endl;
    }
};

int main()
{

    Student s1(1, 8.2, "Alice");
    Student s2(2, 5.6, "bob");
    Student s3(1, 9.6, "charlie");

    StudentRecordManagement manager;

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    manager.displayAllData();

    manager.searchByRoll(10);

    return 0;
}
