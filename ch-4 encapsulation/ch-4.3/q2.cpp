#include <iostream>
#include <string>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // default constructor
    Cafe()
    {
        cafe_id = 0;
        cafe_name = "not set";
        cafe_type = "not set";
        cafe_rating = 0;
        cafe_location = "not set";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void setCafeData()
    {

        cout << "Enter Cafe Detail ";

        cout << "ID :" << endl;
        cin >> cafe_id;
        cin.ignore();

        cout << "Name :" << endl;
        getline(cin, cafe_name);

        cout << "Type :" << endl;
        getline(cin, cafe_type);

        cout << "Rating :" << endl;
        cin >> cafe_rating;
        cin.ignore();

        cout << "Location :" << endl;
        getline(cin, cafe_location);

        cout << "Year :" << endl;
        cin >> cafe_establish_year;
        cin.ignore();

        cout << "Staff :" << endl;
        cin >> cafe_staff_quantity;
        cin.ignore();
    }

    void displayCafeData()
    {

        cout << "cafe Details are ...";

        cout << "ID : " << cafe_id << endl;
        cout << "Name : " << cafe_name << endl;
        cout << "Type : " << cafe_type << endl;
        cout << "Rating : " << cafe_rating << endl;
        cout << "Location : " << cafe_location << endl;
        cout << "Year : " << cafe_establish_year << endl;
        cout << "Staff : " << cafe_staff_quantity << endl;
    };

    ~Cafe()
    {

        cout << "cafe Object Destroyed" << endl;
    }
};

int main()
{

    int n;

    cout << "enter cafe number " << endl;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {

        Cafe c;

        c.setCafeData();

        c.displayCafeData();
    }

    return 0;
}