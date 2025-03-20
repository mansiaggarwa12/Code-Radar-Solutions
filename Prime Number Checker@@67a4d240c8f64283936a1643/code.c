int isPrime(int num)
{
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
            return 0;
        }
        else 
        {
            return 1;
        }
    }
    }
}