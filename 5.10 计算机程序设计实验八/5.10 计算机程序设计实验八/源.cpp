#pragma warning(disable:4996)；
////实验8.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	const int N = 10;
//	int a[N][N] = { 0 };
//	cout << "请输入矩阵的阶：";
//	int n, flag;
//	cin >> n;
//	cout << "请输入一个"<<n<<"*"<<n<<"矩阵，每个数之间用空格间隔，每行输入完成后按回车：" << endl;
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
//	cout << "对角线上最大的数为：" << MAX << ",行号为：" << flag;
//	return 0;
//}


////实验8.2
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	const int M = 10;
//	int x[M][M], m;
//	cout << "请输入m值：";
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

////实验8.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	const int N = 20;
//    int a[N][N] = { 0 };
//    int m, i, j, k;
//	cout << "请输入正方形层数：";
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

////实验8.4
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	const int N = 20;
//	int stu[N][N] = { 0 };
//	int i, j, n, sum;
//	cout << "请输入学生人数：";
//	cin >> n;
//	cout << "请按下列顺序输入：" << endl;
//	cout << left << setw(6) << "学号" << setw(8) << "科目1" << setw(8) << "科目2" << setw(8) << "科目3" << endl;
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
//		cout << "学号为" << stu[i][0] << "的同学平均分为：" << stu[i][j + 1] << endl;
//	}
//	for (i = 1; i <= 3; i++)
//	{
//		sum = 0;
//		for (j = 0; j < n; j++)
//		{
//			sum = sum + stu[j][i];
//		}
//		stu[5][i] = sum / 4;
//		cout << "科目" << i << "的平均分为：" << stu[5][i] << endl;
//	}
//	return 0;
//}

////实验8.5
//#include <iostream>
//#include <string.h>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	char s1[20];
//	char find1[20];
//	char s2[20];
//	char find2[20];
//	cout << "请输入一个字符串：" << endl;
//	cin.getline(s1, 20);
//	strcpy_s(s2, s1);
//	string s = _strlwr(s1);
//	cout << "请输入要查找的字母：";
//	cin.getline(find1, 20);
//	strcpy_s(find2, find1);
//	string find = _strlwr(find1);
//	if (s.find(find) + 1 != 0)
//		cout << "字母" << find2 << "在字符串" << s2 << "中第一次出现在第" << s.find(find) + 1 << "个";
//	else
//		cout << "在字符串" << s2 << "中没有字母" << find2;
//	return 0;
//}