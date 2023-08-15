#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    //--------input array
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // //---------print array
    // for(int i=0;i<n;i++){
    // printf("%d ",a[i],"\n");
    // }

    // //---------reverse array
    // for(int i=n-1;i>=0;i--){
    //     printf("%d ",a[i]);
    // }

    //sizeof array
    int l=sizeof(a)/sizeof(a[0]);
    printf("%d",l);
    return 0;
}