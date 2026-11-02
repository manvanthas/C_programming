#include<stdio.h>
int main(){
    int arr[5];
    char name[9]={'m','a','n','v','a','n','t','h','\0'};
    int n;
    printf("enter the number of elements in the array >> ");
    scanf("%d",&n);
    if(n>5){
        printf("the number of elements in the array should be less than or equal to 5\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        printf("enter the values of arrray %d>> ",i+1);
        scanf("%d",&arr[i]);
    }
    return 0;
}