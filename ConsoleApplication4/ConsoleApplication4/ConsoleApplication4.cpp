/*
За один день хомячок съедает K грамм корма. Написать программу, 
определяющую закупку корма в килограммах на 30 дней.
Ниже представлен пример для проверки программы на корректность.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const short ThirtyDays = 30;
	double dailyFoodAmount, totalFoodInGrams;
	cout << "Входными данными являются:\nРасход корма за 1 день (г.) – > ";
	cin >> dailyFoodAmount;
	totalFoodInGrams = dailyFoodAmount / ThirtyDays;
	//cout << "Выходные данные:\nОбъем корма на 30 дней: " << totalFoodInGrams << " кг";
	printf("Выходные данные:\nОбъем корма на 30 дней: %.3f кг", totalFoodInGrams);
}