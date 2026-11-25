#include<stdio.h>
int main(){
    FILE *fptr;
    fptr =fopen("filename.txt","r");
    if(fptr==NULL){
        printf("file dosent exist");
    }
    else{
        printf("file exists\n");
        char ch;
        fscanf(fptr,"%c",&ch);
        printf("character = %c\n",ch);
        fclose(fptr);
    }
    return 0; 
}