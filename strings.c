#include<stdio.h>
int main(){
    char name[]={'m','a','n','v','a','n','t','h','\0'};
    char NAME[100];
    printf("enter the name >> ");
    scanf("%s",NAME);
    printf("the name is %s\n",name);
    printf("the name is %s\n",NAME);
    printf("the name is ");
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }
    printf("\n");
    return 0;

}