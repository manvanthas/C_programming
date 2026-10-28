#include<stdio.h>
int main(){
    int price;
    printf("enter the price of food ");
    scanf("%d",&price);
    if(price>=1000 && price<=2000){
        printf("food is expensive ");
    }
    else if(price>=300 && price <1000){
        printf("price is managable ");
    }
    else if(price <300){
        printf("food is affordable ");
    }
    else{
        printf("invalid price ");
    }
    return 0;
}