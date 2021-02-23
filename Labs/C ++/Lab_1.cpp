# include <iostream>
# include <math.h>
using namespace std;

/*int main()
{
	setlocale(LC_ALL, "Russian");
	// количество упаковок
	int chocolate = 2; 
	int milk = 3;
	int coffee = 1;
	// хранит цену за одну упаковку
	float priceOfChocolate = 11.04;
	float priceOfMilk = 9.59;
	float priceOfCoffee = 70.77;
	// общая сумма
	float sum = 0;
	
	//рассчет стоимости
	sum = (chocolate * priceOfChocolate) + (milk * priceOfMilk) + (coffee * priceOfCoffee);
	
	cout << "Общая стоимость покупки = "; // показ рассчета и общей стоимости
	
	cout << chocolate * priceOfChocolate << '+' << milk * priceOfMilk << '+' << coffee * priceOfCoffee;
	cout << "=" << sum << "рублей" << endl << endl;
	
	return 0;
	
}


int main()
{
	int first = 4;
	int second = first + 3;
	int third = first + second;
	
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
	cout << "third = " << third << endl;
	
	return 0;
}



// Задачи для самостоятельного решения

// Задача 1
int main()
{
	setlocale(LC_ALL, "Russian");
	int first;
	float second;
	double third;
	bool fourth;
	
	cin >> first;
	cin >> second;
	cin >> third;
	cin >> fourth;
	
	cout << "первое число = " << first << " второе число = " << second << " третье число = " << third << " четвертое число = " << fourth << endl;
	
	return 0;
}




// Задача 2

int main()
{
	char fir;
	char sec;
	char thi;
	char four;
	char fif;
	
	cin >> fir;
	cin >> sec;
	cin >> thi;
	cin >> four;
	cin >> fif;
	
	cout << fir << sec << thi << four << fif << endl;
	
	return 0;
}




// Задача 3

int main()
{
	setlocale(LC_ALL, "Russian");
	int first;
	int second;
	
	
	cin >> first;
	cin >> second;
	
	int sum = first + second;
	int diff = first - second;
	int proizv = first * second;
	int arif = (sum) / 2;
	
	cout << "Первое число = " << first << " Второе число = " << second << " Произведение чисел = " << proizv << " Сумма чисел = " << sum << " Разность чисел = " << diff << endl;
	
	return  0;
}




// Задача 4 (принцип Дирихле)

int main ()
{
	
	setlocale(LC_ALL, "Russian");
	float bunny;
	float hole;
	
	cout << "Введите количество зайцев ";
	cin >> bunny;
	cout << "Введите количество клеток ";
	cin >> hole;
	
	int a = round(bunny / hole);
	int b = round(hole / bunny);

	
	
	cout << "количество зайцев = " << bunny << " количество клеток = " << hole << endl;
	cout << "Максимальное количество зайцев в одной клетке = " << a << endl;
	
	return 0;
	
}






// Задача 5 

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int first;
	int last;
		
	cout << "Введите первое число ";
	cin >> first;
	cout << "Введите последнее число ";
	cin >> last;
	int count = first + last - 1;
	
	cout << "Первое число = " << first << " Последнее число = " << last << " Сумма всех целых чисел = " << (first + last) * count / 2 << endl;
	
	return 0;
}



// Задача 6

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	
	cout << "Введите величину стороны квадрата ";
	cin >> a;
	
	int perim = a * 4;
	int space = a * a;
	
	cout << "Дан квадрат со стороной = " << a << " Периметр = " << perim << " Площадь = " << space << endl;
	
	return 0;
}





// Задача 7

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	int b;
	
	cout << "Введите первый катет ";
	cin >> a;
	cout << "Введите второй катет ";
	cin >> b;
	
	float hipp = sqrt((a^2) + (b^2));
	
	cout << "Гипотенуза = " << hipp << endl;
	return 0;
}





// Задача 8

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n;
	int k;
	
	cout << "Введите количество школьников ";
	cin >> n;
	cout << " Введите количество яблок ";
	cin >> k;
	
	int ostatok = k % n;
	int communism = (k - ostatok) / n;
	
	cout << "Каждому школьнику достанется " << communism << " яблок(о)" << endl;
	return 0;
}




// Задача 9

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int x;
	
	cout << "Введите значение х ";
	cin >> x;
	
	int fx = x^2 + 3 * x - 100;
	
	cout << "Числовое значение функции = " << fx << endl;
	return 0;
}





// Задача 10 

int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	cout << "Рязанов Артем БФБО-01-20" << endl;
	return 0;
	
}






// Задача 11

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int x;
	int x1;
	int x2;
	int D;
	int a;
	int b;
	int c;
	
	
	cout << "Введите a ";
	cin >> a;
	cout << "Введите b ";
	cin >> b;
	cout << "Введите c ";
	cin >> c;
	
	
	int fx = a*(x^2) + b * x + c;
	
	D = pow(b,2) - 4 * a * c;
	
	x1 = (-b + sqrt(D)) / 2 * a;
	x2 = (-b - sqrt(D)) / 2 * a;
	
	cout << "x1 = " << x1 << " x2 = " << x2 << endl;
	cout << D << sqrt(D);
	return 0;
	
}





// Задача 12

int main()
{
	setlocale(LC_ALL, "Russian");
	
	float a;
	float b;
	
	
	cout << "Введите энтропию первой системы ";
	cin >> a;
	cout << "Введите энтропию второй системы ";
	cin >> b;
	
	float pa = a * log2 (a);
	float pb = b * log2 (b);
	
	cout << "Энтропия по Шеннону = " << pa + pb << endl;
	
	return 0;
}


*/


// Задача 13


int main()
{
	setlocale(LC_ALL, "Russian");
	
}
