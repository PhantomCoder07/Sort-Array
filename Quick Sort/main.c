#include <stdio.h>
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition (int low, int high, int arr[])
{
    int pivot = arr[high];
    int i = (low-1);
    for (int j=low; j<high; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap (&arr[i],&arr[j]);
        }
    }
    swap (&arr[i+1],&arr[high]);
    return (i+1);
}
void quick_sort (int low, int high, int arr[])
{
    if (low<high)
    {
        int locate = partition (low,high,arr);
        quick_sort (low,locate-1,arr);
        quick_sort (locate+1,high,arr);
    }
}
void display (int n, int arr[])
{
    for (int i=0; i<n; i++)
    {
        printf ("%d ",arr[i]);
    }
    printf ("\n");
}
int main()
{
    int arr[]={2,3,4,5,6,7,8,5,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf ("The given array:\n");
    display (n,arr);
    quick_sort (0,n-1,arr);
    printf ("The sorted array:\n");
    display (n,arr);
    return 0;
}
