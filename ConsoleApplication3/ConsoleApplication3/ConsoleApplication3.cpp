/*
������� ������������ ��������� ���������� N ���.
�������� ���������, ������������ ����������� ������� ����������� ��������� ���������� (powerbank),
���� ���������� 3 ������ ������ ���������.
���� ����������� ������ ��� �������� ��������� �� ������������.
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int powerFromPowerbank = 3;
	double phoneBatteryCapacity, requiredPowerBankCapacity;
	cout << "�������� ������� ��������:\n������� ������������ ��������� (���) -> ";
	cin >> phoneBatteryCapacity;
	requiredPowerBankCapacity = phoneBatteryCapacity * powerFromPowerbank;
	cout << "�������� ������:\n����������� �������: " << requiredPowerBankCapacity << " ���";
}