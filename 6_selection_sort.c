// Selection Sort Code
#include<stdio.h>
void selection_sort(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        int min=i;
        for(int j=i+1; j<=n-1; j++){ //this inner loop finds minimum value in array
            if(arr[j]<arr[min]){
                min=j; //here index are swaped
            }
        }
        int temp = arr[min]; // here elements are swapped using the index
            arr[min] = arr[i];
            arr[i] = temp;
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

    selection_sort(arr,n);
    return 0;
}