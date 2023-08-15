#include<stdio.h>
int main(){
    // int a[10],no,i;
    // printf("Enter a number: ");
    // scanf("%d",&no);
    // for(i=0;no>0;i++){
    //     a[i]=no%2;
    //     no=no/2;
    // }
    // for(i=i-1;i>=0;i--){
    //     printf("%d",a[i]);
    // }
    // return 0;

    int a[10],n,i;
    printf("enter a number: ");
    scanf("%d",&n);
   for(i=0;n>0;i++){
    a[i]=n%2;
    n=n/2;
   }
   for(i=i-1;i>=0;i--){
    printf("%d",a[i]);
   }
}