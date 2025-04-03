void selectionSort (char arr[] , int n)
{
    int a,b;
    for (a=0;a<n;a++)
    {
        int smallestidx = a;
        for (b=a+1;b<n;b++)
        {
            if (arr[b]<arr[smallestidx])
            {
                smallestidx = b;
            }
        }
        char temp = arr[b];
        arr[b] = arr[smallestidx];
        arr[smallestidx] = temp;
    }
}
void printArray(char arr[], int n)
{
    int a;
    for (a=0;a<n;a++)
    {
        printf("%d ", arr[a]);
    }
}