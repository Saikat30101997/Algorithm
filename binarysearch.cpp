// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int a[], int high, int low, int x)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(x<a[mid])
            high=mid-1;
        else if(x>a[mid])
            low=mid+1;
        else
            return mid;
    }


}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",
                            result);
    return 0;
}
