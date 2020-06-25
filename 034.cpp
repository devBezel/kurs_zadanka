#include <iostream>
#include <ctime>
#include <cmath>

#include <string>

void f1(double[]);
void display_array_int(int* T, int n, int temp);

int main() {

	srand(time(0));

	int random_T_length = (rand() % 10) + 10;
	
	std::cout << "Liczb w tablicy: " << +random_T_length << std::endl;
	std::cout << std::endl;

	int* T1 = new int[random_T_length];

	for (int i = 0; i < random_T_length; i++) {
		T1[i] = (rand() % 201) - 100;
		std::cout << "Liczba w tablicy T1: " << +T1[i] << std::endl;
	}

	int* W = new int;
	*W = T1[rand() % random_T_length];

	int T2[4];
	memcpy(T2, T1 + (random_T_length - 1 - 3), 4 * sizeof(int));

	std::cout << std::endl;

	std::cout << "Za adresem zmiennej W: " << + *W << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "Liczby po skopiowaniu: " << + T2[i] << std::endl;
	}
	std::cout << std::endl;

	delete[] T1;

	double T3[5];
	for (int i = 0; i < 5; i++) {
		T3[i] = (rand() % 31 + 10) / 10.0;
		std::cout << "Przed podwojeniem indeksow: " << + T3[i] << std::endl;
	}

	f1(T3);
	for (int i = 0; i < 5; i++) {
		std::cout << "Podwojone indeksy: " << + T3[i] << std::endl;
	}

	int* T4 = new int[10];
	for (int i = 0; i < 10; i++) {
		T4[i] = rand() * 1000;
	}

	display_array_int(T4, 10, 56);
}

void f1(double numbers[]) {
	for (int i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			numbers[i] *= 2;
		}
	}
}

void display_array_int(int* T, int n, int temp = 50) {
	int temp_secondary = temp;

	do {
		std::cout << "-";
	} while (temp_secondary--);

	std::cout << std::endl;

	temp_secondary = 0;

	do
	{
		std::cout << "T[" << temp_secondary << "]:=(" << T[temp_secondary] << ")\t|\t";
	} while (++temp_secondary < n);

	std::cout << std::endl;

	temp_secondary = temp;
	do {
		std::cout << ".";
	} while (temp--);

	std::cout << std::endl << std::endl;
}
