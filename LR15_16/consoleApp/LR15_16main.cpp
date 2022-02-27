#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");
	double fuelUsage, kilometrage, fuelPrice, flow, price;

	std::cout << "Введите стоимость 1л бензина: ";
	std::cin >> fuelPrice;

	std::cout << "Расход топлива на 100 км: ";
	std::cin >> fuelUsage;

	std::cout << "Расстояние: ";
	std::cin >> kilometrage;

	flow = (fuelUsage * kilometrage) / 100;
	std::cout << "Итого расход топлива: " << flow << std::endl;

	price = flow * fuelPrice;
	std::cout << "Стоимость поездки: " << price << std::endl;

}