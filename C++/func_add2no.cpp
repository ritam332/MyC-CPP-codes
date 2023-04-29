#include <iostream>
#include <conio.h>
using namespace std;
void add(float x, float y)
{
    // return (x+y); //return the product result to main
    cout<<"sum "<<(x+y)<<endl;
}
int main()
{
    float num1; //variable for store first numbers
    float num2; //variable for store second numbers
    float sum; //variable for store result of product
    //read numbers
    cout << "Enter the first number" << endl;
    cin>>num1; //stored first number- get input from user
    cout << "Enter the second number" << endl;
    cin>>num2; //stored second number- get input from user
    add(num1, num2);//calling function and stored returning the result by function;
    //print sum of numbers
    // cout<<"sum of two numbers "<<sum<<endl;
    return 0;
    }
//function definition

// int add(int x, int y);//function declaration or prototype