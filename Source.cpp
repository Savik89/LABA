﻿#include <iostream>
using namespace std;
int main()
{
	unsigned int order = sizeof(int)*8;
	int choice;
	int choice2;
	unsigned int mask = 1 << order - 1;
	int a;
	float b;
	double c;
	setlocale(0, "");
	while (true)
	{
		cout << "Что будем делать?" << "\n";
		cout << "1. Размеры типов данных" << "\n";
		cout << "2. Двоичное представление целого числа" << "\n";
		cout << "3. Двоичное представление типа float" << "\n";
		cout << "4. Двоичное представление типа double" << "\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "Размер типа int: " << sizeof(int) << " байта" << "\n";
			cout << "Размер short int: " << sizeof(short int) << " байта" << "\n";
			cout << "Размер long int: " << sizeof(long int) << " байта" << "\n";
			cout << "Размер float: " << sizeof(float) << " байта" << "\n";
			cout << "Размер double: " << sizeof(double) << " байт" << "\n";
			cout << "Размер char: " << sizeof(char) << " байт" << "\n";
			cout << "Размер bool: " << sizeof(bool) << " байт" << "\n";
			cout << endl << endl;
			cout << "Что-нибудь ещё ?" << "\n";
			cout << "1. Продолжить" << "\n";
			cout << "2. Выйти" << "\n";
			cin >> choice2;
			switch (choice2)
			{
			case 1:
				system("cls");
				break;
			case 2:
				return 0;
				break;
			default:
				system("cls");
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "Введите целое число: ";
			cin >> a;
			for (int i = 0; i < 32; i++) {
				cout << ((a & mask) ? 1 : 0);
				a = a << 1;
				if (i == 0 or i == 7 or i == 15 or i == 23)
					cout << " ";
			}
			cout << endl << endl;
			cout << "Что-нибудь ещё ?" << "\n";
			cout << "1. Продолжить" << "\n";
			cout << "2. Выйти" << "\n";
			cin >> choice2;
			switch (choice2)
			{
			case 1:
				system("cls");
				break;
			case 2:
				return 0;
				break;
			default:
				system("cls");
				break;
			}
			break;
		case 3:
			system("cls");
			union {
				int uFloat;
				float b;
			};
			cout << "Введите число типа float: ";
			cin >> b;
			for (int i = 0; i < 32; i++) {
				cout << ((uFloat & mask) ? 1 : 0);
				uFloat = uFloat << 1;
				if (i == 0 or i == 1 or i == 8)
					cout << " ";
			}
			cout << endl << endl;
			cout << "Что-нибудь ещё ?" << "\n";
			cout << "1. Продолжить" << "\n";
			cout << "2. Выйти" << "\n";
			cin >> choice2;
			switch (choice2)
			{
			case 1:
				system("cls");
				break;
			case 2:
				return 0;
				break;
			default:
				system("cls");
				break;
			}
			break;
		case 4:
			system("cls");
			union {
				int uDouble[2];
				double c;
			};
			cout << "Введите число типа double: ";
			cin >> c;
			for (int i = 0; i < 64; i++)
			{
				if (i - 32 < 0)
				{
					cout << ((uDouble[1] & mask) ? 1 : 0);
					uDouble[1] = uDouble[1] << 1;
					if (i == 0 or i == 1 or i == 11)
						cout << " ";
				}
				else
				{
					cout << ((uDouble[0] & mask) ? 1 : 0);
					uDouble[0] = uDouble[0] << 1;
				}
			}
			cout << endl << endl;
			cout << "Что-нибудь ещё ?" << "\n";
			cout << "1. Продолжить" << "\n";
			cout << "2. Выйти" << "\n";
			cin >> choice2;
			switch (choice2)
			{
			case 1:
				system("cls");
				break;
			case 2:
				return 0;
				break;
			default:
				system("cls");
				break;
			}
			break;
		default:
			system("cls");
			cout << "Введите число от 1 до 4!!!" << "\n" << "\n";
		}
	}
	return 1;
}