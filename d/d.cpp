/*
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string aleksandr[9] = {
	"яблочный",
	"апельсиновый",
	"абрикосовый",
	"грушевый",
	"томатный",
	"луковый",
	"огуречный",
	"чесночный",
	"петрушевый",


	};

	int price[9] = { 135,150,155,156,157,158,159,160,170 };
	int choice;
	int count[9] = { 0 };
	int sum = 0;
	int total = 0;
	int discount = 0;  


	while (true) {
		cout << "\nМагазин соки Александра\n";

		for (int i = 0; i < 9; i++) {
			cout << i + 1 << " . " << aleksandr[i]
				<< " - " << price[i] << "rub\n";
		}
		cout << "0. завершить покцпку\n";
		cout << "выберите товар";
		cin >> choice;

		if (choice == 0) {
			break;
		}

		if (choice < 1 || choice > 9) {
			cout << " неверный номер товара\n";
			break;
		}

		int liters;

		cout << "введите количество литров";
		cin >> liters;

		if (liters <= 0) {
			cout << " количество должно быть больше нуля\n";
			break;
		}

		count[choice - 1] += liters;

	}

	cout << "\nчек\n";

	for (int i = 0; i < 9; i++) {
		if (count[i] > 0) {
			sum = price[i] * count[i];
			cout << aleksandr[i] << " - "
				<< count[i] << " л. = "
				<< sum << " rub.\n";

			total += sum;


		}
	}

	if (count[7] >= 3) {
		discount += price[7] * count[7] * 5 / 100;
	}

	if (total > 1000) {
		discount += total * 13 / 100;
	}

	int freeJuice = count[5] / 4;

	cout << "бесплатно лукового сока"
		<< freeJuice << " л.\n";

	cout << "сумма покупки" << total << " rub.\n";
	cout << "скидка" << discount << " rub.\n";
	cout << "к оплате" << total - discount << "rub.\n";






	return 0;
}

*/



#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

/*
void ArrPlus(int + arr, int size)
{
	int* temp = new int[size];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	delete[] arr;

	arr = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		arr[i] = temp[i];
	}

	arr[size - 1] = 100;
	delete[] temp;

}



int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int size = 0;
	cin >> size;

	int* name = nullptr;
	name = new int[size] {};

	name[1] = 10;

	delete[] name;

	int row = 3, col = 4;

	int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}


	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;*/

	

	/*int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		cin >> col;
		arr[i] = new int[col];
	}

	arr[1][2] = 10;

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;






int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int side = 2, row = 4, coll = 4, col2 = 3;

	int*** ar = new int** [side];

	for (int i = 0; i < side; i++)
	{
		ar[i] = new int* [row];
	}

	for (int i = 0; i < row; i++)
	{
		ar[0][i] = new int[coll];
	}

	ar[1][0] = new int[2];
	for (int i = 1; i < row; i++)
	{
		ar[1][i] = new int[col2];
	}

	ar[1][2][1] = 10;


	return 0;
}
*/


#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
