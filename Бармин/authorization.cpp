#include "authorization.hpp"

void Start()
{
	while (true)
	{
		if (login())
		{

		}
		else
		{
			system("cls");
			std::wcout << L"\n\n\n\t\t\tВсего доброго\n\n\n";
			Sleep(1500);
			break;
		}
	}
}

bool login()
{
	std::wstring login, pass;
	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t\tДобро пожаловать!";
		std::wcout << L"\n\n\t\t\tООО РАИ ";
		std::wcout << L"Введите логин или \"exit\" для выхода : ";
		Getline(login);
		if (login == L"exit" || login == L"Exit")
		{
			return false;
		}
		else
		{
			std::wcout << "Введите пароль:";
			Getline(pass);
			for (size_t i = 0; i < userSize; i++)
			{
				if (login == loginArr[i] && pass == passArr[i])
				{
					std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n";
					std::wcout << L"Ваш уровень доступа: " << statusArr[i] << L"\n";
					currentStatus = statusArr[i];
					return true;
					



				}
			}
			std::wcout << L"Неверный логин или пароль. Повторите попытку\n\n";
			Sleep(1500);



		}
	}
}

