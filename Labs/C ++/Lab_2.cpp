#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


/*
// Задача 1


int main()
{
 setlocale(LC_ALL, "rus");
 int n = 0;
 int b = 0;


 cout << "Введите число" << endl;
 cin >> n;
 cout << "Введите делитель" << endl;
 cin >> b;
 
 int a = n % b;
 int c = n + b - a;
 int d = n - b + a;

 if (a < (b / 2)) {
 cout << "Ближайшее число " << d << endl;
 } else {
 	cout << "Ближайшее число " << c << endl;
}
 
 
	

return 0;
}




// Задача 2

int main()
{
	setlocale(LC_ALL, "rus");
	double a = 0;
	double b = 0;
	double c = 0;
	
	cout << "Введите первый катет " << endl; 
	cin >> a;
	cout << "Введите второй катет " << endl; 
	cin >> b;
	
	c = sqrt(pow(a,2.) + pow(b,2.));	
	cout << "Гипотенуза равна " << c << endl;
	
	return 0;
}




// Задача 3

int main()
{
	setlocale(LC_ALL, "rus");
	
	int num = 0;
	
	cout << "Введите трехзначное число " << endl;
	cin >> num;
	
	int a = num % 10; // число единиц
	int b = num / 10 % 10; // число десятков
	int c = num / 100 % 10; // число сотен
	
	int d = a + b + c;
	int e = a * b * c;
	cout << a << " " << b << " " << c << endl;
	cout << "Произведение цифр = " << d << endl;
	cout << "Сумма цифр = " << e << endl;
	
	return 0;
}





// Задача 4

int main ()
{
	setlocale(LC_ALL, "rus");
	
	double x1;
	double x2;
	double y1;
	double y2;
	
	cout << "Введите координаты x " << endl;
	cin >> x1;
	cin >> x2;
	
	cout << "Введите координаты y " << endl;
	cin >> y1;
	cin >> y2;
	
	cout << y1 - y2 << "x + " << x2 - x1 << "y + " << x1 * y2 - x2 * y1 << "= 0" << endl;
	return 0;
	
	
	
}




// Задача 5

int main()
{
	setlocale(LC_ALL, "rus");
	
	int n; // кол-во займа
	int y; // кол-во лет
	double p; // ставка годовых
	double m; // ежемесячные выплаты
	int s; // суммарная выплата
	
	cout << "Введите сумму займа " << endl;
	cin >>  n;
	cout << "Введите срок займа в годах " << endl;
	cin >>  y;
	cout << "Введите ставку процентов годовых " << endl;
	cin >>  p;

	s = n + n * y * (p / 100);
	m = s / y / 12;
	
	cout << "Общая сумма кредита составит " << s << " руб." << endl;
	cout << "Ежемесячные выплаты составят " << m << " руб. в месяц" << endl;
	
	return 0;
}





// Задача 6

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a;
	int b;
	
	cout << "Введите число а" << endl;
	cin >> a;
	cout << "Введите число b" << endl;
	cin >> b;
	
	int tmp = a;
	a = b;
	b = tmp;
	cout << "Значение а = " << a << " Значение b = " << b << endl;
	
	return 0;
}






// Задача 7

int main()
{
	setlocale(LC_ALL, "rus");
	
	int num;
	
	cout << "Введите четырехзначное число " << endl;
	cin >> num;
	
	int a = num % 100;
	int b = num / 100;
	
	cout << "Сумма = " << a + b << endl;
	
	return 0;
}



// Задача 8

int main()
{
	setlocale(LC_ALL, "rus");
	
	int n; // кол-во 5 литровых банок краски 
	double m = 6.; // 6 квадратных метров из 5 литров краски
	double a; // кол-во баков
	double ar; // радиус бака в сантиметрах
	double ah; // высота бака в сантиметрах
	double Sr;
	double Pr;
	double Sh;
	cout << "Введите количество баков" << endl;
	cin >> a;
	cout << "Введите радиус крышки бака в сантиметрах" << endl;
	cin >> ar;
	cout << "Введите высоту бака в сантиметрах" << endl;
	cin >> ah;
	double arr = ar / 100;
	double ahh = ah / 100;
	Sr = 3.14 * arr*arr; // площадь крышки бака
	Pr = 2 * 3.14 * arr; // периметр крышки бака
	Sh = Pr * ahh; // площадь внешней стенки
	double S = Sr + Sh;
	n = ceil(S / m);
		cout << "Для покраски " << a << " баков потребуется " << n << " 5ти литровых банок" << endl;
	
}




// Задача 9

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a;
	int b;
	int c;
	int d;
	
	cout << "Введите длины сторон многоугольника " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	
	int Sp = (a + b) * 2;
	int St = a + b + c;
	int Spch = a + b + c + d;
	
	if (c == 0 && d == 0 ){
		cout << "Периметр прямоугольника = " << Sp << endl;
	}
	if (d == 0){
		cout << "Периметр треугольника = " << St << endl;
	}
	if (a != 0 && b != 0 && c != 0 && d != 0){
		cout << "Периметр произвольного четырехугольника = " << Spch << endl;
	}
	
	return 0;
}





// Задача 10

int main()
{
	setlocale(LC_ALL, "rus");
	
	int R;
	
	cout << "Введите радиус сферы в сантиметрах" << endl;
	cin >> R;
	
	double S = 4 * 3.14 * R * R;
	double V = 4 * 3.15 * R * R * R / 3;
	
	cout << "Площадь сферы = " << S << " см. "<< endl << " Объем сферы = " << V << " см. "<< endl;
	
	return 0;
}




// Задача 11

int main()
{
	setlocale(LC_ALL, "rus");
	
	int R;
	int h;
	
	cout << "Введите радиус цилиндра в сантиметрах" << endl;
	cin >> R;
	cout << "Введите высоту цилиндра в сантиметрах" << endl;
	cin >> h;
	
	double S = 2 * 3.14 * R * (h + R);
	double V = 3.14 * R * R * h;
	
	cout << "Площадь цилиндра = " << S << " см^2 " << " Объем цилиндра = " << V << " см^3" << endl;
	
	return 0;
}




// Задача 12

int main()
{
	setlocale(LC_ALL, "rus");
	
	int r;
	int l;
	
	cout << "Введите радиус основания конуса в сантиметрах" << endl;
	cin >> r;
	cout << "Введите образующую в сантиметрах" << endl;
	cin >> l;
	
	double h = sqrt(l * l - r * 2 * r * 2 / 4);
	double S = r * 2 * h / 2;
	
	cout << "Площадь осевого сечения прямого кругового конуса = " << S << " см^2" << endl;
	
	return 0;
}







// Задача 13

int main()
{
	setlocale(LC_ALL, "rus");
	
	double r;
	double h;
	
	cout << "Введите радиус основания конуса в сантиметрах" << endl;
	cin >> r;
	cout << "Введите высоту в сантиметрах" << endl;
	cin >> h;
	
	double S = 3.14 * r * (r + sqrt(r * r + h * h));
	double V = 3.14 * r * r * h / 3;
	
	cout << "Площадь поверхности конуса = " << S << " см^2" << " Объем конуса = " << V << " см^3" << endl;
	
	return 0;
}


*/

// Задача 14,15

int main()
{
	setlocale(LC_ALL, "rus");
	
	double n; // кол-во сторон пирамиды
	int a; // основание
	double h; // высота
	
	cout << "Введите количество сторон пирамиды" << endl;
	cin >> n;
	cout << "Введите длину основания пирамиды" << endl;
	cin >> a;
	cout << "Введите высоту пирамиды" << endl;
	cin >> h;
	
	double Sb = n * a * a / 4 * tan(180 / n);
	double Sl = n * a / 2 * sqrt(h * h + pow(a / 2 * tan(180 / n), 2.));
	double S = Sb + Sl;
	double V = h * n * a * a / 12 * tan(180 / n);
	
	cout << "Площадь пирамиды = " << S << " см^2" << " Объем пирамиды = " << V << " см^3" << endl;
	
	return 0;
	
}
