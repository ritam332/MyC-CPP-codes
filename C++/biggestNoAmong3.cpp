#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three no.s\n";
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "is the largest no.\n";
        }
        else
        {
            cout << c << "is the largest no.\n";
        }
    }
    else
    {
        cout << b << "is the largest no.\n";
    }

    return 0;
}
