#include<stdio.h>
int factorial(int n){
    if(n==0)
    return 1;
    return n*factorial(n-1);
}
int main(){
    int fact=1,no;
    printf("Enter a number: ");
    scanf("%d",&no);
    // for(int i=1;i<=no;i++){
    //     fact=fact*i;
    // }
    // printf("Factorial of %d is: %d ",no,fact);
   int f= factorial(no);
   printf("Factorial of %d is: %d",no,f);
    return 0;
}