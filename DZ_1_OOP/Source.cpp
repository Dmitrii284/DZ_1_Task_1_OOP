#include <iostream>
#include <iomanip> 
#include<cstdio>



class Fraction
{
private:
	double _x;
	double _y = 1;	
public:
	Fraction(double x, double y)
	{
		_x = x;
		_y = y;		
	}
	void Print()
	{
		std::cout << "�������� ������: " << _x << " � "<< _y << '\n';		
	}

	void PrintSum()
	{
		std::cout << "����� �����: " << _x << " � " << _y << std::endl;
		std::cout << _x << " + " << _y << " = " << _x + _y << std::endl;
	}
	void PrintMulti()
	{
		std::cout << "��������� �����: " << _x << " � " << _y << std::endl;
		std::cout << _x << " * " << _y << " = " << _x * _y << std::endl;
	}
	void PrintSubtr()
	{		
			std::cout << "��������� �����: " << _x << " � " << _y << std::endl;
			std::cout << _x << " - " << _y << " = " << _x - _y << std::endl;		
	}
	void PrintFrac()
	{
		if (_y == 0)
		{
			std::cout << "������ �� "  << _y <<" ������ \n" << std::endl;			
		}
		else
		{
			std::cout << "������� �����: " << _x << " � " << _y << std::endl;
			std::cout << _x << " : " << _y << " = " << std::setprecision(2) << _x / _y << std::endl;
		}		
	}
	void Operation(int numOper)
	{	
		std::cout << "1 - ��� ��������� \n";		
		std::cout << "2 - ��� ������� \n";
		std::cout << "3 - ��� �������� \n";
		std::cout << "4 - ��� ��������� \n";
	}
};

int main() 
{
	setlocale(LC_ALL, "Rus");	
	char n1 = 'y';
	int num1 = 0, num2 = 0, numOper;
	std::cout << "������� ��� ����� -> \n";
	std::cin >> num1 >> num2;
	Fraction* num = new Fraction(num1, num2);
	std::cout << "\n";	
	do
	{
		std::cout << "1 - ��� ��������� \n";
		std::cout << "2 - ��� ������� \n";
		std::cout << "3 - ��� �������� \n";
		std::cout << "4 - ��� ��������� \n";
		std::cout << "n - ����� �� ���������!! \n";
		num->Print();
		std::cout << "�������� �������������� ��������: \n";		
		std::cin >> numOper;
		if (numOper >= 1 && numOper <= 4)
		{
			if (n1 == 'n')
			{
				std::cout << "����� �� ���������!!! \n";
				break;
			}
			else
			{				
					switch (numOper)
					{
					case 1:
						num->PrintMulti();
						break;
					case 2:
						num->PrintFrac();
						break;
					case 3:
						num->PrintSum();
						break;
					case 4:
						num->PrintSubtr();
						break;
					default:
						std::cout << "����� ������������ ������!!!\n";
						break;
					}							
			}
		}
		else
		{
			std::cout << "������������ ������!\n";
			if (numOper == n1)				
				break;					
		}
	}while (true);
		return 0;
}