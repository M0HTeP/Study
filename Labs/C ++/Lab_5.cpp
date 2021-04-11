#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;




/*


// Задача 1

int main()
{
setlocale(LC_ALL, "rus");

int x,y = 0;
int Arr [10] = {};
const int lowerlim = - 20;
const int upperlim = 20;

srand(time(NULL));

for(int i = 0; i < 10; i++)
{
	Arr[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
	cout << Arr[i] << " | " ;
}

cout << endl << endl;

for(int i = 0; i < 10; i++)
{
	if(Arr[i] >= 0 && Arr[i] % 2 == 0)
	{
		x += Arr[i];
	}
	
}
cout << "Сумма четных положительных чисел = " << x <<endl;
return 0;
}






// Задача 2

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y,a = 0;
	
	
	srand(time(NULL));
	
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	int b = y;
	
	for (int i = 0; i < a; i ++)
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Arr[i] << " | ";
	}
	
	cout << endl << endl;
	
	for(int i = 0; i < a; i += 2)
	{
		if(Arr[i] > b)
		{
			b = Arr[i];
		}
	}
	
	cout << "Максимальный элемент с четным индексом = " << b << endl;
	
	return 0;
	
}




// Задача 3

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y,b = 0;
	
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	
	const int upperlim = x;
	const int lowerlim = y;
	
	srand(time(NULL));
	

	
	for(int i = 0; i < a; i++)
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim +1);
		b += Arr[i];
		cout << Arr[i] << " | ";
	}
	
	
	int c = b / a; // Среднее арифметическое
	
	cout << endl << endl;
	cout << "Значения, меньше среднего арифметического " << "(" << c << ")" << endl;
	for(int i = 0; i < a; i++)
	{
		if(Arr[i] < c)
		{
			cout << Arr[i] << " | ";
		}
	}
	
	return 0;
}







// Задача 4

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y = 0;
	
	
	cout << "Введите количество элементов в массиве" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "введите максимум и минимум" << endl;
	cin >> x >> y;
	
	const int upperlim = x;
	const int lowerlim = y;
	
	int v = x;
	int w = x;
	
	srand(time(NULL));
	
	for(int i = 0; i < a; i++)
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim +1);
		cout << Arr[i] << " | ";
	}
	
	cout << endl << endl;
	
	for(int i = 0; i < a; i++)
	{
		if(Arr[i] < v)
		{
			v = Arr[i];	
			cout << "v = "	<< v << endl;
		}
	
		if(Arr[i] < w && v != Arr[i])
		{
			w = Arr[i];
			cout << "w = " << w << endl;
		}
	}
	cout << "Два наименьших числа " << v << " и " << w << endl;
	
	return 0;
}



*/


// Задача 5

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int q,w,z;
	int i = 0;
	srand(time(NULL));
	
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	cout << "Введите интервал" << endl;
	cin >> q >> w;
	
	for(i = 0; i < a; i++) // Создание массива
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Arr[i] << " | ";
	}
	cout << endl << endl;
	for(i = 0; i < a; i++)
	{
		if(Arr[i] >= q && Arr[i] <= w)
		{
			Arr[i] = 0;
		}
	}
	do
	{
		
		if(Arr[i] == 0 && Arr[i + 1] != 0)
		{
			z = Arr[i];
			Arr[i] = Arr[i + 1];
			Arr[i + 1] = z;
			i++;
		}
	}while(i != a);
	
	for(i = 0; i < a; i++) // Создание массива
	{
		cout << Arr[i] << " | ";
	}
	
	return 0;
	
}
