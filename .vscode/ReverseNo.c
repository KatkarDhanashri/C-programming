#include<stdio.h>
int main(){
    int no,rem,rev=0;
    printf("Enter a number: ");
    scanf("%d",&no);
    while(no!=0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    printf("Reverse no is:%d",rev);
}