#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


/*
// ������ 1


int main()
{
 setlocale(LC_ALL, "rus");
 int n = 0;
 int b = 0;


 cout << "������� �����" << endl;
 cin >> n;
 cout << "������� ��������" << endl;
 cin >> b;
 
 int a = n % b;
 int c = n + b - a;
 int d = n - b + a;

 if (a < (b / 2)) {
 cout << "��������� ����� " << d << endl;
 } else {
 	cout << "��������� ����� " << c << endl;
}
 
 
	

return 0;
}




// ������ 2

int main()
{
	setlocale(LC_ALL, "rus");
	double a = 0;
	double b = 0;
	double c = 0;
	
	cout << "������� ������ ����� " << endl; 
	cin >> a;
	cout << "������� ������ ����� " << endl; 
	cin >> b;
	
	c = sqrt(pow(a,2.) + pow(b,2.));	
	cout << "���������� ����� " << c << endl;
	
	return 0;
}




// ������ 3

int main()
{
	setlocale(LC_ALL, "rus");
	
	int num = 0;
	
	cout << "������� ����������� ����� " << endl;
	cin >> num;
	
	int a = num % 10; // ����� ������
	int b = num / 10 % 10; // ����� ��������
	int c = num / 100 % 10; // ����� �����
	
	int d = a + b + c;
	int e = a * b * c;
	cout << a << " " << b << " " << c << endl;
	cout << "������������ ���� = " << d << endl;
	cout << "����� ���� = " << e << endl;
	
	return 0;
}





// ������ 4

int main ()
{
	setlocale(LC_ALL, "rus");
	
	double x1;
	double x2;
	double y1;
	double y2;
	
	cout << "������� ���������� x " << endl;
	cin >> x1;
	cin >> x2;
	
	cout << "������� ���������� y " << endl;
	cin >> y1;
	cin >> y2;
	
	cout << y1 - y2 << "x + " << x2 - x1 << "y + " << x1 * y2 - x2 * y1 << "= 0" << endl;
	return 0;
	
	
	
}




// ������ 5

int main()
{
	setlocale(LC_ALL, "rus");
	
	int n; // ���-�� �����
	int y; // ���-�� ���
	double p; // ������ �������
	double m; // ����������� �������
	int s; // ��������� �������
	
	cout << "������� ����� ����� " << endl;
	cin >>  n;
	cout << "������� ���� ����� � ����� " << endl;
	cin >>  y;
	cout << "������� ������ ��������� ������� " << endl;
	cin >>  p;

	s = n + n * y * (p / 100);
	m = s / y / 12;
	
	cout << "����� ����� ������� �������� " << s << " ���." << endl;
	cout << "����������� ������� �������� " << m << " ���. � �����" << endl;
	
	return 0;
}





// ������ 6

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a;
	int b;
	
	cout << "������� ����� �" << endl;
	cin >> a;
	cout << "������� ����� b" << endl;
	cin >> b;
	
	int tmp = a;
	a = b;
	b = tmp;
	cout << "�������� � = " << a << " �������� b = " << b << endl;
	
	return 0;
}






// ������ 7

int main()
{
	setlocale(LC_ALL, "rus");
	
	int num;
	
	cout << "������� �������������� ����� " << endl;
	cin >> num;
	
	int a = num % 100;
	int b = num / 100;
	
	cout << "����� = " << a + b << endl;
	
	return 0;
}



// ������ 8

int main()
{
	setlocale(LC_ALL, "rus");
	
	int n; // ���-�� 5 �������� ����� ������ 
	double m = 6.; // 6 ���������� ������ �� 5 ������ ������
	double a; // ���-�� �����
	double ar; // ������ ���� � �����������
	double ah; // ������ ���� � �����������
	double Sr;
	double Pr;
	double Sh;
	cout << "������� ���������� �����" << endl;
	cin >> a;
	cout << "������� ������ ������ ���� � �����������" << endl;
	cin >> ar;
	cout << "������� ������ ���� � �����������" << endl;
	cin >> ah;
	double arr = ar / 100;
	double ahh = ah / 100;
	Sr = 3.14 * arr*arr; // ������� ������ ����
	Pr = 2 * 3.14 * arr; // �������� ������ ����
	Sh = Pr * ahh; // ������� ������� ������
	double S = Sr + Sh;
	n = ceil(S / m);
		cout << "��� �������� " << a << " ����� ����������� " << n << " 5�� �������� �����" << endl;
	
}




// ������ 9

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a;
	int b;
	int c;
	int d;
	
	cout << "������� ����� ������ �������������� " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	int Sp = (a + b) * 2;
	int St = a + b + c;
	int Spch = a + b + c + d;
	
	if (c == 0 && d == 0 ){
		cout << "�������� �������������� = " << Sp << endl;
	}
	if (d == 0){
		cout << "�������� ������������ = " << St << endl;
	}
	if (a != 0 && b != 0 && c != 0 && d != 0){
		cout << "�������� ������������� ���������������� = " << Spch << endl;
	}
	
	return 0;
}





// ������ 10

int main()
{
	setlocale(LC_ALL, "rus");
	
	int R;
	
	cout << "������� ������ ����� � �����������" << endl;
	cin >> R;
	
	double S = 4 * 3.14 * R * R;
	double V = 4 * 3.15 * R * R * R / 3;
	
	cout << "������� ����� = " << S << " ��. "<< endl << " ����� ����� = " << V << " ��. "<< endl;
	
	return 0;
}




// ������ 11

int main()
{
	setlocale(LC_ALL, "rus");
	
	int R;
	int h;
	
	cout << "������� ������ �������� � �����������" << endl;
	cin >> R;
	cout << "������� ������ �������� � �����������" << endl;
	cin >> h;
	
	double S = 2 * 3.14 * R * (h + R);
	double V = 3.14 * R * R * h;
	
	cout << "������� �������� = " << S << " ��^2 " << " ����� �������� = " << V << " ��^3" << endl;
	
	return 0;
}




// ������ 12

int main()
{
	setlocale(LC_ALL, "rus");
	
	int r;
	int l;
	
	cout << "������� ������ ��������� ������ � �����������" << endl;
	cin >> r;
	cout << "������� ���������� � �����������" << endl;
	cin >> l;
	
	double h = sqrt(l * l - r * 2 * r * 2 / 4);
	double S = r * 2 * h / 2;
	
	cout << "������� ������� ������� ������� ��������� ������ = " << S << " ��^2" << endl;
	
	return 0;
}







// ������ 13

int main()
{
	setlocale(LC_ALL, "rus");
	
	double r;
	double h;
	
	cout << "������� ������ ��������� ������ � �����������" << endl;
	cin >> r;
	cout << "������� ������ � �����������" << endl;
	cin >> h;
	
	double S = 3.14 * r * (r + sqrt(r * r + h * h));
	double V = 3.14 * r * r * h / 3;
	
	cout << "������� ����������� ������ = " << S << " ��^2" << " ����� ������ = " << V << " ��^3" << endl;
	
	return 0;
}


*/

// ������ 14,15

int main()
{
	setlocale(LC_ALL, "rus");
	
	double n; // ���-�� ������ ��������
	int a; // ���������
	double h; // ������
	
	cout << "������� ���������� ������ ��������" << endl;
	cin >> n;
	cout << "������� ����� ��������� ��������" << endl;
	cin >> a;
	cout << "������� ������ ��������" << endl;
	cin >> h;
	
	double Sb = n * a * a / 4 * tan(180 / n);
	double Sl = n * a / 2 * sqrt(h * h + pow(a / 2 * tan(180 / n), 2.));
	double S = Sb + Sl;
	double V = h * n * a * a / 12 * tan(180 / n);
	
	cout << "������� �������� = " << S << " ��^2" << " ����� �������� = " << V << " ��^3" << endl;
	
	return 0;
	
}
