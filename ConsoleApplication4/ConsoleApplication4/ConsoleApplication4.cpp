/*
�� ���� ���� ������� ������� K ����� �����. �������� ���������, 
������������ ������� ����� � ����������� �� 30 ����.
���� ����������� ������ ��� �������� ��������� �� ������������.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const short ThirtyDays = 30;
	double dailyFoodAmount, totalFoodInGrams;
	cout << "�������� ������� ��������:\n������ ����� �� 1 ���� (�.) � > ";
	cin >> dailyFoodAmount;
	totalFoodInGrams = dailyFoodAmount / ThirtyDays;
	//cout << "�������� ������:\n����� ����� �� 30 ����: " << totalFoodInGrams << " ��";
	printf("�������� ������:\n����� ����� �� 30 ����: %.3f ��", totalFoodInGrams);
}