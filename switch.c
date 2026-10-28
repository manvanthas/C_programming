#include<stdio.h>
int main(){
    int day;
    printf("entert the day to check that days predection 0-monday,1-tuesday and so on >> ");
    scanf("%d",&day);
    switch(day){
        case 0:
            printf("your day is monday");
            break;
        case 1:
            printf("today is tuesday");
            break;
        case 2:
            printf("today is wednesday");
            break;
        case 3:
            printf("today is thursday");
            break;
        case 4:
            printf("today is friday");
            break;
        case 5:
            printf("today is saturday");
            break;
        case 6:
            printf("today is sunday");
            break;
        default :
            printf("enter the day porperly in small alphabets");
    }
    return 0;
}