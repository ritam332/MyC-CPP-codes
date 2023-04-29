    #include <iostream>
    #include<cmath>
using namespace std;
int main()
{
    int n,sum=0;
    
    cout<<"enter a no."<<endl;
    cin >> n;
    int num=n;
    while (n!=0)
    {
        int lastdig=n%10;
         sum =sum+pow(lastdig,3);
        n=n/10;
    }
    if (sum==num)
    {
        cout<<"Armstrong no."<<endl;
    }
    else
    cout<<"Not an Armstrong no."<<endl;
    
    
}
