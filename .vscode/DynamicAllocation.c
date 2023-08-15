#include<stdio.h>
int main(){
    //-----------malloc------------
    // int n,*ptr;
    // printf("Enter number of elements:");
    // scanf("%d",&n);
    // printf("Entered number of elements: %d\n", n);
    // ptr=(int*)malloc(n*sizeof(int));
    // if(ptr==NULL){
    //     printf("\nmemory is not allocated");
    // }
    // else{
    //     printf("\nmemory is allocated");
    // for(int i=0;i<=n;i++){
    //  ptr[i]=i+1;
    // }
    // printf("\n");
    // for(int i=0;i<=n;i++){
    //     printf("%d",ptr[i]);
    // }
    // }

    //--------------calloc--------------
    int *ptr;
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated");
        exit(0);
    }
    else{
       printf("Memory is allocated");
       for( i=0;i<=n;i++){
        scanf("%d",&ptr[i]);
       }
       for(i=0;i<=n;i++){
        printf("%d",ptr[i]);
       }
//----------------Reallocate memory--------
 n = 10;
        printf("\n\nEnter the new size of the array: %d\n", n);
 
        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, n * sizeof(int));
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");
 
        // Get the new elements of the array
        for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    //-----------free
    free(ptr);
    printf("calloc memory succcessfully freed ");
    }

	return 0;
}