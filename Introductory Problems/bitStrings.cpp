#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;


int main()
{
#ifndef  ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int tc = 1;
	//cin >> tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";

		ll n;
		cin >> n;
		ll mod = 1e9 + 7;

		ll ans = 1, cnt = 0;

		while (cnt < n)
		{
			ans = (ans * 2) % mod;
			cnt++;
		}
		cout << ans;


		cout << "\n";

	}

	return 0;
}
