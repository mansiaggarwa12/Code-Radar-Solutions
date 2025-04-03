void bubbleSort(int arr[] , int n)
{
    int a,b;
    for (a=0;a<n-1;a++)
    {
        for (b=0;b<n-a-1;b++)
        {
            if (arr[b]>arr[b+1])
            {
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
        }
    }
}
void printArray (int arr[], int n)
{
    for (int a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }
}