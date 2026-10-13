
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


