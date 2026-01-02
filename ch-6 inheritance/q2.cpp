

#include <iostream>
using namespace std;

class P
{

protected:
    float temperature;

public:
    void setTemperature(float temp)
    {
        temperature = temp;
    }
};

class Q : public P
{
protected:
    float fahrenheit;

public:
    void convertToFahrenheit()
    {

        fahrenheit = (temperature * 9 / 5) + 32;

        cout << "fahrenheit : " << fahrenheit << endl;
    };
};

class R : public Q
{

protected:
    float kelvin;

public:
    void convertToKelvin()
    {

        kelvin = (temperature + 273.15);

        cout << "kelvin : " << kelvin << endl;
    }
};

int main()
{

    float temp;

    cout << "enter temperature " << endl;
    cin >> temp;
    cin.ignore();

    R obj;

    obj.setTemperature(temp);

    obj.convertToFahrenheit();

    obj.convertToKelvin();

    return 0;
}
