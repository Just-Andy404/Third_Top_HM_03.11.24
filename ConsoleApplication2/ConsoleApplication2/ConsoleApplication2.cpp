/*
���� ��������� ���������� � ������. �������� ���������, ������������ ��� 
��������� � ����������� (1 ���� = 2.54 �����������).
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const float inch_TO_CM = 2.54;
	double inch, centimeters;
	cout << "�������� ������� ��������:\n��������� ���������� (inch) -> ";
	cin >> inch;
	centimeters = inch * inch_TO_CM;
	cout << "�������� ������:\n��������� ����������: " << centimeters;
}