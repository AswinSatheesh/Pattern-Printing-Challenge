#include<stdio.h>
int main()
{
    int n=10;
    for(int row=1;row<=n;row++)
    {
        for(int col =1;col<=n-row+1;col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}