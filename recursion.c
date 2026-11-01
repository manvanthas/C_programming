#include<stdio.h>
void printHW(int n);
void printHW(int n){
    if(n==0){
        return;
    }
    printf("helloworld\n");
    printHW(n-1);

}
int main(){
    int n;
    printf("enter the value of n >> ");
    scanf("%d",&n);
    printHW(n);
    return 0;
}
