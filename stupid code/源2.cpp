////在数学里有个基本定理：任意一个大于1的合数都可以分解成有限个素数（质数）的乘积，且分解是唯一的。证明挺麻烦，但是我们可以用计算机来验证。请你来试一试!
////Input
////输入若干合数（ > 2），输入0表示输入结束。
////Output
////对于每个有效的正整数输入，输出其分解为若干个素数乘积的表达式，表达式因子按升序（从小到大）输出。一个表达式一行。
////Sample Input
////45 36 34 18 420 0
////Sample Output
////45 = 3 * 3 * 5
////36 = 2 * 2 * 3 * 3
////34 = 2 * 17
////18 = 2 * 3 * 3
////420 = 2 * 2 * 3 * 5 * 7
//#include<iostream>
//#include<string>
//using namespace std;
//void fd(int k,string& s)
//{
//	s.clear();
//	if (k<=1)
//	{
//		return;
//	}
//	s += to_string(k) + "=";
//	for (int i = 2; i*i<=k; i++)
//	{
//		while(k%i==0)
//		{
//			s += to_string(i);
//			k /= i;
//			if (k>1)
//			{
//				s += "*";
//			}
//		}
//	}
//	if (k>1)
//	{
//		s += to_string(k);
//	}
//	cout << s << endl;
//
//}
//int main()
//{
//	int k;
//	string s;
//	while (cin >> k)
//	{
//		fd(k,s);
//	}
//}