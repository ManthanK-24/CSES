
#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
#define endl "\n"
#define ft first 
#define sd second 
#define pb push_back
int main() 
{
    
    
    int tc=1;
    //cin>>tc;
    for(int ii=1;ii<=tc;ii++)
    {
        //cout<<"Case #"<<ii<<": ";
        ll n,x;
        cin>>n;
        ll missno = 0;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            missno = missno^x;
            missno = missno^i;
        }
        missno = missno^n;
        cout<<missno;
       
    	cout<<endl;
    	 
    }
    
	return 0;
}
