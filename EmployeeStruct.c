// Online C compiler to run C program online
#include <stdio.h>
struct date{
    int dd,mm,yy;
};
struct Employee{
    char name[50];
    int id;
    struct date dob,doj;
};
int main() {
    int i;
    struct Employee e;
    
    printf("Enter name: ");
    scanf("%s",&e.name);
    
    printf("Enter id: ");
    scanf("%d",&e.id);
    
    printf("\nEnter date of joining: \n");
    printf("\n(dd-mm-yy):\n");
    scanf("%d%d%d",&e.doj.dd,&e.doj.mm,&e.doj.yy);
    
    printf("\nEnter date of birth:\n ");
    printf("(dd-mm-yy):");
    scanf("%d%d%d",&e.dob.dd,&e.dob.mm,&e.dob.yy);

    printf("\nName of employee: %s\n",e.name);
    printf("\nId of employee: %d\n",e.id);
    printf("\nDOJ of employee: %d%d%d\n",e.doj.dd,e.doj.mm,e.doj.yy);
    printf("DOB of employee: %d%d%d\n",e.dob.dd,e.dob.mm,e.dob.yy);
    return 0;
}