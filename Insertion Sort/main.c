#include <stdio.h>
void take_array (int a[], int n)
{
    printf ("Enter array element: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void insertion_sort(int a[], int n)
{
    for (int i=1; i<n; i++)
    {
        int j=i-1;
        int k=a[i];
        while (j>=0 && k<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}
void display (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf ("Enter array limit: ");
    scanf ("%d",&n);
    int arr[n];
    take_array(arr,n);
    printf("Given array:\n");
    display(arr,n);
    insertion_sort(arr,n);
    printf("Sorted array in ascending order:\n");
    display(arr,n);
    return 0;
}
