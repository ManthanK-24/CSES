
#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
#define endl "\n"
#define ft first 
#define sd second 
#define pb push_back
int main() 
{
    
    
    int tc = 1;
	//cin>>tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";
		ll n;
		cin >> n;
		if (n == 1)
		{
			cout << 1;
			return 0;
		}
		while (n != 1)
		{
			cout << n << " ";
			if (n % 2)n = 3 * n + 1;
			else n = n / 2;
			if (n == 1)
			{
				cout << 1;
				break;
			}
		}

		cout << endl;

	}
    
	return 0;
}
