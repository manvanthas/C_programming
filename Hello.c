#include<stdio.h>            // pre processor directive or header file
int main(){                  // /* multiline comment */
    int a,b;
    printf("Hello World\n"); // /n for newline 
    printf("enter the value of a >> ");
    scanf("%d",&a);
    printf("enter the value of b >> ");
    scanf("%d",&b);
    printf("the result is >> %d",a+b);
    return 0;
}