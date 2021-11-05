#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2==0)
        {
            if(x==0 && y%2==0)
                cout<<"yes\n";
            else if(x==0 && y%2!=0)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
        else
            cout<<"no\n";
    }
	
	return 0;
}
