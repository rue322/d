#include <iostream>
/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Артем\n";
	std::cout << "\tПросто так\n";
	std::cout << "\t\tДля веселья\n\tСтоит " << 123123 << " пива\n";
	std::cout << "Text\n\n";



	return 0;
}
*/




/*
Типы данных:

bool			true/false					0 - false
char			'+'							43
unsigned char	'+'							43		0 - 255

short			123							-32768 -- 32767
unsigned short	123							0 - 65535

int			123456789					-2147483648	-- 2147483647
unsigned int	123456789						0 - 4294967295
long long int	45619846219						большой

float			123456.987654					3.4E-38 -- 3.4E+38
double			98765432149.156546				1.7E-308 --1.7E+308
long double		6444456754754754764674456		3.4E-49 -- 1


Операторы:
математические: + - * / = // = % ++ -- += -= /= ()
сравнительные: < > <= >= == != <=>
логические: && (и)			|| (или)	! (не)

ТАБУ: goto  and or not	int имяПеременной 

AlekOS                                                                                         


*/

/*

double a = 0;
double b = 0;

if (a == b)
{
	std::cout << 1;
}

*/

/*double a, b;
	char oper;

	std::cout << "Введите количество рублей для покупки валюты:";
	std::cin >> a;

	std::cout << "Введите валюту:";
	std::cin >> oper;
*/

/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double rub;
	char valuta;

	double cny = 12.88;
	double usd = 86.47;
	double eur = 100.5;
	double farit = 100.0;

	std::cout << "Введите количество рублей для покупки валюты:";
	std::cin >> rub;

	std::cout << "какую валюту ( e - eur, u - usd , f - farit, c - cny )";
	std::cout << "1 - cny";
	std::cout << "2 - usd";
	std::cout << "3 - eur";
	std::cout << "4 - farit";
	std::cout << "ввод:";
	std::cin >> valuta;

	if (valuta == '1')
	{
		std::cout << "вы получите:" << rub / 82;
		

	}
	else if (valuta == '2')
	{
		std::cout << "вы получите:" << cny / 12.88;


	}
	else if (valuta == '3')
	{
		std::cout << "вы получите:" << eur / 100.5;


	}
	else if (valuta == '4')
	{
		std::cout << "вы получите:" << farit / 100.0;


	}
	return 0;
}
*/

/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 =0;

	std::cout << "решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";

	std::cout << " введите A: ";
	std::cin >> a;
	std::cout << " введите B: ";
	std::cin >> b;
	std::cout << " введите C: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " =0\n\n";

	d = std::pow(b, 2) - 4 * a * c;
	std::cout << "Дискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Корней нет!\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень:" << x1 << "\n";
	}
	else
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень:" << x1 << "\n";
		std::cout << "Второй корень:" << x2 << "\n";
	}
	return 0;
}

*/


/*







#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int choose = 0, hp = 0, number = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25;

	system("cls");
	std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
	std::cout << "1 начать игру \n";
	std::cout << "2 настройки\n\n";
	std::cout << "0 выход в главное меню \n\n";
	std::cout << "ввод: ";
	std::cin >> choose;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 легкий(1-500) \n";
		std::cout << "2 сложный(1-5000)\n\n";
		std::cout << "0 выход в главное меню \n\n";
		std::cout << "ввод: ";
		std::cin >> choose;

		if (choose == 1)

		{
			randomNumber = rand() % 500 + 1;
			hp = maxHp;

			std::cout << "кол во жизней" "<< hp <<\n";
			std::cout << "введите число от 1 до 500:";
			std::cin >> number;

			if (number == randomNumber)
			{
				std::cout << "вы угадали\n";
				std::cout << "осталось жизней " << hp << "\n";
				system("pause");
				break;
			}
		}
		else if (choose == 2)
		{

		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;

		}
		else
		{
			std::cout << "\nНекорректный ввод\n\n";
			Sleep(1500);
			break; 

		}

	}
	return 0;

}
*/

/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	// тип данных имя массива//;

	int one = 0;

	const int size = 5;

	int arr[5]{ 1,2,3,4,5 };

	//std::cin >> arr[1];

	std::cout << arr[0] << "\n";
	std::cout << arr[1] << "\n";
	std::cout << arr[2] << "\n";


	return 0;
}

*/

/*
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 10;

	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		arr[i]rand() % 21 - 10;
		cout << arr[i] << " ";
	}
	double plus = 0, minus = 0;

	for (int i = 0; i, size; i++)
	{
		if (arr[i] < 0)
		{
			minus += arr[i];
		}
		else if (arr[i] > 0)
		{
			plus += arr[i];
		}
	}

	cout << "\n\n" << plus << " " << minus << "\n\n";

	cout << (plus + minus) / size;

	return 0;
}

*/

/*
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int row = 4;
	const int col = 5;
	int arr[row][col];

	int arr[samRow];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			samRow += arr[i][j];
			cout << arr[i][j] << "t";
		}
		cout << "\n";
	}
}

*/





#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int row = 3;
	const int col = 4;

	int arr[row][col];
	int sumRow = 0, sumCol = 0, total