#include <math.h>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/*


// Задача 1

int main()
{
 setlocale(LC_ALL, "rus");

int count = 0;
int age, mid_age = 0;
int mid_age_month = 0;
int total_age = 0;
int max;
int min = 1000;

cout << "Вводите возраст каждого посетителя, для окончания введите любую букву" << endl;
do
{
	cout << "Введите возраст " << count + 1 << " посетителя" << endl;
	cin >> age;

	if (age)
	{	
		count ++;
		total_age += age;
		if (age >= max)
		{
			max = age;
		}
		if (age <= min)
		{
			min = age;
		}
		
	}
} while(age);

mid_age = total_age / count;
mid_age_month = ceil(total_age % count % 12);
cout << total_age << endl;
cout << "За день было " << count << " посетителей" << endl;
cout << "Средний возраст составил " << mid_age << " лет " << mid_age_month << " месяц(ев)" << endl;
cout << "Самый старший посетитель возрастом " << max << " лет" << endl;
cout << "Самый молодой посетитель возрастом " << min << " лет" << endl;


return 0;
}







// Задача 2

int main()
{
	setlocale(LC_ALL, "rus");
	
	int box_all = 0;
	int box_sum = 0;
	int box_ost = 0;
	int box = 0;
	int car = 0;
	
	cout << "Введите количество ящиков" << endl;
	cin >> box_all;
	box_ost = box_all - box;
	do
	{
		cout << "Введите количество ящиков загружаемых в " << car + 1 << " грузовик" <<
		 "(Осталось " << box_ost << " ящиков)" << endl;
		cin >> box;
		
		if(box > box_ost)
		{
			cout << "Неверное количество ящиков, введеное на " << box - box_ost <<
			" больше. Введите верное количество" << endl;
			box_ost += 0;
			box_sum += 0;
		}
		if(box_all - box > 0)
		{
			car ++;
			box_ost -= box;
			box_sum += box;
			
		}
		if(box_ost - box == 0)
		{
			break;
		}
		
		
	} while(box_ost != 0);
	
	cout << "Все " << box_sum << " ящиков будут погружены в " << car << " грузовиков" << endl;
	
	return 0;
}




// Задача 3

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,z,i, a1;
	
	
	cout << "Введите диапазон значений" << endl;
	cin >> a >> z;
	a1 = a;
	do
	{
		if(a % 2 == 1)
		{
			i += a;
			a += 2;
		}
		if(a % 2 == 0)
		{
			a += 1;
			i += a;
			a += 2;
		}
		if(a > z) // При таком условии, будут считаться все числа, ВКЛЮЧАЯ заданные
		{
			break;
		}
	} while(a <= z);
	
	cout << "Сумма всех нечетных чисел от " << a1 << " до " << z << " равна " << i << endl;
	
	return 0;
}







// Задача 4

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,b,h,q;
	string x,y,z;
	x, y, z = "^";
	string space, space_1;
	space, space_1 = " ";
	
	cout << "Введите высоту равнобедренного треугольника" << endl;
	cin >> h;
	
	b = h * 2 + 1; // Общая ширина (основание)
	a = b - 2; // Количество пробелов
	
	z.resize(b + 2,'^'); // Рисуем основание
	cout << z << endl;
	do
	{
		if(b > 1)
		{
			space.resize(b - 2);
			cout << space_1 << "^" << space << "^" << endl;
			space_1 += " ";
			b -= 2;
		}
		if(b == 1)
		{
			b == 0;
			cout << space_1 << "^";
			break;
		}
	}while(b);
	
	return 0;
}








// Задача 5


int main()
{
	setlocale(LC_ALL, "rus");
	
	int x, max, x1;
	
	cout << "Введите натуральное число (значение от 2147483647 до -2147483647)" << endl;
	cin >> x;
	
	do
	{
		if (x > 0)
		{
			x1 = x % 10;
			if(x1 > max)
			{
				max = x1;
			}
			x = x / 10;
		}		
	}while(x);
	cout << "Самая большая цифра = " << max << endl;
	return 0;
}




// Задача 6 

int main()
{
	setlocale(LC_ALL, "rus");
	
	int c,x,a;
	double p,y,z;
	y = 0;
	cout << "Введите количество чисел для генератора" << endl;
	cin >> a;
	srand(time(NULL));
	
	for (c = 0; c != a; ++c)
	{
		x = rand();
		if (x % 2 == 0)
		{
			y += 1; // Счетчик четных чисел
		}
		if (x % 2 == 1)
		{
			z += 1; // Счетчик нечетных числел
		}
	}
	p = y / a;
	cout << "Вероятность выпадения четных чисел = " << p * 100 << "%" << endl;
	
	return 0;
}





// Задача 7 

int main()
{
	setlocale(LC_ALL, "rus");
	
	int c,n,t,x;
	t = 0;
		
	cout << "Введите количество чисел в множестве" << endl;
	cin >> n;
	
	for (c = 0; c != n; c++)
	{
		t = t + c + 1;
	}
	x = n * (n + 1) / 2;
	
	cout << t  << " = " << x << endl;
	
	return 0;
}





// Задача 8 

int main()
{
	setlocale(LC_ALL, "rus");
	
	float x,y,a,t;
	t = 1;
	cout << "Угадайте число от 0 до 100 за 10 попыток" << endl;
	srand(time(0));
	x = 0 + rand() % (100 + 0 + 1);
	do
	{
		
		cout << "Попытка # " << t << endl;
		cout << "Введите число " << endl;
		cin >> a;
		
		
		if(a > x && t < 10)
		{
			cout << "Великовато число, введите поменьше" << endl;
		}
		if(a < x && t < 10)
		{
			cout << "Маловато, маловато будет!" << endl;
		}
		if(a == x)
		{
			cout << "Правильно! Вы угадали число!!!" << endl;
			break;
		}
		t ++;
		if (t > 10)
		{
			cout << "К сожалению Вы проиграли. Загаданное число было " << x << endl;
		}
	}while(t != 11);
	
	
	return 0;
}




// Задача 9

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a = 31;
	cout << "Таблица ASCII с 32 по 127 символы" << endl;
	for (char i = ' '; i <= '~'; ++i)
	{
		cout << ++a << " = " << i << ((i % 10 == 9) ? '\n' : ' ');
	}
	
	return 0;
}





// Задача 10

int main()
{
	setlocale(LC_ALL, "rus");
	
	
	int x,x1,x2,y,z = 0;
	cout << "Введите натуральное число (значение от 2147483647 до -2147483647)" << endl;
	cin >> x;
	x2 = x;
	do
	{
		if (x > 0)
		{
			x1 = x % 10;
			if(x1 % 2 == 0)
			{
				y += 1;
			}
			if (x1 % 2 == 1)
			{
				z += 1;
			}
			x = x / 10;
		}		
	}while(x);
	cout << "В числе " << x2 <<  " количество четных цифр = " << y <<" , а количество нечетных цифр = " << z << endl;
	return 0;
}






// Задача 11 


int Fib(int i)
{
int value = 0;
if(i < 1) return 0;
if(i == 1) return 1;
return Fib(i-1) + Fib(i - 2);
}

int main()
{
	setlocale(LC_ALL, "rus");
int i,n = 0;
cout << "Введите число элементов ряда Фибоначчи" << endl;
	cin >> n;
while(i < n)
{
cout << Fib(i) << endl;
i++;
}
return 0;

}





// Задача 12

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,b,c,x = 0;
	
	cout << "Введите начальное и конечное числа" << endl;
	cin >> a >> b;
	cout << "Введите шаг" << endl;
	cin >> c;
	
	x = a;
	do
	{
		cout << x << endl;
		x += c;
		if (x >= b)
		{
			cout << b << endl;
			break;
		}
	}
	while(x);
	
	return 0;
}




// Задача 13

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a = 0;
	
	cout << "Введите число" << endl;
	cin >> a;
	
	do
	{
		if (a > 9)
		{
			cout << a % 10 ;
			a = a / 10;
		}
		else 
		{
		cout << a ;
		break;
		}
	}
	while(a);
		
	return 0;
}




// Задача 14

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x = 0;
	int y = 1;
	
	cout << "Введите число" << endl;
	cin >> a;
	
	do
	{
		if (a > 9)
		{
			x += a % 10 ;
			y *= a % 10; 
			a = a / 10;
		}
		else 
		{
			x += a;
			y *= a;
		break;
		}
	}
	while(a);
	cout << "Сумма цифр = " << x << endl;
	cout << "Произведение цифр = " << y << endl;
		
	return 0;
}






// Задача 15

int main()
{
	setlocale(LC_ALL, "rus");
	
	double a,b,d,x,y = 0;
	char c,z;
	
	
	do
	{
		cout << "Введите 2 числа" << endl;
		cin >> x >> y;
		cout << "Введите операцию (+, -, *, /)" << endl;
		cin >> c;

	
		if(c != '+' && c != '-' && c != '*' && c != '/'  || c == 0)
		{
			cout << "Введен неверный знак или неверное значение первого числа, повторите ввод" << endl;
			cout << "Введите 2 числа" << endl;
			cin >> x >> y;
			cout << "Введите операцию (+, -, *, /)" << endl;
			cin >> c;
		}
			if(c == '+')
			{
				a = x + y;
				cout << "Сумма чисел = " << a << endl;
			}
			if(c == '-')
			{
				a = x - y;
				cout << "Разность чисел = " << a << endl;
			}
			if(c == '*')
			{
				a = x * y;
				cout << "Произведение чисел = " << a << endl;
			}
			if(c == '/' && y != 0)
			{
				a = x / y;
				cout << "Частное чисел = " << a << endl;
			}
			if(c == '/' && y == 0)
			{
				cout << "Деление на 0 невозможно" << endl;
			}
			
		cout << "Вы хотите продолжить работу программы?" << endl;
		cout << "Если хотите завершить работу, введите НЕТ или 0" << endl;
		cin >> z;
		
		if(z = *"нет" && z == *"Нет" && z == *"НЕт" && z == *"НЕТ" && z == *"нЕТ" && z == *"НеТ" && z == 0)
		{
			break;
		}
		
	}while(z);
	
	return 0;
}


*/
