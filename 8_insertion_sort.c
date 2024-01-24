// C code for Insertion Sort
// This Algorithm places the element at its suitable place
#include<stdio.h>
    void insertion_sort(int arr[],int n){
        for(int i=0; i<=n-1; i++){ // OuterLoop is For No. of Passes which will be (n-1) 
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
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

    insertion_sort(arr,n);
    return 0;
}