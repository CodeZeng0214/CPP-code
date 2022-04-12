#define _CRT_SECURE_NO_WARNINGS 1
////实验4.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int id, c, m, e, n, max;
//	int i = 1;
//	cout << "请输入班级数量：";
//	cin >> n;
//	do
//	{
//		cout << "============================" << endl;
//		int num = 1;
//		cout << "请输入" << i << "班的学生数量：";
//		cin >> num;
//		for (int j = 1; j <= num; j++)
//		{
//			cout << "请输入第" << j << "个学生的学号、语文、数学、英语成绩：" << endl;
//			cin >> id >> c >> m >> e;
//			if (c >= m && c >= e)
//				cout << "学生" << id << "语文成绩好！语文成绩为：" << c << endl;
//			else
//				if (m >= e)
//					cout << "学生" << id << "数学成绩好！数学成绩为：" << m << endl;
//				else
//					cout << "学生" << id << "英语成绩好！英语成绩为：" << e << endl;
//		}
//		i++;
//	} while (i <= n);
//	return 0;
//}

////实验4.2
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int n = 0;
//	cout << "兑换百元大钞的方案如下：" << endl;
//	cout << "    拾元   贰拾元  伍拾元" << endl;
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

////实验4.3
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int num1, num2, c;
//	int a = 0;
//	cout << "请按从小到大的顺序输入两个正整数：" << endl;
//	cin >> num1 >> num2;
//	cout << num1 << "到" << num2 << "之间各位数字之和为7的数有：" << endl;
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

////实验4.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int num1, num2;
//	
//	cout << "请输入两个正整数：" << endl;
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
//	cout << num1 << "与" << num2 << "之间所有素数的和为：" << z;
//	return 0;
//}

////实验4.5
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int n = 0;
//	cout << "请输入n的值（n<10）：";
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