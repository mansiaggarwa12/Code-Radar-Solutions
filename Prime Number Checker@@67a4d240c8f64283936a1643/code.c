int isPrime(int num)
{
    if (mun==1)
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
        }
        return 1;
    }
}