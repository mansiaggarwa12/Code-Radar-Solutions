kthSmallest(int arr , int n , int k)
{
    int a,b;
    for (a=0;a<n;a++)
    {
        for (b=a+1;b<n-1;b++)
        {
            if (arr[b]>ar[b+1])
            {
                int temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
        }
    }
    return arr[k];
}
