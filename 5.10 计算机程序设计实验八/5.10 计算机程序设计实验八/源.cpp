#pragma warning(disable:4996)��
////ʵ��8.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	const int N = 10;
//	int a[N][N] = { 0 };
//	cout << "���������Ľף�";
//	int n, flag;
//	cin >> n;
//	cout << "������һ��"<<n<<"*"<<n<<"����ÿ����֮���ÿո�����ÿ��������ɺ󰴻س���" << endl;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		for (int j = 0; j <= n - 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int MAX = a[0][0];
//	for (int i = 0; i <= n - 1; i++)
//	{
//		if (MAX < a[i][i])
//		{
//			MAX = a[i][i];
//			flag = i + 1;
//		}
//	}
//	cout << "�Խ�����������Ϊ��" << MAX << ",�к�Ϊ��" << flag;
//	return 0;
//}


////ʵ��8.2
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	const int M = 10;
//	int x[M][M], m;
//	cout << "������mֵ��";
//	cin >> m;
//	int i, j, k = 0;
//	for (j = 0; j < m; j++)
//		for (i = m - 1; i >= j; i--)
//			x[i][j] = ++k;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j <= i; j++)
//			cout << left << setw(6) << x[i][j];
//		cout << endl;
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m - 1 - i; j++)
//			cout << "   ";
//		for (j = 0; j <= i; j++)
//			cout << left << setw(6) << x[i][j];
//		cout << endl;
//	}
//	return 0;
//}

////ʵ��8.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	const int N = 20;
//    int a[N][N] = { 0 };
//    int m, i, j, k;
//	cout << "�����������β�����";
//	cin >> m;
//
//    for (i = 0; i < m; i++)
//    {
//        for (j = i; j < m - i; j++)
//        {
//            for (k = i; k < m - i; k++)
//            {
//                a[j][k] = i + 1;
//
//            }
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//	return 0;
//}

////ʵ��8.4
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	const int N = 20;
//	int stu[N][N] = { 0 };
//	int i, j, n, sum;
//	cout << "������ѧ��������";
//	cin >> n;
//	cout << "�밴����˳�����룺" << endl;
//	cout << left << setw(6) << "ѧ��" << setw(8) << "��Ŀ1" << setw(8) << "��Ŀ2" << setw(8) << "��Ŀ3" << endl;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			cin >> stu[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum = 0;
//		for (j = 1; j <= 3; j++)
//		{
//			sum = sum + stu[i][j];
//		}
//		stu[i][j + 1] = sum / 3;
//		cout << "ѧ��Ϊ" << stu[i][0] << "��ͬѧƽ����Ϊ��" << stu[i][j + 1] << endl;
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		sum = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum = sum + stu[j][i];
//		}
//		stu[5][i] = sum / 4;
//		cout << "��Ŀ" << i << "��ƽ����Ϊ��" << stu[5][i] << endl;
//	}
//	return 0;
//}

////ʵ��8.5
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	cout << "2021110571-������" << endl;
//	char s1[20];
//	char find1[20];
//	char s2[20];
//	char find2[20];
//	cout << "������һ���ַ�����" << endl;
//	cin.getline(s1, 20);
//	strcpy_s(s2, s1);
//	string s = _strlwr(s1);
//	cout << "������Ҫ���ҵ���ĸ��";
//	cin.getline(find1, 20);
//	strcpy_s(find2, find1);
//	string find = _strlwr(find1);
//	if (s.find(find) + 1 != 0)
//		cout << "��ĸ" << find2 << "���ַ���" << s2 << "�е�һ�γ����ڵ�" << s.find(find) + 1 << "��";
//	else
//		cout << "���ַ���" << s2 << "��û����ĸ" << find2;
//	return 0;
//}