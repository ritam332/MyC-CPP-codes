#include <iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"enter a no."<<endl;
    cin >> n;
    while (n!=0)
    {int lastDig=n%10;
            rev=rev*10+lastDig;
            n=n/10;
    }fflush stdin;
    cout<<"Rev is "<<rev<<endl;
    return 0;
}