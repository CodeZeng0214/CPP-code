//#define _CRT_SECURE_NO_WARNINGS 1
实验1.1
#include<iostream>
using namespace std;
int main()
{
	cout<<"2021110571 曾柯翔"
	float a,b;
	cout << "请输入摄氏温度：";
	cin >> a;
	cout <<"华氏温度为："<< a * 1.8 + 32;
	return 0;
}

//实验1.2
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c,d;
//	cout << "请输入一个三位数：";
//	cin >> a;
//	b = a / 100;
//	c = a % 100 / 10;
//	d = a % 10;
//	cout << "a" << "的百位是：" << b << endl;
//	cout << "a" << "的十位是：" << c / 10 << endl;
//	cout << "a" << "的十位是：" << d << endl;
//	cout << "a" << "的逆序数是：" << d*100+c*10+b << endl;
//	cout << "a" << "的逆序数乘以2是：" << (d*100+c*10+b)*2 << endl;
//	return 0;
//}

////实验1.3
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cout << "请输入一个小写字母：";
//	cin >> ch;
//	cout << "输入的小写字母是："<<ch;
//	cout << " ，其ASCII码是："<<(int)ch<<endl; 
//	cout << "对应的大写字母是：" << (char)(ch-32);
//	cout << " ，其ASCII码是：" << (int)(ch-32);
//    return 0;
//}

//实验1.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	double r, p;
//	p = 3.14159;
//	cout << "请输入半径：";
//	cin >> r;
//	cout << "圆球面积为：" << 4.0 * p * r * r <<endl;
//	cout << "圆球体积为：" << 4.0 * p * r * r * r / 3.0;
//	return 0;
//}

//实验1.5
//#include <iostream>
//#include <string.h>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	string name;
//	double ID;
//	double a, b, c;
//	cout << "请输入学号、姓名、三门课成绩：" << endl;
//	cin >> ID >> name >> a >> b >> c;
//	cout << endl<<"************************成绩单***********************" << endl;
//	cout << setw(11) << right << "学号" << setw(7) << "姓 名" << setw(10) << "高等数学" << setw(10) << "普通物理" << setw(10) << "大学英语" << endl;
//	cout << setw(11) << right << setprecision(12) << ID;
//	cout << fixed;
//	cout << setprecision(1);
//	cout << setw(7) << name << setw(10) << a << setw(10) << b << setw(10) << c << endl;
//	cout << fixed;
//	cout << setprecision(2);
//	cout << endl<< "平均成绩：" << (a + b + c) / 3 << endl;
//	cout << "*****************************************************" << endl; 
//	return 0;
//}