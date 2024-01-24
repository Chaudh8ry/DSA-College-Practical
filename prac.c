#include<stdio.h>
void bubble_sort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter value: ");
    for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
    }
    
    bubble_sort(arr,n);
    return 0;
}