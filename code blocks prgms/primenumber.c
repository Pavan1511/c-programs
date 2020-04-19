#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main(){
    int i,n ,flag=0;  //declaration statement for i and n
    printf("enter the number to find weather is it a \"prime\" number or not",\n);  //print or display statement for prime number
    scanf("%d",&n);  //inputs in n
    for(i=2;i<=n;i++) //pre increment statement for i and value of n taken div by 2
     {
        if(n%i==0)
        {
         flag=1; //flag condition will set to 1 if its encounter if condition loop statement
         break;
        }
     }
     if(n==1)
     {
      printf("1 is neither prime number nor compostite number");
     }
     if(flag==0)
       printf("%d prime number",n);
     else
       printf("%d is not a prime number",n);
       return 0;
    }
