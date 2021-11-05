#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==1)
                c++;
        }
        if(c%2==1)
        c=c-1;
        cout<<c/2<<endl;
    }
	
	return 0;
}
