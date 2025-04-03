int fact (int n)
{
    if (n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int factorialRange(int start,int end)
{
    for (int a = start; a < end ; a++)
    {
        printf ("%d\n",fact(a));
    }
}