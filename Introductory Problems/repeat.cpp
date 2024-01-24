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

		string s;
		cin >> s;
		ll mx = 0, tmp = 1;
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] == s[i - 1])
			{
				tmp++;
				if (i == s.size() - 1)
					mx = max(mx, tmp);

			}
			else
			{
				mx = max(mx, tmp);
				tmp = 1;
			}
		}
		cout << mx;
		cout << endl;

	}

	return 0;
}
