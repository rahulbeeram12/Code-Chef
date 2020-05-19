#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x = 0;
    while(t--)
    {
        int N;
        cin>>N;
        x = (N/2)+1;
        cout<<x<<"\n";
    }
}