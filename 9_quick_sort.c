#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[n]);
    }
    printf("Unsorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}