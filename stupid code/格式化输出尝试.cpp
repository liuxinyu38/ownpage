#include<iostream>
#include<string>

using namespace std;
int main()
{
	int n, m, l, w, a[20][20]{ 0 };
	cin >> n >> m;
	cin >> l >> w;
	//l -= 1;
	//w -= 1;
	//n -= 1;
	//m -= 1;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[l - 1][w - 2] = 1;
			a[l - 1][w + 2] = 1;
			a[l + 1][w - 2] = 1;
			a[l + 1][w + 2] = 1;
			a[l - 2][w - 1] = 1;
			a[l - 2][w + 1] = 1;
			a[l + 2][w - 1] = 1;
			a[l + 2][w + 1] = 1;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j];
		cout << endl;
	}

}