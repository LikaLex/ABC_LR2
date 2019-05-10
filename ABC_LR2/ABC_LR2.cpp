// ABC_LR2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

int factorial(int number) {
	return (number < 2) ? 1 : number * factorial(number - 1);
}

double s(double x, int n = 5) {
	double ret = 0.0;
	for (int k = 0; k <= n; ++k)
		ret += pow(x, k) * cos(k * 3.14 / 4);
	return ret;
}


double y(double x) {
	double ret = 0.0;
	ret += (x * cos(3.14 / 4) - pow(x, 2)) / 1 - 2 * x * cos(3.14 / 4) + pow(x, 2);
	return ret;
}

int main() {
	double low, high, step;

	std::cout << "Low: ";
	std::cin >> low;
	std::cout << "High: ";
	std::cin >> high;
	std::cout << "Step: ";
	std::cin >> step;

	std::cout << " X        | S(X)          | Y(X)\n----------+---------------+-------------" << std::endl;
	for (double x = low; x <= high; x += step)
		std::cout << ' ' << std::fixed << std::setprecision(3) << std::left << std::setw(9) << x << "| "
		<< std::left << std::setw(14) << s(x) << "| " << std::left << std::setw(14) << y(x)
		<< "\n----------+---------------+-------------" << std::endl;

	system("pause");

	return 0;
}


