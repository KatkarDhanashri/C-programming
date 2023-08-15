#include<stdio.h>
int a=10;//global variable
extern int b=20;
//static int d=12;
volatile int f=32;
const int g=23;
//register int c=21;
//auto int e=11;
void add(){
    // register int c;
    // c=a+b;
    //auto int e=11;
    static int d=12;
    printf("%d",g);
    int m=20;//local variable

}