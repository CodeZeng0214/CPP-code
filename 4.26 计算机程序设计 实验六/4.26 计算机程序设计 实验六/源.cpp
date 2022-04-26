#define _CRT_SECURE_NO_WARNINGS 1

////实验6.1
//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	const int N = 15;
//	double a[N + 1], sum = 0, temp = 0;
//	cout << "请输入十五个实型数：" << endl;
//	for (int i = 0; i < N; i++)
//		cin >> a[i];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << setw(10) << a[i*5+j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < N; i++)
//		sum = sum + a[i];
//	a[N] = sum / N;
//	cout << "调整后的数据为：" << endl;
//	for (int i = 0, j = N - 1; i < j; )
//	{
//		if (a[i] < a[N] && a[j] >= a[N])
//		{
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//			i++;
//			j--;
//		}
//		else if (a[i] >= a[N] && a[j] >= a[N])
//			i++;
//		else if (a[i] < a[N] && a[j] < a[N])
//			j--;
//		else
//		{
//			i++;
//			j--;
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if(i*5+j<=15)
//			cout << setw(10) << a[i * 5 + j];
//		}
//		cout << endl;
//	}
//	return 0;
//}


////实验6.2
//#include <iostream>
//#include<iomanip>
//using namespace std;
//int prime(int y)
//{
//		int fz = 1;
//		for (int j = 2; j < y; j++)
//		{
//			if (y % j == 0)
//			{
//				fz = 0;
//			}
//		}
//		if (y == 1)
//			fz=0;
//		return fz;
//}
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	const int N = 10;
//	int a[N], b[N], max, min, x = 0, n = 0, i, f, j = 0;
//	cout << "请输入十个正整数：" << endl;
//	for (int i = 0; i < N; i++)
//	cin >> a[i];
//	max = a[0];
//	min = a[0];
//	for(i=1;i<N;i++)
//		if (a[i] > max)
//		{
//			max = a[i];
//			x = i;
//		}
//	cout << "数组中的最大值为：" << max << "，其下标为" << x << endl;
//	for (i = 1; i < N; i++)
//	if (a[i] < min)
//	{
//		min = a[i];
//		n = i;
//	}
//	cout << "数组中的最小值为：" << min << "，其下标为" << n << endl;
//	for (int i = 0; i < N; i++)
//	{
//		f = prime(a[i]);
//		if (f == 1)
//		{
//			b[j] = a[i];
//			j++;
//		}
//	}
//	cout << "素数为：";
//	for(int jz = j-1; jz >= 0; jz--)
//	{
//		 cout << setw(4) << b[jz];
//	}
//	return 0;
//}