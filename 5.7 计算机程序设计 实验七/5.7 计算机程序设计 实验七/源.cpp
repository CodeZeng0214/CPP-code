#define _CRT_SECURE_NO_WARNINGS 1

////ʵ��7.1
//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int a[10], temp, mid, value;
//	srand(time(NULL));
//	cout << "10��10��100����������Ϊ��" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		a[i] = 10 + rand() % 91;
//		cout << a[i] << "  ";
//	}
//	for (int i = 0; i < 9; i++)
//	{
//	    for (int j = 0; j < 9 - i; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	cout << endl << "���Ӵ�С���еĽ��Ϊ��" << endl;
//	for (int i = 0; i < 10; i++)
//		cout << a[i] << "  ";
//	cout << endl << "������Ҫ���ҵ���:";
//	cin >> value;
//	int bot = 0;
//	int top = 9;
//	while (bot <= top)
//	{
//		mid = (bot + top) / 2;
//		if (value == a[mid])
//			break;
//		else
//			if (value < a[mid])
//				bot = mid + 1;
//			else
//				top = mid - 1;
//	}
//	if (bot >= top)
//		cout << value << "�ڵ�" << mid + 1 << "��λ��" << endl;
//	else
//		cout << "û�ҵ�" << endl;
//	return 0;
//}

////ʵ��7.2
//#include <iostream>
//#include <ctime>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	int a[11] = { 1,1 }, n, i, ch, c;
//	int n2 = 0;
//	int p = 0;
//	cout << "�Զ����ɵ�ʮ��������" << endl;
//	for (i = 2; i < 10; i++)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << "  ";
//	}
//	cout << endl << "�������������ݣ�";
//	cin >> ch;
//	cout << "�������������Ϊ��" << endl;
//	while (ch > a[p] && p < 10)
//		p++;
//	for (i = 9; i >= p; i--)
//		a[i + 1] = a[i];
//	a[p] = ch;
//	for (i = 0; i < 11; i++)
//	{
//		cout << a[i] << "  ";
//	}
//	cout << endl << "ȥ�غ���������Ϊ��" << endl;
//	for (i = 0; i < 11 - n2; i++) 
//	{
//		c = a[i];
//		for (int j = i + 1; j < 11 - n2; j++)
//			if (a[j] == c) 
//			{
//				for (int k = j; k < 11 - n2; k++)
//				    a[k] = a[k + 1];
//                n2++;
//				j--;
//			}
//	}
//	for (i = 0; i < 11 - n2; i++)
//		cout << a[i] << "  ";
//	float ADD = 0;
//	for (i = 0; i < 11 - n2; i++)
//		ADD = ADD + a[i];
//	cout << fixed;
//	cout << setprecision(2);
//	cout << endl << "����������Ԫ�ص�ƽ��ֵΪ��" << ADD / (11 - n2) << endl;
//	cout << "�����и���ƽ��ֵ��Ԫ�أ�" << endl;
//	for (i = 0; i < 11 - n2; i++)
//		if(a[i]>ADD/(11-n2))
//		cout << a[i] << "  ";
//	return 0;
//}