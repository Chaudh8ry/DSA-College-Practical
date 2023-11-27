// Linear Search 2nd Type
// This code will store the positions of all occurrences of the key element in the foundPositions array and print them out at the end of the search.
#include<stdio.h>
void linear_search(int arr[],int key,int n){
    int foundPosition[n]; //Array to Store All Indices
    int numFound=0; // this will be index for foundPosition Array

    for(int i=0; i<n; i++){
        if(key==arr[i]){                    // if Key element is found in the array 
            foundPosition[numFound]=i;      //store the index 'i' in the 'foundPosition' array
            numFound++; 
        }
    }

    if(numFound>0){
        printf("%d is found at Index : ",key);
        for(int i=0; i<numFound; i++){
            printf("%d ",foundPosition[i]);
        }
    }

    else{
        printf("%d is Not Found",key);
    }
}

int main(){
    int n;
    printf("Enter No. of Elements in The Array: ");
    scanf("%d",&n);

    printf("Enter Value of Elements in The Array: ");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter Key Element to Search: ");
    scanf("%d",&key);

    linear_search(arr,key,n);

    return 0;
}