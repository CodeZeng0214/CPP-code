#define _CRT_SECURE_NO_WARNINGS 1

////ʵ��3.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int n = 1;
//	for (int i = 10; i > 1; i--)
//	{
//		n = (n + 1) * 2;
//	}
//	cout << "ԭ����������Ϊ" << n << "��";
//    return 0;
//}
//

////ʵ��3.2
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, n;
//	int c = 1;
//	int y = 0;
//	cout << "2021110571-������" << endl;
//	cout << "*********************" << endl;
//	cout << "    ����ת��ϵͳ     " << endl;
//	cout << "1���˽���ת��Ϊʮ����" << endl;
//	cout << "2��ʮ����ת��Ϊ�˽���" << endl;
//	cout << "*********************" << endl;
//	cout << "��ѡ�����1��2��";
//	cin >> x;
//	cout << "��������ת�������ݣ�";
//	cin >> n;
//	if (x == 1)
//	{
//		do
//		{
//			y = y + n % 10 * c;
//			c = c * 8;
//			n = n / 10;
//		} while (n != 0);
//		cout << "ת��Ϊ��" << y;
//	}
//	if (x == 2)
//	{
//		do
//		{
//			y = y + n % 8 * c;
//			c = c * 10;
//			n = n / 8;
//		} while (n != 0);
//		cout << "ת��Ϊ��" << y;
//	}
//	return 0;
//}

////ʵ��3.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int n = 0;
//	for (int i = 1; i <= 10000; i++)
//	{
//		if (i % 3 == 1 && i % 5 == 2 && i % 7 == 1)
//		{
//			n++;
//		}
//	}
//	cout << "10000���ڳ���3��1������5��2������7��1����������" << n << "��";
//	return 0;
//}

//ʵ��3.4
#include <iostream>
using namespace std;
int main()
{
	cout << "2021110571-������" << endl;
	double x, y;
	double j = 1;
	double item = 1;
	double PI = 3.14159265; 
	int n = 1;
	int c = -1; 
	cout << "������һ���Ƕ�ֵ��";
	cin >> y;
	x = y * PI / 180;
	do
	{
		item = item * x * x / ((2 * n - 1) * (2 * n));
		j = j + c * item;
		n = n * 2;
		c = c * c;
	} while (item > 0.0000001);
	cout << "cos(x)=" << j;
	return 0;
}

////ʵ��3.5
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	double w = 0;
//	double W = 0;
//	double x = 0;
//	int i = 1;
//	do
//	{
//		cout << "�������" << i << "λְ���Ĺ��ʣ�������������";
//		cin >> x;
//		if (x <= 5000)
//		{
//			w = 0;
//		}
//		else if (x > 5000 && x <= 8000)
//		     {
//			w = (x - 5000) * 0.03;
//		     }
//		     else if (x > 8000 && x <= 17000)
//		          {
//			           w = (x - 8000) * 0.1 + 3000 * 0.03;
//		          }
//			      else if (x > 17000 && x <= 30000)
//		               {
//			                 w = (x - 17000) * 0.2 + (12000 - 3000) * 0.1 + 3000 * 0.03;
//		               }
//		x = x - w;
//		if (x >= 0)
//		{
//			cout << "��" << i << "λְ���Ĺ���Ϊ��" << x;
//			cout << ",��˰��Ϊ��" << w << endl;
//			cout << "****************************************" << endl;
//			i++;
//			W = W + w;
//		}
//	} while (x >= 0);
//	cout << " " << endl;
//	cout << "ְ��������Ϊ��" << i - 1;
//	cout << "���ܽ�˰��Ϊ��" << W;
//	return 0;
//}