int fact (int n)
{
    if (n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int factorialRange(int start,int end)
{
    if (start>end || start<0 || end<0)
    {
        printf("Invalid range");
        return 0;
    }
    for (int a = start; a <= end ; a++)
    {
        printf ("%d\n",fact(a));
    }
}
