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
		printf("1) ������� �1 - ������� summ(int n) \n");
		printf("2) ������� �2 - ������� summ2(double eps)\n");
		printf("3) ������� �3 - ������� print(int n ,int k) \n");
		printf("4) ������� �4 - ������� findFirstElement(double eps) \n");
		printf("5) ������� �5 - ������� findFirstNegativeElement(double eps) \n");
		printf("6) ����� \n\n");

		cin >> k;


		switch (k)
		{
		case 1:
			printf("������� ����� n: \n");

			cin >> k;
			cout << "���������: " << summ(k) << "\n" << endl;
			cout << "\n" << endl;
			break;
		case 2:
			printf("������� ����� eps: \n");

			cin >> n;
			cout << "���������: " << summ2(n) << "\n" << endl;
			break;
		case 3:
			printf("������� ����� n, k: \n");

			cin >> n;
			cin >> k;
			print(n, k);
			cout << "\n" << endl;
			break;
		case 4:
			printf("������� ����� eps: \n");

			cin >> n;
			cout << "���������: " << findFirstElement(n) << "\n" << endl;
			break;
		case 5:
			printf("������� ����� eps: \n");

			cin >> n;
			cout << "���������: " << findFirstNegativeElement(n) << "\n" << endl;
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