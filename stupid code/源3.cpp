//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int k;
//	char s;
//	while (cin >> k >> s)
//	{
//		int a[50][50]{ {0} };
//		for (int i = 0; i < k; i++)
//		{
//			for (int j = 0; j < k; j++)
//			{
//				a[0][j] = 1;
//				a[i][0] = 1;
//				if (i != 0 && j != 0)
//				{
//					a[i][j] = a[i - 1][j] + a[i][j - 1];
//				}
//			}
//		}
//		for (int i = 0; i < k; i++)
//		{
//			for (int j = 0; j < k - i; j++)
//			{
//				while (a[i][j]-- > 0)
//				{
//					cout << s;
//				}cout << " ";
//			}
//			cout << endl;
//		}
//	}
//}