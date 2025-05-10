////三进制输出：
////每组输入一行字符串（包括空格），每一个字符转化为ASCII的int形式，将int形式用三进制输出
//#include<iostream>
//#include<string>
//
//using namespace std;
//int fd(int k)
//{
//	string s;
//	while (k>0)
//	{
//		s += k % 3+'0';
//		k = k / 3;
//	}
//	int q=stoi(s);
//	return q;
//}
//int main()
//{
//	char x[100];
//	cin.getline(x, strlen(x));
//	int a[100];
//	for (int i = 0; i < strlen(x); i++)
//	{
//		a[i] = (int)x[i];
//	}
//	for (int i = 0; i < strlen(x); i++)
//	{
//		cout << fd(a[i])<<" ";
//	}
//}