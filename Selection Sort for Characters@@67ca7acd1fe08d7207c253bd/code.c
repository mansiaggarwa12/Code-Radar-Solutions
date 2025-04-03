void selectionSort (char arr[], int n)
{
    int a,b;
    for (a=0;a<n;a++)
    {
        int smallestidx = a;
        for (b=a+1;b<n;b++)
        {
            if (arr[b]<arr[smallestidx])
            {
                smallestidx=b;
            }
        }
        char temp = arr[a];
        arr[a] = arr[smallestidx];
        arr[smallestidx] = temp;
    }
}
void printArray (int arr[], int n)
{
    for (int a=0;a<n;a++)
    {
        printf ("%d ",arr[a]);
    }
}