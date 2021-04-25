#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
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






// Задача 5

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int q,w,z,t;
	int i = 0;
	srand(time(NULL));
	
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	int *Arr = new int[a];
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	cout << "Введите интервал" << endl;
	cin >> q >> w;
	z = 0;
	t = 0;
	
	for(i = 0; i < a; i++) // Создание массива
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Arr[i] << " | ";
	}
	cout << endl << endl;
	
	for(i = 0; i < a; i++) // Сжатие массива
	{
		if(Arr[i] >= q && Arr[i] <= w)
		{
			z++;
			for(t = i; t < a; t++)
			{
				Arr[t] = Arr[t + 1];
				i--;
			}
		}
	}
	
	  for (int i = 0; i < a; i++)
    {
        if (i > a - 1 - z)
        {
        	Arr[i] = 0;
		}
    }
 
        for (int i = 0; i < a; i++)
    {
        cout << Arr[i] << " | ";
    }
    cout << endl;
	


	return 0;
	
}




// Задача 6

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int i,z,t;
	
	srand(time(0));
	
		
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	float *Arr = new float[a];
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	z = 0;
	t = 0;
	for(i = 0; i < a; i++)
	{
		Arr[i] = y + rand() % (y - x + 1);
		cout << Arr[i] << " | ";
	}
	
	
	for(i = 0; i < a; i++)
	{
		if(Arr[i] < 0)
		{
			for(z = i + 1; z < a; z++)
			{
			t += abs(Arr[z]);
			}
		}
		break;
	}
	cout << endl;
	cout << "Сумма модулей массива находящихся после первого отрицательного элемента составляет " << t << endl;
	
	
	return 0;
}




// Задача 7

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int i,z,t;
	
	srand(time(0));
	
		
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	float *Arr = new float[a];
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	z = x + 1;
	
	for(i = 0; i < a; i++)
	{
		Arr[i] = y + rand() % (x - y + 1);
		cout << Arr[i] << " | ";
	}
	
	cout << endl << endl;
	
	for(i = 0; i < a; i++)
	{
		Arr[i] = abs(Arr[i]);
	}
	
	for(i = 0; i < a; i++)
	{
		if(Arr[i] < z)
		{
			z = Arr[i];
			t = i + 1;
		}
	}
	cout << "Номер минимального значения массива по модулю равен " << t << endl;
	
	return 0;
}




// Задача 8 

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int i,z,t;
	
	srand(time(0));
	
		
	cout << "Введите количество чисел в массиве" << endl;
	cin >> a;
	int *Arr = new int[a];
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	z = 0;
	
	for(i = 0; i < a; i++)
	{
		Arr[i] = y + rand() % (x - y + 1);
		cout << Arr[i] << " | ";
	}
	
	cout << endl << endl;
	
	
	for(i = 0; i < a; i++)
	{
		for(abs(Arr[i]) > 0; Arr[i] != 0; abs(Arr[i]) / 10)
		{
			if(Arr[i] == 10)
			{
				z += 1;
				i++;
			}
			if(Arr[i] == 0)
			{
				z += 0;
			}
			else
			{
				z += abs(Arr[i]) % 10;
				Arr[i] /= 10;
				cout << "z = " << z << endl;
			}
		}
	}
	
	cout << "Сумма всех цифр целочисленного массива = " << z << endl;
	
	return 0;
}






// Задача 9

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y;
	int i,z,t,c,d;
	
	srand(time(0));
	
	int a,b;
		
	cout << "Введите количество строк и столбцов в массиве" << endl;
	cin >> a >> b;
	
	const int Row = a;
	const int Col = b;
	
	
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	
	int Matrix[Row][Col] = {};
	
	for (c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			Matrix[c][d] = rand() % (x - y + 1);
			if(Matrix[c][d] < 10) // немного красивости из-за выравнивания вертикальной черты. Работает до 3х значных чисел
			{
				cout << Matrix[c][d] << "  | ";
			}
			else 
			{
				cout << Matrix[c][d] << " | ";
			}
		}
		cout << endl;
	}
	
	cout << endl << endl;
	
	for (c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			Matrix[c][d] *= Matrix[c][d];
			if(Matrix[c][d] < 10) // немного красивости из-за выравнивания вертикальной черты. Работает до 3х значных чисел
			{
				cout << Matrix[c][d] << "  | ";
			}
			else 
			{
				cout << Matrix[c][d] << " | ";
			}
		}
		cout << endl;
	}
	
	cout << endl << endl;
	
	return 0;
	
}


*/

// Задача 10

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y;
	int i,z,t,c,d;
	
	srand(time(0));
	
	int a,b;
		
	cout << "Введите количество строк и столбцов в массиве" << endl;
	cin >> a >> b;
	
	const int Row = a;
	const int Col = b;
	
	
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	t = 0;
	z = 0;
	
	int Matrix[Row][Col] = {};
	
	for (c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			Matrix[c][d] = rand() % (x - y + 1);
			if(Matrix[c][d] < 10) // немного красивости из-за выравнивания вертикальной черты. Работает до 3х значных чисел
			{
				cout << Matrix[c][d] << "  | ";
			}
			else 
			{
				cout << Matrix[c][d] << " | ";
			}
		}
		cout << endl;
	}
	
	cout << endl << endl;
	
	
	for(c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			z += Matrix[c][d]; 
		}
		cout << endl;
		if(t < z)
		{
			t = z;
			i = c + 1;
		}
		z = 0;
	}
	cout << "В строке под номером " << i << " находится наибольшая сумма, равная " << t << endl;
	
	return 0;
}
