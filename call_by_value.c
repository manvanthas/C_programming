#include<stdio.h>
void Square(int n);
int main(){
    int n=4;
    printf("the value of square of n wiil not be printed %d\n",n);
    Square(n);
}
void Square(int n){
    n=n*n;
    printf("the value of n  square is %d\n",n);
}