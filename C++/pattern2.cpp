// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = i; j <=n; j++)
//         {
//             cout<<" ";
//         } 
//         for (int k = 0; k < i; k++)
//         {
//             cout<<"*";
//         }
        
//         cout<<endl;
        
//     }
    
// }
#include <stdio.h>
int main()
{
    int a, b, n, k, num,m=1;

    printf("enter row no.\n");
    scanf("%d", &n);
   for (a = n; a > 0; a--)
        {
            for (b = 1; b <= m; b++)
            {

                printf("");
            }
            for (k =0; k < (2*a-1); k++)
            {
                printf("*");
            }
            m++ ;
            printf("\n");
        }
}