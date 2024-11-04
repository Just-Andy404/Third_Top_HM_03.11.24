/*
Емкость аккумулятора смартфона составляет N мАч.
Написать программу, определяющую минимальную емкость переносного зарядного устройства (powerbank),
если необходимо 3 полных заряда смартфона.
Ниже представлен пример для проверки программы на корректность.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int powerFromPowerbank = 3;
	double phoneBatteryCapacity, requiredPowerBankCapacity;
	cout << "Входными данными являются:\nЕмкость аккумулятора смартфона (мАч) -> ";
	cin >> phoneBatteryCapacity;
	requiredPowerBankCapacity = phoneBatteryCapacity * powerFromPowerbank;
	cout << "Выходные данные:\nМинимальная емкость: " << requiredPowerBankCapacity << " мАч";
}