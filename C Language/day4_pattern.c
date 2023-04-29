#include <stdio.h>
int main()
{
    int a, b, n, i, k, j, num, m = 1, flag = 0, true;
    int space;
    char c;
    do
    {
        printf("Enter a digit from 1 to 8\n");
        scanf("%d", &num);
        printf("enter row no.\n");
        scanf("%d", &n);
        switch (num)
        {
        case 1:
            for (a = 1; a <= n; a++)
            {
                for (b = 1; b <= a; b++)
                {
                    printf("*");
                }

                printf("\n");
            }
            break;
        case 2:
            for (a = 1; a <= n; a++)
            {
                for (b = 1; b < a; b++)
                {
                    printf(" ");
                }
                for (b = 0; b <= n - a; b++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 3:
            for (a = 1; a <= n; a++)
            {

                for (b = 0; b <= n - a; b++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 4:
            for (a = 1; a <= n; a++)
            {
                for (b = a; b <= n; b++)
                {

                    printf(" ");
                }
                for (k = 0; k < a; k++)
                {
                    printf("*");
                }
                printf("\n");
            }

            break;
        case 6:
            for (a = 1; a <= n; a++)
            {
                for (b = a; b <= n; b++)
                {

                    printf(" ");
                }
                for (k = 0; k < (2 * a - 1); k++)
                {
                    printf("*");
                }
                printf("\n");
            }

            break;
        case 7:
            for (a = n; a > 0; a--)
            {
                for (b = 1; b <= m; b++)
                {

                    printf(" ");
                }
                for (k = 0; k < (2 * a - 1); k++)
                {
                    printf("*");
                }
                m++;
                printf("\n");
            }

            break;
        case 8:
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                space = 2 * n - 2 * i;
                for (j = 0; j <= space; j++)
                {
                    printf(" ");
                }
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            for (i = n; i >= 1; i--)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                space = 2 * n - 2 * i;
                for (int j = 0; j <= space; j++)
                {
                    printf(" ");
                }

                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 9: //rhombus
            for (a = 1; a <= n; a++)
            {
                for (b = 1; b <= n - a; b++)
                {
                    printf(" ");
                }
                for (b = 0; b < n; b++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        default:
            printf("Enter valid choice");
        }
        printf("Do you want to continue? y/n");
        fflush(stdin);
        scanf("%c", &c);
    } while (c == 'y' || c == 'Y');
    return 0;
}