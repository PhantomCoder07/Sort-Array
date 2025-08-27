#include <stdio.h>
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void take_array (int a[], int n)
{
    printf("Enter array element: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
void selection_sort (int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        int temp=i;
        for (int j=i+1; j<n; j++)
        {
            if (a[j]<a[temp])
                temp=j;
        }
        swap(&a[temp],&a[i]);
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
    printf ("Enter the limit: ");
    scanf("%d",&n);
    int arr[n];
    take_array(arr,n);
    printf("The given array:\n");
    display(arr,n);
    selection_sort(arr,n);
    printf("Sorted array in Acsending Order:\n");
    display(arr,n);
    return 0;
}
