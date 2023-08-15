#include<stdio.h>
int main(){
    int no,rem,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&no);
    temp=no;
    while(no>0){
        rem=no%10;
        sum=sum*10+rem;
        no=no/10;
    }
    if(temp==sum){
        printf("number is palindrome");
    }
    else{
        printf("number is not palindrome");
    }
    return 0;
}