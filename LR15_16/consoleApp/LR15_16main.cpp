#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");
	double fuelUsage, kilometrage, fuelPrice, flow, price;

	std::cout << "������� ��������� 1� �������: ";
	std::cin >> fuelPrice;

	std::cout << "������ ������� �� 100 ��: ";
	std::cin >> fuelUsage;

	std::cout << "����������: ";
	std::cin >> kilometrage;

	flow = (fuelUsage * kilometrage) / 100;
	std::cout << "����� ������ �������: " << flow << std::endl;

	price = flow * fuelPrice;
	std::cout << "��������� �������: " << price << std::endl;

}