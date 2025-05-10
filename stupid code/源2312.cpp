//#include<iostream>
//
//using namespace std;
//
//char a[500];
//char sw(char a)
//{
//	if (a>=65&&a<=90)
//	{
//		a=tolower(a);
//	}
//	 else if (a>=97&&a<=122)
//	{
//		a=toupper(a);
//	}
//	 else if ( a==32)
//	{
//		a = 35;
//	}
//	 else if (isdigit(a))
//	{
//		a = a;
//	}
//	 else
//	{
//		a = 63;
//	}
//	return a;
//}
//int main()
//{
//	cin.getline(a, sizeof(a));
//	for (int i = 0; i <strlen(a); i++)
//	{
//		a[i] = sw(a[i]);
//
//	}
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if(isdigit(a[i]))
//			cout<<"*";
//			cout<<a[i];
//	}
//	cout << endl << strlen(a);
//}