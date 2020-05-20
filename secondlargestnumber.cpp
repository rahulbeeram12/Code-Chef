#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
                           //if a is greater 
        if(a>=b && a>=c)
        {
            if(b>=c)
                cout<<b;
            else
                cout<<c;
        }
                          //if b is greater 
        else if(b>=c && b>=a)
        {
            if(c>=a)
                cout<<c;
            else 
                cout<<a;
        }
                            //if c is greater
        else if(c>=a && c>=b)
        {
            if(b>=a)
                cout<<b;
            else 
                cout<<a;
        }
        cout<<endl;
    }
    
}