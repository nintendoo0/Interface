#include "Calculator.h"
#include "math.h"

Calculator::Calculator(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = DiscriminantFinder();
}


double Calculator::DiscriminantFinder()
{
	double d;
	d = pow(b, 2) - 4 * a * c;
	return d;
}


array<String^>^ Calculator::FirstType()
{
	array<String^>^ roots = gcnew array<String^>(2);
	roots[0] = Convert::ToString(round(((-1 * b + sqrt(d)) / (2 * a)) * 10000) / 10000);
	roots[1] = Convert::ToString(round(((-1 * b - sqrt(d)) / (2 * a)) * 10000) / 10000);
	return roots;
	delete roots;
}


array<String^>^ Calculator::SecondType()
{
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = Convert::ToString(round((-1 * b) / (2 * a) * 10000) / 10000);
	roots[1] = "";
	roots[2] = Convert::ToString(-1 * b) + "/" + Convert::ToString(2 * a);
	roots[3] = "";
	return roots;
	delete roots;
}

array<String^>^ Calculator::ThirdType() {
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = "��������� ����� ��� ����� x";
	roots[1] = "";
	roots[2] = "��������� ����� ��� ����� x";
	roots[3] = "";
	return roots;
	delete roots;
}

array<String^>^ Calculator::FourthType() {
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = "0";
	roots[1] = "";
	roots[2] = "0";
	roots[3] = "";
	return roots;
	delete roots;

}

array<String^>^ Calculator::FifthType() {
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = Convert::ToString(round(((-1 * c) / b) * 10000) / 10000);
	roots[1] = "";
	roots[2] = Convert::ToString(-1 * c) + "/" + Convert::ToString(b);
	roots[3] = "";
	return roots;
	delete roots;
}

array<String^>^ Calculator::SixthType() {
	array<String^>^ roots = gcnew array<String^>(4);
	roots[0] = "��������� �������";
	roots[1] = "";
	roots[2] = "";
	roots[3] = "";
	return roots;
	delete roots;

}



array<String^>^ Calculator::Solve()
{
	array<String^>^ roots = gcnew array<String^>(4);

	if (a != 0) {

		if (d > 0) {
			roots = FirstType();
		}
		if (d == 0) {
			roots = SecondType();
		}
		if (d < 0) {
			roots[0] = "������ ���";
			roots[1] = "������ ���";
			roots[2] = "������ ���";
			roots[3] = "������ ���";
		}

		return roots;
	}

	if (a == 0 && b == 0 && c == 0) {
		roots = ThirdType();
		return roots;
	}

	if (a == 0 && b != 0 && c == 0) {
		roots = FourthType();
		return roots;
	}

	if (a == 0 && b != 0 && c != 0) {
		roots = FifthType();
		return roots;
	}

	if (a == 0 && b == 0 && c != 0) {
		roots = SixthType();
		return roots;
	}
	delete roots;
}

double Calculator::Function(double x)
{
	double y;
	y = a * pow(x, 2) + b * x + c;
	return y;
}


double Calculator::GetPeak()
{
	return ((-1 * b) / (2 * a));
}

array<String^>^ Calculator::SolveSelection(double precision, double border, int len) {

	double Peak = GetPeak();
	array<String^>^ roots = gcnew array<String^>(2);
	if (d > 0 && a != 0) {
		while (Peak <= border)
		{
			if ((Function(Peak) <= 0 && Function(Peak + precision) >= 0) || (Function(Peak) >= 0 && Function(Peak + precision) <= 0)) {
				roots[1] = "[" + Convert::ToString(round(Peak * pow(10, len)) / pow(10, len)) + ";" + Convert::ToString(round((Peak + precision) * pow(10, len)) / pow(10, len)) + "]";
				break;
			}
			else
			{
				Peak = Peak + precision;
			}
		}
	}

	Peak = GetPeak();
	if (d > 0 && a != 0) {
		while (Peak >= -1 * border)
		{
			if ((Function(Peak) <= 0 && Function(Peak - precision) >= 0) || (Function(Peak) >= 0 && Function(Peak - precision) <= 0)) {
				roots[0] = "[" + Convert::ToString(round(Peak * pow(10, len)) / pow(10, len)) + ";" + Convert::ToString(round((Peak - precision) * pow(10, len)) / pow(10, len)) + "]";
				break;
			}
			else
			{
				Peak = Peak - precision;
			}

		}
	}

	if (a == 0 && b == 0 && c == 0)
	{
		roots[0] = "[����������";
		roots[1] = " ����� �������]";
	}
	if (d < 0) {
		roots[0] = "��� ";
		roots[1] = "������";
	}

	return roots;
	delete roots;
}