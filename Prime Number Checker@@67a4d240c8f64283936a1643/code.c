int isPrime(int num)
{
    int prime=0;
    if (num==0||num==1)
    {
        return 0;
    }
    else
    {
    for (int a=2;a*a<=num;a++)
    {
        if (num%a==0)
        {
            prime=0;
        }
        else 
        {
            prime=1;
        }
    }
    }
    if (prime==0)
    {
        return 0;
    }
    else if (prime=1)
    {
        return 1;
    }
}