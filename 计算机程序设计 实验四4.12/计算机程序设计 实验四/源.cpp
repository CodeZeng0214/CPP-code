#define _CRT_SECURE_NO_WARNINGS 1
////ʵ��4.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int id, c, m, e, n, max;
//	int i = 1;
//	cout << "������༶������";
//	cin >> n;
//	do
//	{
//		cout << "============================" << endl;
//		int num = 1;
//		cout << "������" << i << "���ѧ��������";
//		cin >> num;
//		for (int j = 1; j <= num; j++)
//		{
//			cout << "�������" << j << "��ѧ����ѧ�š����ġ���ѧ��Ӣ��ɼ���" << endl;
//			cin >> id >> c >> m >> e;
//			if (c >= m && c >= e)
//				cout << "ѧ��" << id << "���ĳɼ��ã����ĳɼ�Ϊ��" << c << endl;
//			else
//				if (m >= e)
//					cout << "ѧ��" << id << "��ѧ�ɼ��ã���ѧ�ɼ�Ϊ��" << m << endl;
//				else
//					cout << "ѧ��" << id << "Ӣ��ɼ��ã�Ӣ��ɼ�Ϊ��" << e << endl;
//		}
//		i++;
//	} while (i <= n);
//	return 0;
//}

////ʵ��4.2
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int n = 0;
//	cout << "�һ���Ԫ�󳮵ķ������£�" << endl;
//	cout << "    ʰԪ   ��ʰԪ  ��ʰԪ" << endl;
//	for (int ten = 0; ten <= 10; ten++)
//		for (int twenty = 0; twenty < 10; twenty++)
//			for (int fifty = 0; fifty < 10; fifty++)
//				if (ten * 10 + twenty * 20 + fifty * 50 == 100)
//				{
//					n++;
//					cout << setw(2) << n << setw(6) << ten << setw(9) << twenty << setw(9) << fifty << endl;
//				}
//    return 0;
//}

////ʵ��4.3
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int num1, num2, c;
//	int a = 0;
//	cout << "�밴��С�����˳������������������" << endl;
//	cin >> num1 >> num2;
//	cout << num1 << "��" << num2 << "֮���λ����֮��Ϊ7�����У�" << endl;
//	for (num1; num1 <= num2; num1++)
//	{
//		int n = num1;
//		int a = 0;
//		do
//		{
//		    c = n % 10;
//			n = n / 10;
//			a = a + c;
//		} while (n != 0);
//		if (a == 7)
//			cout << num1 << "    ";
//	}
//	return 0;
//}

////ʵ��4.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int num1, num2;
//	
//	cout << "������������������" << endl;
//	cin >> num1 >> num2;
//	int z = 0;
//	int c = 0;
//	if (num1 >= num2)
//	{
//		c = num1;
//		num1 = num2;
//		num2 = c;
//	}
//	for (int i=num1; i <= num2; i++)
//	{
//		int f = 1;
//		for(int j = 2;j<i;j++)
//		{
//			if (i % j == 0)
//			{
//				f = 0;
//			}
//		}
//		if (f == 1)
//			z = z + i;
//	}
//	cout << num1 << "��" << num2 << "֮�����������ĺ�Ϊ��" << z;
//	return 0;
//}

////ʵ��4.5
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int n = 0;
//	cout << "������n��ֵ��n<10����";
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//			cout << " ";
//		for (int j = 1; j <= i; j++)
//			cout << i;
//		cout << endl;
//	}
//	for (int i = n-1; i >0; i--)
//	{
//		for (int j = 1; j <= n - i; j++)
//			cout << " ";
//		for (int j = 1; j <= i; j++)
//			cout << i;
//		cout << endl;
//	}
//	return 0;
//}