// Linear Search C program
// This code will only find the first occurrence of the key element in the array.
#include<stdio.h>
int linear_search(int arr[],int key,int n){ //Declaring Function for L.S.
    for(int i=0; i<n; i++){
        if(key==arr[i]) return i;
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the Number of Elements of a Array: "); //Taking Size of Array from User
    scanf("%d",&n);

    printf("Enter Elements in the Array: ");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);  //Taking Input in The Array
    }

    int key;
    printf("Enter Key Element to Search : "); //Element to Search
    scanf("%d",&key);

    int result = linear_search(arr,key,n); //Function Call

    if(result==-1) printf("%d is Not Found",key);
    else printf("%d element is found at '%d' index",key,result);
    return 0;
}