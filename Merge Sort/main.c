#include <stdio.h>
void take_array (int a[], int n)
{
    printf("Enter array element: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void merge (int low, int high, int mid, int arr[])
{
    int i,j,k;
    int temp[high+1];
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid && j<=high)
    {
        if (arr[i]>arr[j])
            temp[k++]=arr[j++];
        else
            temp[k++]=arr[i++];
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while (j<=high)
    {
        temp[k++]=arr[j++];
    }
    for (i=low; i<=high; i++)
    {
        arr[i]=temp[i];
    }
}
void merge_sort (int low, int high, int arr[])
{
    if (low<high)
    {
        int mid = (low+high)/2;
        merge_sort (low,mid,arr);
        merge_sort (mid+1,high,arr);
        merge (low,high,mid,arr);
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
    int n;
    printf ("Enter the limit: ");
    scanf ("%d",&n);
    int arr[n];
    take_array(arr,n);
    printf ("The given array:\n");
    display (n,arr);
    merge_sort (0,n-1,arr);
    printf ("The sort array:\n");
    display (n,arr);
    return 0;
}
