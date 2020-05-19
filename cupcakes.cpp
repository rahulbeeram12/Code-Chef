#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    int x = 0;
    while(t--)
    {
        int N;
        std::cin>>N;
        x = (N/2)+1;
        std::cout<<x<<"\n";
    }
}