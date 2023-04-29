#include<iostream>
using namespace std;
bool checkNumber(string str){
    for (int i = 0; i < str.length(); i++)
    {
        return isdigit(str[i]);
    }
    
}
bool isDigit();
void SumAndAverage();
int main(){
     SumAndAverage();
     return 0;
}
// bool isDigit(char n){
//     if(n>='0'&&n<='9') return true;
//     else return false;
// }
void SumAndAverage(){
    

    int sum= 0, count=0;
    int ch;
    while (true)
    {
        	cin>>ch;
            sum+=ch;
            count++;
        }
        
     cout<<"Sum = "<<sum<<endl;
    if (count==0)
    {
        cout<<"Average isn't possible";
    } else
       cout<<"Average = "<<(double)sum/count;
    
    
    
    
}
