#include <iostream>
using namespace std;

class X
{

protected:
    int a, b, c;
};

class Y : public X
{
public:
    void setData()
    {

        cout << "enter value of a" << endl;
        cin >> a;
        cin.ignore();

        cout << "enter value of b" << endl;
        cin >> b;
        cin.ignore();

        cout << "enter value of c" << endl;
        cin >> c;
        cin.ignore();
    }

    void getData()
    {

        int sum;

        sum = (a * a * a) + (b * b * b) + (c * c * c);

        cout << "total cube sum " << sum << endl;
    }
};

int main()
{

    Y obj;

    obj.setData();

    obj.getData();

    return 0;
}