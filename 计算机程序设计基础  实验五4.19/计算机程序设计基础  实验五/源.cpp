#define _CRT_SECURE_NO_WARNINGS 1

////ʵ��5.1
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
//	cout << "2021110571-������" << endl;
//	double x, y;
//	cout << "������x��";
//	cin >> x;
//	cout << "y=" << f(x);
//	return 0;
//}

////ʵ��5.2
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
//	cout << "2021110571-������" << endl;
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
//	cout << "�����" << x << n << y << "=";
//	cin >> j;
//	int d = jisuan(x, y, n);
//	if (j == d)
//		cout << "����׼ȷ��";
//	else
//		cout << "�������" << x << n << y << "=" << d;
//	return 0;
//}

////ʵ��5.3
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
//	cout << "2021110571-������" << endl;
//	int a, b;
//	cout << "��a��b�η���b��a�η��ĺͣ�������a��b��";
//	cin >> a >> b;
//	int p = my_pow(a, b);
//	int q = my_pow(b, a);
//	cout << a << "��" << b << "�η�Ϊ��" << p << endl;
//	cout << b << "��" << a << "�η�Ϊ��" << q << endl;
//	cout << a << "��" << b << "�η���" << b << "��" << a << "�η���Ϊ��" << p + q;
//	return 0;
//}

////ʵ��5.4
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
//	cout << "2021110571-������" << endl;
//	int a, b;
//	cout << "������������������";
//	cin >> a >> b;
//	cout << "���Լ���ǣ�" << yue(a, b) << endl;
//	cout << "��󹫱����ǣ�" << bei(a, b);
//	return 0;
//}

////ʵ��5.5
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
//	cout << "2021110571-������" << endl;
//	int m, n;
//	cout << "��������������m��n��n>m>0��:" << endl;
//	cin >> m >> n;
//	cout << m << "~" << n << "֮�������ˮ�ɻ���֮��Ϊ��" << shui(m, n);
//	return 0;
//}