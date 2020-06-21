#include <iostream>
#include <string>
#include <ctime>
#include <math.h>


double _01(double, int);
double _02(double[]);
double _03(double);
void _04(double&);

std::string temp;

int main() {


	std::cout << "Zadanie 1" << std::endl;

	std::cout << _01(4.0, 2) << std::endl;

	getline(std::cin, temp);

	std::cout << "Zadanie 2" << std::endl;
	double tab[10] = { 1.232, 2.023, 3, 10, 1, 3, 30.99, 11.23, -99, 20 };

	std::cout << "Najwieksza liczba w tablicy: " << + _02(tab) << std::endl; 

	getline(std::cin, temp);

	std::cout << "Zadanie 3" << std::endl;

	std::cout << _03(3.9) << std::endl;

	getline(std::cin, temp);
	std::cout << "Zadanie 4" << std::endl;

	double to_be_multiplied = 3.22;
	_04(to_be_multiplied);

	std::cout << to_be_multiplied << std::endl;


	getline(std::cin, temp);
	std::cout << "Zadanie 5" << std::endl;
	std::cout << _01(2, -6) << std::endl;
}


double _01(double number, int power) {

	if (power == 0) {
		return 1;
	}

	double result = 1;
	if (power > 0) {
		for (int i = 0; i < power; i++) {
			result *= number;
		}
	}
	else {
		for (int i = -1; i >= power; i--) {
			result *= number;
		}

		result /= 1;
	}

	return result;
}

double _02(double tab[]) {
	double max_value = tab[0];
	for (int i = 0; i < 10; i++) {
		std::cout << tab[i] << std::endl;

		if (max_value < tab[i]) 
				max_value = tab[i];
	}

	return max_value;
}


double _03(double value) {
	if (value - int(value) >= 0.5) {
		value += 1 - (value - int(value));
	} else {
		value -= value - int(value);
	}

	return value;
}

void _04(double &value) {
	value += value - int(value);
}
