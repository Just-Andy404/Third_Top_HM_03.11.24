/*
�������� ���������, ������� �������� �� �� ����� ��������� ������� 
(����������� escape ������������������)
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "=================================================================================" << endl;
	cout << "|\tX\t|\tY\t|\tX AND Y |\tX OR Y  |\tNOT X\t|" << endl;
	cout << "=================================================================================" << endl;
	cout << "|\t0\t|\t0\t|\t0\t|\t0\t|\t1\t|" << endl;
	cout << "|\t0\t|\t1\t|\t0\t|\t1\t|\t1\t|" << endl;
	cout << "|\t1\t|\t0\t|\t0\t|\t1\t|\t0\t|" << endl;
	cout << "|\t1\t|\t1\t|\t1\t|\t1\t|\t0\t|" << endl;
	cout << "=================================================================================" << endl;

	return 0;
}