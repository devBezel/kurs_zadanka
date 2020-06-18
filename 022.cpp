#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>


int main() {
	std::string temp;
	srand(time(0));

	std::cout << "Zadanie 1." << std::endl;
	for (float i = 10; i <= 20; i++) {
		if (((i / 2) - (int(i) / 2)) == 0) {
			std::cout << i << std::endl;
		}
	}

	getline(std::cin, temp);
	std::cout << "Zadanie 2." << std::endl;
	for (float i = -20; i <= 20; i++) {
		if ((i / 3) - (int(i) / 3) == 0) {
			std::cout << i << std::endl;
		}
	}

	getline(std::cin, temp);
	std::cout << "Zadanie 3" << std::endl;

	for (float i = 101; i < 200; i++) {
		if ((i / 4) - (int(i) / 4) == 0) {
			if ((i / 5) - (int(i) / 5) > 0) {
				std::cout << i << std::endl;
			}
		}
	}
	getline(std::cin, temp);
	std::cout << "Zadanie 4" << std::endl;

	for (int i = 100; i <= 1000; i++) {
		if (((i / 100.0) * 4) - (int(i / 100.0) * 4) == 0.0) {
			std::cout << "Liczba: " << + (i / 100.0) * 4 << std::endl;
		}
	}

	int square_length = 5;
	getline(std::cin, temp);
	std::cout << "Zadanie 5" << std::endl;

	for (int i = 1; i <= square_length; i++) {
		for (int j = 1; j <= square_length; j++) {
			std::cout << '*';
		}

		std::cout << "\n";
	}

	getline(std::cin, temp);
	std::cout << "Zadanie 6" << std::endl;

	for (int i = 1; i <= square_length; i++) {
		for (int j = 1; j <= square_length; j++) {
			if (i == 1 || j == 5 || i == 5 || j == 1) {
				std::cout << '*';
			}
			else {
				std::cout << '#';
			}
		}
		std::cout << std::endl;
	}
		getline(std::cin, temp);
		std::cout << "Zadanie 7" << std::endl;

	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			if ((i + j) % 2 == 0) {
				std::cout << '#';
			}
			else {
				std::cout << ' ';
			}
		}

		std::cout << std::endl;
	}


	getline(std::cin, temp);
	std::cout << "Zadanie 8" << std::endl;

	int values[20];
	for (int i = 0; i < 20; i++) {
		values[i] = rand() % 10 + 1;
		std::cout << values[i] << std::endl;
	}

	getline(std::cin, temp);
	std::cout << "Zadanie 9" << std::endl;

	std::cout << "a)" << std::endl;
	int even_numbers = 0, odd_numbers = 0;
	for (int i = 0; i < (sizeof(values) / sizeof(int)); i++) {
		if ((float(values[i]) / 2) - (int(values[i]) / 2) == 0) {
			even_numbers++;
		}
		else {
			odd_numbers++;
		}
	}

	std::cout << "	Liczb parzystych: " << +even_numbers << std::endl;
	std::cout << "	Liczb nieparzystych: " << +odd_numbers << std::endl;


	std::cout << "b)" << std::endl;

	int duplicates_number[11] = { 0 };
	for (int i = 0; i < (sizeof(values) / sizeof(int)); i++) {
		duplicates_number[values[i]]++;
	}

	for (int i = 0; i < sizeof(duplicates_number) / sizeof(int); i++) {
		std::cout << "Liczba: " << i  <<  + " wystapila: " << + duplicates_number[i] << + " razy" << std::endl;
	}


	std::cout << "c)" << std::endl;
	int table_sum = 0;
	for (int i = 0; i < (sizeof(values) / sizeof(int)); i++) {
		table_sum += values[i];
	}

	std::cout << "	Suma wszystkich liczb z tablicy: " << +table_sum << std::endl;

	getline(std::cin, temp);
	std::cout << "Zadanie 10" << std::endl;

	int random_number = 0;
	do
	{
		random_number = rand() % 10 + 1;

		std::cout << "Wylosowana liczba: " << + random_number << std::endl;
	} while (random_number != 7);

	std::cout << "Wylosowano liczbe 7" << std::endl;

}
