#include <iostream>
using namespace std;
int main()
{
    int n,fac=1;
    cout<<"enter a no."<<endl;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
       fac=fac*i;
    }cout<<fac<<" is the factorial";
}