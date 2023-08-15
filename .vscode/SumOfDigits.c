#include<stdio.h>
int main(){
    int no,rem,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&no);
    temp=no;
    while(no!=0){
        rem=no%10;
        sum+=rem;
        no=no/10;
    }
    printf("sum of %d is: %d",temp,sum);
    return 0;
}