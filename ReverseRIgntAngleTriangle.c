#//Reverse right angled trinagle.
#include<stdio.h>
int main()
{
    int num=8;
    for(int row =num; row >=1; row--)
    {
        for(int col = 1; col <=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}