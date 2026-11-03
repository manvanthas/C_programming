#include<stdio.h>
#include<string.h>
int main(){
    char str[]="manvanth";
    char STR[9];
    printf("the length of string is %d\n",strlen(str));
    strcpy(STR,str);
    printf("the concatenated string is %s\n",STR);
    printf("the comparison of strings is %d\n",strcmp(STR,str));
    printf("the copied string is %s\n",STR);
    strcat(STR,str);
    return 0;
}