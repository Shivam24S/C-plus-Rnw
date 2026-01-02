

#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "enter number of elements: ";

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << "arr[" << i << "]  ";

        cin >> arr[i];
    }

    cout << "even elements are ";

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {

            cout << arr[i] << " ";
        }
    }

    return 0;
}