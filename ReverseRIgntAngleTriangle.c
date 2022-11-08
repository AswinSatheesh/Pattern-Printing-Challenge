#//Reverse right angled trinagle.
#include<stdio.h>
int main()
{
    int num=3;
    // for(int row =num; row >=1; row--)
    // {
    //     for(int col = 1; col <=row; col++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // return 0;

    for(int row =1; row <=num; row++)
    {
        for(int col =1; col <= num-row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}