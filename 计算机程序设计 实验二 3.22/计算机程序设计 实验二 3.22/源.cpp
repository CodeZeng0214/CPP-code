#define _CRT_SECURE_NO_WARNINGS 1

////实验2.1
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 曾柯翔" << endl;
//	int x;
//	cout << "请输入x的值：";
//	cin >> x;
//	if (x < 0)
//		cout << "y=" << x;
//	else if (x >= 0 && x < 10)
//		cout << "y=" << 2 * x - 1;
//	else
//		cout << "y=" << 3 * x - 1;
//	return 0;
//}

////实验2.2
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 曾柯翔" << endl;
//	char ch;
//	cout << "请输入一个字符" << endl;
//	cin >> ch;
//	if (ch >= 65 && ch <= 122)
//		cout << "你输入的是一个字母";
//	else if (ch >= 49 && ch <= 57)
//		cout << "你输入的是一个数字";
//	else
//		cout << "你输入的是非数字、非字母";
//	return 0;
//}

////实验2.3
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 曾柯翔" << endl;
//	int i;
//	cout << "请输入工龄：";
//	cin >> i;
//	if (i < 1 && i>= 0)
//		cout << "年休假为0天";
//	else
//		if (i >= 1 && i <= 5)
//			cout << "年休假为7天";
//		else
//			if (i >= 6 && i <= 10)
//				cout << "年休假为14天";
//			else
//				if (i >= 11 && i <= 20)
//					cout << "年休假为21天";
//				else
//					if (i >= 21)
//						cout << "年休假为28天";
//					else
//						cout << "输入数据有误";
//	return 0;
//}

////实验2.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "2021110571 曾柯翔" << endl;
//	int n, i;
//	cout << "请输入客户购买笔袋的数量：";
//	cin >> n;
//	i = n / 50;
//	switch (i)
//	{
//	case 0:
//		cout << "客户购买总金额为 ：" << n * 38;
//		break;
//	case 1:
//		cout << "客户购买总金额为 ：" << n * 35;
//		break;
//	case 2:
//		cout << "客户购买总金额为 ：" << n * 32;
//		break;
//	case 3:
//		cout << "客户购买总金额为 ：" << n * 32;
//		break;
//	case 4:
//		cout << "客户购买总金额为 ：" << n * 30;
//		break;
//	case 5:
//		cout << "客户购买总金额为 ：" << n * 30;
//		break;
//	default:
//		cout << "客户购买总金额为 ：" << n * 28;
//		break;
//	}
//	return 0;
//}//20 80 120 250 400

//实验2.5
#include <iostream>
using namespace std;
int main()
{
	cout << "2021110571 曾柯翔" << endl;
	int a, b;
	cout << "******新一局******" << endl;
	cout << "  1     出剪子    " << endl;
	cout << "  2.    出石头    " << endl;
	cout << "  3.    出布      " << endl;
	cout << "******************" << endl;
	cout << "请输入甲的选择（1~3）：";
	cin >> a;
	cout << "请输入乙的选择（1~3）：";
	cin >> b;
	switch (a - b)
	{
	case 0:
		cout << "结局为：平局";
		break;
	case 1:
		cout << "结局为：甲胜";
		break;
	case 2:
		cout << "结局为：乙胜";
		break;
	case -1:
		cout << "结局为：乙胜";
		break;
	case -2:
		cout << "结局为：甲胜";
		break;
	}
	return 0;
}