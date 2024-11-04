/*
Дана диагональ телевизора в дюймах. Написать программу, определяющую эту 
диагональ в сантиметрах (1 дюйм = 2.54 сантиметров).
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const float inch_TO_CM = 2.54;
	double inch, centimeters;
	cout << "Входными данными являются:\nДиагональ телевизора (inch) -> ";
	cin >> inch;
	centimeters = inch * inch_TO_CM;
	cout << "Выходные данные:\nДиогональ телевизора: " << centimeters;
}