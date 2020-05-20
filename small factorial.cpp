#include<iostream>

int solveFactorial(int n)
{
    int i,fact = 1;
    if(n == 1)
        return n;
    else
    { 
        for(i = 2; i <= n; i++ )
        {
            fact = fact*i;
        }
    }
    return fact;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        std::cout<<solveFactorial(n);
        std::cout<<"\n";
    }
}