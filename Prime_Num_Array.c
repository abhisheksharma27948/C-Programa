// Prime Number Using Arrays
#include <stdio.h>
#define N 10
int main()
{
    int arr[N] = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,j,n;

    for (i = 0; i < N; i++)
    {
        n = arr[i];
        int flag = 0;
        for(j=2;j<n;j++)
        {
            if (n % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("\n%d is prime",n);
        }
    }
    return 0;
}