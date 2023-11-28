// C code for Bubble Sort
#include<stdio.h>
    void bubble_sort(int arr[],int n){
        for(int i=n-1; i>0; i--){ //This Loop is For No. of Passes 
            for(int j=0; j<=i-1; j++){
                if(arr[j]>arr[j+1]){
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("After Sorting Array : ");
        for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    }
int main(){
    int n;
    printf("Enter No. of Elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter Values in Array: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    bubble_sort(arr,n);
    return 0;
}