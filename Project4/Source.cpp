// Lab_03_1.cpp
// < chycherska iryna >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����.
// ������ 29
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = (1 / x) + 4;
	// ����� 1: ������������ � ���������� ����
	if (x <= 1)
		B = 8 + 0.65 * (x);
	if (1 < x && x <= 5)
		B = log (x) + (1/tan((6.1 + x)/2));
	if (x > 5)
		B = sqrt(x + sqrt(2));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ������ ����
	if (x <= 1)
		B = 8 + 0.65 * (x);
	else
		if (1 < x && x <= 5)
			B = log(x) + (1/tan((6.1 + x) / 2));
		else
			B = sqrt(x + sqrt(2));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}