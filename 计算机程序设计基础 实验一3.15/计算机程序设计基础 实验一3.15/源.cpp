//#define _CRT_SECURE_NO_WARNINGS 1
ʵ��1.1
#include<iostream>
using namespace std;
int main()
{
	cout<<"2021110571 ������"
	float a,b;
	cout << "�����������¶ȣ�";
	cin >> a;
	cout <<"�����¶�Ϊ��"<< a * 1.8 + 32;
	return 0;
}

//ʵ��1.2
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c,d;
//	cout << "������һ����λ����";
//	cin >> a;
//	b = a / 100;
//	c = a % 100 / 10;
//	d = a % 10;
//	cout << "a" << "�İ�λ�ǣ�" << b << endl;
//	cout << "a" << "��ʮλ�ǣ�" << c / 10 << endl;
//	cout << "a" << "��ʮλ�ǣ�" << d << endl;
//	cout << "a" << "���������ǣ�" << d*100+c*10+b << endl;
//	cout << "a" << "������������2�ǣ�" << (d*100+c*10+b)*2 << endl;
//	return 0;
//}

////ʵ��1.3
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cout << "������һ��Сд��ĸ��";
//	cin >> ch;
//	cout << "�����Сд��ĸ�ǣ�"<<ch;
//	cout << " ����ASCII���ǣ�"<<(int)ch<<endl; 
//	cout << "��Ӧ�Ĵ�д��ĸ�ǣ�" << (char)(ch-32);
//	cout << " ����ASCII���ǣ�" << (int)(ch-32);
//    return 0;
//}

//ʵ��1.4
//#include <iostream>
//using namespace std;
//int main()
//{
//	double r, p;
//	p = 3.14159;
//	cout << "������뾶��";
//	cin >> r;
//	cout << "Բ�����Ϊ��" << 4.0 * p * r * r <<endl;
//	cout << "Բ�����Ϊ��" << 4.0 * p * r * r * r / 3.0;
//	return 0;
//}

//ʵ��1.5
//#include <iostream>
//#include <string.h>
//#include <iomanip>
//using namespace std;
//int main()
//{
//	string name;
//	double ID;
//	double a, b, c;
//	cout << "������ѧ�š����������ſγɼ���" << endl;
//	cin >> ID >> name >> a >> b >> c;
//	cout << endl<<"************************�ɼ���***********************" << endl;
//	cout << setw(11) << right << "ѧ��" << setw(7) << "�� ��" << setw(10) << "�ߵ���ѧ" << setw(10) << "��ͨ����" << setw(10) << "��ѧӢ��" << endl;
//	cout << setw(11) << right << setprecision(12) << ID;
//	cout << fixed;
//	cout << setprecision(1);
//	cout << setw(7) << name << setw(10) << a << setw(10) << b << setw(10) << c << endl;
//	cout << fixed;
//	cout << setprecision(2);
//	cout << endl<< "ƽ���ɼ���" << (a + b + c) / 3 << endl;
//	cout << "*****************************************************" << endl; 
//	return 0;
//}