#define _CRT_SECURE_NO_WARNINGS 1

////ʵ��2.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 ������" << endl;
//	int x;
//	cout << "������x��ֵ��";
//	cin >> x;
//	if (x < 0)
//		cout << "y=" << x;
//	else if (x >= 0 && x < 10)
//		cout << "y=" << 2 * x - 1;
//	else
//		cout << "y=" << 3 * x - 1;
//	return 0;
//}

////ʵ��2.2
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 ������" << endl;
//	char ch;
//	cout << "������һ���ַ�" << endl;
//	cin >> ch;
//	if (ch >= 65 && ch <= 122)
//		cout << "���������һ����ĸ";
//	else if (ch >= 49 && ch <= 57)
//		cout << "���������һ������";
//	else
//		cout << "��������Ƿ����֡�����ĸ";
//	return 0;
//}

////ʵ��2.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 ������" << endl;
//	int i;
//	cout << "�����빤�䣺";
//	cin >> i;
//	if (i < 1 && i>= 0)
//		cout << "���ݼ�Ϊ0��";
//	else
//		if (i >= 1 && i <= 5)
//			cout << "���ݼ�Ϊ7��";
//		else
//			if (i >= 6 && i <= 10)
//				cout << "���ݼ�Ϊ14��";
//			else
//				if (i >= 11 && i <= 20)
//					cout << "���ݼ�Ϊ21��";
//				else
//					if (i >= 21)
//						cout << "���ݼ�Ϊ28��";
//					else
//						cout << "������������";
//	return 0;
//}

////ʵ��2.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 ������" << endl;
//	int n, i;
//	cout << "������ͻ�����ʴ���������";
//	cin >> n;
//	i = n / 50;
//	switch (i)
//	{
//	case 0:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 38;
//		break;
//	case 1:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 35;
//		break;
//	case 2:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 32;
//		break;
//	case 3:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 32;
//		break;
//	case 4:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 30;
//		break;
//	case 5:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 30;
//		break;
//	default:
//		cout << "�ͻ������ܽ��Ϊ ��" << n * 28;
//		break;
//	}
//	return 0;
//}//20 80 120 250 400

//ʵ��2.5
#include <iostream>
using namespace std;
int main()
{
	cout << "2021110571 ������" << endl;
	int a, b;
	cout << "******��һ��******" << endl;
	cout << "  1     ������    " << endl;
	cout << "  2.    ��ʯͷ    " << endl;
	cout << "  3.    ����      " << endl;
	cout << "******************" << endl;
	cout << "������׵�ѡ��1~3����";
	cin >> a;
	cout << "�������ҵ�ѡ��1~3����";
	cin >> b;
	switch (a - b)
	{
	case 0:
		cout << "���Ϊ��ƽ��";
		break;
	case 1:
		cout << "���Ϊ����ʤ";
		break;
	case 2:
		cout << "���Ϊ����ʤ";
		break;
	case -1:
		cout << "���Ϊ����ʤ";
		break;
	case -2:
		cout << "���Ϊ����ʤ";
		break;
	}
	return 0;
}