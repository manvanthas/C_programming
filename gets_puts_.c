#include<stdio.h>
int main(){
    char sen[25],SEN[25];;
    printf("enter the sentence >> ");
    gets(sen);
    printf("enter the sentence >> ");
    fgets(SEN,25,stdin);
    puts(sen);
    fputs(SEN,stdout);
    return 0;
}