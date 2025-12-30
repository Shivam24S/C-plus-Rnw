

#include <iostream>
#include <string>

using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamond;
    int comp_export_raw_diamond;
    string comp_ceo;

public:
    // parameterized constructor
    DiamondCompany(int id, string name, int staff, double revenue, int import_diamond, int export_diamond, string ceo)
    {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamond = import_diamond;
        comp_export_raw_diamond = export_diamond;
        comp_ceo = ceo;
    }

    void displayData()
    {
        cout << "company detail are ..." << endl;

        cout << "Company ID             :" << comp_id << endl;
        cout << "Company Name           :" << comp_name << endl;
        cout << "Company staff quantity :" << comp_staff_quantity << endl;
        cout << "company revenue        :" << comp_revenue << endl;
        cout << "company import Diamond :" << comp_import_raw_diamond << endl;
        cout << "company export Diamond :" << comp_export_raw_diamond << endl;
        cout << "company CEO            :" << comp_ceo << endl;
    }

    // destructor
    ~DiamondCompany()
    {

        cout << "company object memory reset\n";
    }
};

int main()
{

    cout << "\n enter a number for company detail";
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {

        int id, staff, import_diamond, export_diamond;
        string name, ceo;
        double revenue;

        cout << "you are entering company " << i + 1 << "  detail  " << endl;

        cout << "comp Id: " << endl;
        cin >> id;
        cin.ignore();

        cout << "comp name: " << endl;
        getline(cin, name);

        cout << "comp staff: " << endl;
        cin >> staff;
        cin.ignore();

        cout << "comp revenue: " << endl;
        cin >> revenue;
        cin.ignore();

        cout << "comp imported diamond: " << endl;
        cin >> import_diamond;
        cin.ignore();

        cout << "comp exported diamond: " << endl;
        cin >> export_diamond;
        cin.ignore();

        cout << "comp ceo: " << endl;
        getline(cin, ceo);

        DiamondCompany obj(id, name, staff, revenue, import_diamond, export_diamond, ceo);

        obj.displayData();
    }

    return 0;
}