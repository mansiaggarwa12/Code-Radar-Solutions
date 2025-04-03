int fact (int n)
{
    if (n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int factorialRange(int start,int end)
{
    int a,res;
    for (a=start;a<end;a++)
    {
        res = fact (a);
    }
    return res;
}