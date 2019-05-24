#include <iostream>
#include <locale>

#include "../func.h"

using namespace std;
using namespace doWhileLoop;

int main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double n;

	while (true)
	{
		printf("1) Задание №1 - функция summ(int n) \n");
		printf("2) Задание №2 - функция summ2(double eps)\n");
		printf("3) Задание №3 - функция print(int n ,int k) \n");
		printf("4) Задание №4 - функция findFirstElement(double eps) \n");
		printf("5) Задание №5 - функция findFirstNegativeElement(double eps) \n");
		printf("6) Выход \n\n");

		cin >> k;


		switch (k)
		{
		case 1:
			printf("Введите число n: \n");

			cin >> k;
			cout << "Результат: " << summ(k) << "\n" << endl;
			cout << "\n" << endl;
			break;
		case 2:
			printf("Введите число eps: \n");

			cin >> n;
			cout << "Результат: " << summ2(n) << "\n" << endl;
			break;
		case 3:
			printf("Введите числа n, k: \n");

			cin >> n;
			cin >> k;
			print(n, k);
			cout << "\n" << endl;
			break;
		case 4:
			printf("Введите число eps: \n");

			cin >> n;
			cout << "Результат: " << findFirstElement(n) << "\n" << endl;
			break;
		case 5:
			printf("Введите число eps: \n");

			cin >> n;
			cout << "Результат: " << findFirstNegativeElement(n) << "\n" << endl;
			break;
		case 6:
			return 1;
		default:
			break;
		}
	}

	system("pause");

	return 0;
}