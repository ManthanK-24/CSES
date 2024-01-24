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

		ll n;
		cin >> n;
		if (n == 1)cout << 1;
		else if (n == 4)
			cout << 3 << " " << 1 << " " << 4 << " " << 2;

		else if (n <= 4)cout << "NO SOLUTION";
		else
		{
			for (int i = 1; i <= n; i = i + 2)
			{
				cout << i << " ";
			}
			for (int i = 2; i <= n; i = i + 2)
			{
				cout << i << " ";
			}
		}

		cout << "\n";

	}

	return 0;
}
