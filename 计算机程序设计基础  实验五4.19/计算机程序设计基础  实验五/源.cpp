#define _CRT_SECURE_NO_WARNINGS 1

////实验5.1
//#include <iostream>
//using namespace std;
//double f(double x)
//{
//	if (x >= 0)
//		return sqrt(x);
//	else
//		return fabs(x);
//}
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	double x, y;
//	cout << "请输入x：";
//	cin >> x;
//	cout << "y=" << f(x);
//	return 0;
//}

////实验5.2
//#include <iostream>
//#include <ctime>
//using namespace std;
//int jisuan(int x, int y, int n)
//{
//	if (n == 43)
//		return x + y;
//	else if (n == 45)
//		return x - y;
//	else if (n == 42)
//		return x * y;
//	else
//		return x / y;
//}
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int x, y, j;
//	char n;
//	srand(time(NULL));
//	x = 1 + rand() % 10;
//	y = 1 + rand() % 10;
//	n = 1 + rand() % 4;
//	if (n == 1)
//		n = 43;
//	else if (n == 2)
//		n = 45;
//	else if (n == 3)
//		n = 42;
//	else
//		n = 47;
//	cout << "请计算" << x << n << y << "=";
//	cin >> j;
//	int d = jisuan(x, y, n);
//	if (j == d)
//		cout << "计算准确！";
//	else
//		cout << "计算错误！" << x << n << y << "=" << d;
//	return 0;
//}

////实验5.3
//#include <iostream>
//using namespace std;
//int my_pow(int x, int y)
//{
//	int z = 1;
//	for (y; y > 0; y--)
//	{
//		z = z * x;
//	}
//	return z;
//}
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int a, b;
//	cout << "求a的b次方与b的a次方的和，请输入a、b：";
//	cin >> a >> b;
//	int p = my_pow(a, b);
//	int q = my_pow(b, a);
//	cout << a << "的" << b << "次方为：" << p << endl;
//	cout << b << "的" << a << "次方为：" << q << endl;
//	cout << a << "的" << b << "次方与" << b << "的" << a << "次方和为：" << p + q;
//	return 0;
//}

////实验5.4
//#include <iostream>
//using namespace std;
//int yue(int x, int y)
//{
//	int r = x % y;
//	if (r != 0)
//		do 
//		{
//			x = y;
//			y = r;
//			r = x % y;
//		} while (r != 0);
//		return y;
//}
//int bei(int x, int y)
//{
//	 int max = (x > y) ? x : y;
//	do
//	{
//		if (max % x == 0 && max % y == 0)
//		{
//			break;
//		}
//		else
//			max++;
//	} while (true);
//	return max;
//}
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int a, b;
//	cout << "请输入两个正整数：";
//	cin >> a >> b;
//	cout << "最大公约数是：" << yue(a, b) << endl;
//	cout << "最大公倍数是：" << bei(a, b);
//	return 0;
//}

////实验5.5
//#include <iostream>
//using namespace std;
//int shui(int x, int y)
//{
//	int r, z = 0;
//	for (x; x <= y; x++)
//	{
//		int a = x;
//		int j = 0;
//		do
//		{
//			r = a % 10;
//			a = a / 10;
//			j = j + r * r * r;
//		} while (a != 0);
//		if (j == x)
//			z = z + j;
//	}
//	return z;
//}
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int m, n;
//	cout << "请依次输入数字m，n（n>m>0）:" << endl;
//	cin >> m >> n;
//	cout << m << "~" << n << "之间的所有水仙花数之和为：" << shui(m, n);
//	return 0;
//}