int kthSmallest(int arr[] , int n , int k)
{
    int a,b;
    for (a=0;a<n;a++)
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
    if (k<=n)
    {return arr[k-1];}
    else
    {
        return -1;
    }
}
