#include<stdio.h>
void reverse(char *a){
if(*a)   //to travese till last char
    {
        reverse(a+1);  //to move to next char
        printf("%c",*a);  //to print from last char

    }
}
int main(){
char a[100];  //array can store 100 variables
scanf("%[^\n]s",a);//to scan the string with space
reverse(a);  //recursivve call
return 0;
}
