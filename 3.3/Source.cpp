#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double x; // ������� ��������
	double R1; // ������� ��������
	double R2; // ������� ��������
	double y; // ��������� ���������� ������
	std::cout << "������ �������� R1: "; std::cin >> R1;
	std::cout << "������ �������� R2(R2<6): "; std::cin >> R2;
	std::cout << "������ �������� x: "; std::cin >> x;

	// ������������ � ����� ����
	if (x <= - 2 * R1)
		y = -R1*x-2*R1*R1;
	else
		if (-2 * R1 < x && x <= 0)
			y = sqrt(R1*R1-pow(x+R1,2));
		else
			if (0 < x && x <= 2*R2)
				y = -sqrt(R2 * R2 - pow(x - R2, 2));
			else
				if (2*R2 < x && x <= 6)
					y = -((x-2*R2)/(2*(3-R2)));
				else
					 y = -1;
					
							

	            
         

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}