// Lab_02.1.cpp 
// < �������� ������ > 
// ����������� ������ � 2. 
// ˳��� ��������. 
// ������ 26
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double z1; //��������� ���������� 1-�� ������
	double z2; //��������� ���������� 2-�� ������
	double a;  //������� ��������
	cout << "a= "; cin >> a;
	z1 = cos(a) + cos(a * 2) + cos(a * 6) + cos(a * 7);
	z2 = (4 * cos(a / 2)) * cos((5 * a) / 2) * cos(a * 4);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
