#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i,j,row;
    printf("enter the number of rows that has to be printed");
    scanf("%d",&row);
    for(int i=1;i<=row;++i)
    {
        for(int j=i;j<=row;++j)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
