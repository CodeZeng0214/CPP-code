#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <fstream>
//using namespace std;
//int main()
//{
//	cout << "2021110571-曾柯翔" << endl;
//	int a[10], b[20], c[30], i, j, t;
//	ofstream OutFile1;
//	OutFile1.open("D://vs2022//chengxu//shiyan.test//text1.txt", ios::out | ios::in);
//	if (!OutFile1)
//	{
//		cout << "Open File Error!" << endl;
//	}
//	i = 0;
//	srand(time(NULL));
//	for (i = 0; i <= 9; i++)
//	{
//		a[i] = 1 + rand() % 100;
//	}	
//	for (i = 0; i <= 8; i++)
//	{
//		for (j = i + 1; j <= 9; j++)
//		{
//			if (a[i] > a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//		for (i = 0; i <= 9; i++)
//		{
//			OutFile1 << "  " << a[i];
//		}
//
//		ofstream OutFile2;
//		OutFile2.open("D://vs2022//chengxu//shiyan.test//text2.txt", ios::out | ios::in);
//		if (!OutFile2)
//		{
//			cout << "Open File Error!" << endl;
//		}
//		srand(time(NULL));
//		for (i = 0; i <= 19; i++)
//		{
//			b[i] = 1 + rand() % 100;
//		}
//		for (i = 0; i <= 18; i++)
//		{
//			for (j = i + 1; j <= 19; j++)
//			{
//				if (b[i] > b[j])
//				{
//					t = b[i];
//					b[i] = b[j];
//					b[j] = t;
//				}
//			}
//		}
//		for (i = 0; i <= 19; i++)
//		{
//			OutFile2 << "  " << b[i];
//		}
//		OutFile1.seekp(ios::beg);
//		for (i = 0; i <= 9; i++)
//		{
//			c[i] = a[i];
//		}
//		OutFile2.seekp(ios::beg);
//		for (i = 0; i <= 19; i++)
//		{
//			c[i + 10] = b[i];
//		}
//		ofstream OutFile3;
//		OutFile3.open("D://vs2022//chengxu//shiyan.test//text3.txt", ios::out | ios::in);
//		if (!OutFile3)
//		{
//			cout << "Open File Error!" << endl;
//		}
//		for (i = 0; i <= 28; i++)
//		{
//			for (j = i + 1; j <= 29; j++)
//			{
//				if (c[i] > c[j])
//				{
//					t = c[i];
//					c[i] = c[j];
//					c[j] = t;
//				}
//			}
//		}
//		for (i = 0; i <= 29; i++)
//		{
//			OutFile3 << "  " << c[i];
//		}
//		OutFile1.close();
//		OutFile2.close();
//		OutFile3.close();
//		return 0;
//}




#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    cout << "2021110571-曾柯翔" << endl;
    ofstream student("D://vs2022//chengxu//shiyan.test//student.txt", ios::out | ios::in | ios::trunc);
    ofstream newstudent("D://vs2022//chengxu//shiyan.test//newstudent.txt", ios::out | ios::in | ios::trunc);
    ifstream in("D://vs2022//chengxu//shiyan.test//student.txt", ios::out | ios::in | ios::trunc);
    int a[4], i;
    string name;
    cout << "请输入3个学生的学号、姓名、语文、数学、英语成绩：" << endl;
    student << setw(8) << "学号" << setw(8) << "姓名" << setw(8) << "语文" << setw(8) << "数学" << setw(8) << "英语" << endl;
    for (i = 0; i < 3; i++)
    {
        cin >> a[0] >> name >> a[1] >> a[2] >> a[3];
        student << setw(10) << a[0] << setw(10) << name << setw(10) << a[1] << setw(10) << a[2] << setw(10) << a[3] << endl;
    }
    string s;
    for (i = 1; i <= 5; i++)
        in >> s;
    newstudent << setw(8) << "学号" << setw(8) << "姓名" << setw(8) << "语文" << setw(8) << "数学" << setw(8) << "英语" << setw(8) << "总分" << endl;
    for (i = 1; i <= 999; i++)
    {
        in >> s;
        if (in.eof())
        {
            in.close();
            break;
        }
        newstudent << setw(8) << s;
        in >> s;
        newstudent << setw(8) << s;
        int sum = 0, b;
        for (i = 1; i <= 3; i++)
        {
            in >> b;
            newstudent << setw(8) << b << " ";
            sum += b;
        }
        newstudent << setw(8) << sum << endl;
    }
    newstudent.close();
    return 0;
}
