#include <iostream>
#include <conio.h>
using namespace std;

//#define CALCULATOR
//#define PALINDROM
//#define SHOOTER

void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef CALCULATOR

	double ch1, ch2, rez;
	cout << "Введите первое число: ";
	cin >> ch1;
	cout << "Введите второе число: ";
	cin >> ch2;
	char key;
	cout << "Выбирите дейсьвия с числами \"+\"; \"-\"; \"*\"; \"/\": ";
	cin >> key;
	switch (key)
	{
	case '+':
		rez = ch1 + ch2;
		cout << "Сумма: " << ch1 << " + " << ch2 << " = " << rez;
		break;
	case '-':
		rez = ch1 - ch2;
		cout << "Разность: " << ch1 << " - " << ch2 << " = " << rez;
		break;
	case '*':
		rez = ch1 * ch2;
		cout << "Произведение: " << ch1 << " * " << ch2 << " = " << rez;
		break;
	case '/':
		if (ch2 != 0) // делитель не равен 0
		{
			rez = ch1 / ch2;
			cout << "Частное: " << ch1 << " / " << ch2 << " = " << rez;
		}
		else
		{
			cout << "\nНа 0 делить нельзя!!!\n";
		}
		break;
	default:
		cout << "\nНеверное действие!!!\n"; // если ввели неправельный символ
		break;
	}

#endif // CALCULATOR

#ifdef PALINDROM

	int ch, v, n ,rev;
	rev = 0; // до введения числа обнуляем реверс
    cout << "Введите число: ";
	cin >> n;
    ch = n;
	
	while (n != 0) // цикл закончится при n = 0
	{
		v = n % 10; 
		rev = rev * 10 + v; // нахождение реверса числа
		n = n / 10; // делится пока число не станет n = 0
	}
		if (ch == rev)
		{
			cout << ch << " = " << rev << " - это  палиндром!" << endl; // сравнивание числа и реверса
		}
		else
		{
			cout << ch << " != " << rev << " - это не палиндром!" << endl; // число и реверс не равны
		}
	

#endif // PALINDROM

#ifdef SHOOTER

		char key;
		cout << "Клавиши управление Shooter: " << endl;
		cout << "w - вперёд; " << endl << "s - назад; " << endl;
		cout << "a - влево; " << endl << "d - вправо; " << endl;
		cout << "space - прыжок; " << endl << "enter - выстрел; " << endl;
		cout << "ESC - выход из программы. " << endl;

		do
		{
			key = _getch();
			switch (key)
			{
			case 'w':
            cout << 'w' << "\tВперед ";
			break;
			case 'W':
			cout << 'W' << "\tВперед ";
			break;
			case 's':
            cout << 's' << "\tНазад ";
			break;
			case 'S':
			cout << 'S' << "\tНазад ";
			break;
			case 'a':
            cout << 'a' << "\tВлево ";
			break;
			case 'A':
			cout << 'A' << "\tВлево ";
			break;
			case 'd':
            cout << 'd' << "\tВправо ";
			break;
			case 'D':
			cout << 'D' << "\tВправо ";
			break;
			case 32:         //ASCII код клавиши space.
            cout << "space" << "\tПрыжок ";
			break;
			case 13:        //ASCII код клавиши enter.
            cout << "enter" << "\tВыстрел ";
			break;
			default:
				if (key == 72)
				{
					cout << "^" << "\tВперёд ";
				}
				else if (key == 80)
				{
					cout << " !" << "\tНазад ";
				}
				else if (key == 75)
				{
					cout << " <" << "\tВлево ";
				}
				else if (key == 77)
				{
					cout << " >" << "\tВправо ";
				}
				break;
			}
		} while (key != 27);//При нажатии клавиши ESC программа заканчивается.	
			
			
			

#endif // SHOOTER



}