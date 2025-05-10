////交换数字的题目（个人认为最坑的）：
////输入一串数列，每个数列由a1~an组成，现在规则如下：
////选出a1~an中最小值和最大值，将最小值和a1交换，再将最大值和an交换，输出出来交换后数列
////选出a2~an - 1中最小值和最大值，将最小值和a2交换，再将最大值和an - 1交换，输出出来交换后数列
////选出a3~an - 2最小值和最大值，将最小值和a3交换，再将最大值和an - 2交换，输出出来交换后数列
////如此类推。。。直到没有范围为止
//#include<iostream>
//
//using namespace	std;
//
//int k[5];
//int main()
//{
//	int mins,maxs;
//	int cnt = 0;
//	int m1=-1, m2=-1;
//	for (int i = 0; cin >> k[i]; i++) cnt++;
//	mins = k[0];
//	maxs = k[0];
//	for (int i = 0; i < cnt; i++)
//	{
//		if (k[i] < mins)
//		{
//			m1 = i;
//			mins = k[i];
//		}
//		if (k[i]>maxs)
//		{
//			m2 = i;
//			maxs = k[i];
//		}
//	}
//	cout << m1 << endl << m2;
//}