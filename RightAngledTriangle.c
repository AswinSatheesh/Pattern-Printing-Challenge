//Right Angled Triangle:
#include<stdio.h>
int main()
{
    int num=4;
    for(int row=1;row <=num;row++)
    {
        for(int col =1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}