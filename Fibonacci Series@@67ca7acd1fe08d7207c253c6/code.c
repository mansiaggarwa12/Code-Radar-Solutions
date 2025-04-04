int fibo(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int fibonacciSeries (int a)
{
    for (int s=0;s<a;s++)
    {
        printf("%d ",fibo(s));
    }
}