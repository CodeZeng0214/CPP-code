#include <iostream>
using namespace std;


//��������Ϸ
void menu()
{
	cout << "    �������Ӧ����Լ���    " << endl;
	cout << "****************************" << endl;
	cout << "*******1. ��ʼ��Ϸ**********" << endl;
	cout << "*******0. ������Ϸ**********" << endl;
	cout << "****************************" << endl;
}

void game()
{
	int ret = rand() % 100 + 1;//����ʱ���ʵ��1-100֮����������
	int guess = 0;
	system("cls");
	while (1)
	{
		cout << "(1-100֮��)�������>:";
		cin >> guess;
		if (guess < ret)
		{
			system("cls");
			cout << "��С��" << endl;
		}
		else if (guess > ret)
		{
			system("cls");
			cout << "�´���" << endl;
		}
		else
		{
			system("cls");
			cout << "��ϲ�¶�������"<<endl;
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		cout << "������>>:";
		cin >> input;
		switch (input)
		{
		case 1:
			system("cls");
			game();
			break;
		case 0:
			system("cls");
			cout << "���˳���Ϸ����";
			break;
		default:
			system("cls");
			cout << "�벻Ҫ�����޹�ֵ����";
		}
	} while (input);
	return 0;
}