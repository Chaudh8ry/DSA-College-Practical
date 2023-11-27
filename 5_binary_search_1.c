// Binary Search Using Iterative Method
#include <stdio.h>
int binary_search(int arr[], int key, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (high + low)/2;
        if(arr[mid]==key) return mid;
        else if(key>arr[mid]) low = mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter No. of Elements in Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Elements in Sorted Order: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

    int key;
    printf("Enter Key Element to Search: ");
    scanf("%d",&key);

    int result = binary_search(arr,key,n);

    if(result == -1) printf("Element Not Found");
    else printf("%d found at index = %d",key,result);

    return 0;
}