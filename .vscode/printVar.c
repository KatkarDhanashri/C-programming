#include<stdio.h>
#include "variables.h"
int main(){
      int m=43;       //local variable
      printf("%d\n",m);
   // printf("%d",m);  //local variable
    printf("%d\n",a);//global 
    
    printf("%d\n",b);//external variable

    register int c;
    c=a+b;         //register variable
    printf("%d\n",c);

    // d++;            //static variable
    // printf("%d\n",d);

    auto int e=11;   //auto variable
    printf("%d\n",e);
    
    f=75;            //volatile 
    printf("%d\n",f);
   
    //g=60;    cant change constant
    printf("%d\n",g);  //constant

    add();
    return 0;
}