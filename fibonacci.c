#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("enter the number of terms >> ");
    scanf("%d",&n);
    printf("the fibonacci series is >> ");
    for(int i=0;i<n;i++){
        printf("%d\t",fibonacci(i));
    }
    printf("\n");
    return 0;
}
int fibonacci(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}