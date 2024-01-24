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
	//cin>>tc;
	for (int ii = 1; ii <= tc; ii++)
	{
		//cout<<"Case #"<<ii<<": ";

		ll n, ans = 0;
		cin >> n;
		vector<ll> vt(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> vt[i];
			if (i > 0 && vt[i] < vt[i - 1])
			{
				ans += vt[i - 1] - vt[i];
				vt[i] = vt[i - 1];
			}
		}
		cout << ans;

		cout << endl;

	}

	return 0;
}
