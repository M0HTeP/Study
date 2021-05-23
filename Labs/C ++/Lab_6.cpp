#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;




/*

// Задача 1


int count()
{
	int i;
	i++;
	cout << "Номер вызова функции     " << i << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y;
	int i,z,t,c,d;
	
	
	count();
	count();

	
	return 0;
}






// Задача 2 

int count()
{
	int i;
	i++;
	if((i % 3) == 1){
		cout << "Good morning!" << endl;
	}
	if((i % 3) == 2){
		cout << "Good day!" << endl;
	}
	if((i % 3) == 0){
		cout << "Good evening!" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y;
	int i,z,t,c,d;
	
	
	count();
	count();
	count();
	count();

	
	return 0;
}






// Задача 3



int x,i,y = 0;
int m = 0;

int digit(int m){
	
	i++;
	
	if(i == 1){
		x = 0;
		y = m;
	}
	else{
		x = y;
		y = m;
	}
	cout << x << endl;
}


int main(){
	setlocale(LC_ALL,"rus");
	
	do{
		cout << "Введите значение m " << endl;
		cin >> m;
		digit(m);
	}while(m);
	
	return 0;
}






// Задача 5 

float y, i = 0;
float avgsum(float x){
	
		
	float z = 0;
	y += x;
	//cout << "y = " << y << endl;
	i++;
	//cout << "i = " << i << endl;
	z = y / i;
	//cout << "Среднее арифметическое значение х = " << z << endl;
	if(x == 0){
		z = y / (i - 1);
		cout << "Среднее арифметическое значение х = " << z << endl;
	}
	}


int main(){
	setlocale(LC_ALL, "rus");
	float x = 0;
	cout << "Введите х " << endl;
	cin >> x;
	avgsum(x);
	
	
	do{
		
		cout << "Введите следующее значение х " << endl;
		cin >> x;
		avgsum(x);
	
	}while(x);

	return 0;
}




// Задача 6 

int x,i,y = 0;
int m = 1;

int sum(int m){
	
	i++;
	
	if(i == 1){
		x = 1;
		y = m;
	}
	else{
		x = 1 + y;
		y = m;
	}
	cout << x << endl;
}


int main(){
	setlocale(LC_ALL,"rus");
	
	do{
		cout << "Введите значение m " << endl;
		cin >> m;
		sum(m);
	}while(m);
	
	return 0;
}





// Задание 7


int x,i,y,z,m,a = 0;


int sum(int m){
	
	if(m == 0){
		x += m + z;
	}
	i++;
	x += m - a;
	a = z;
	z = y;
	y = m;
	cout << "Сумма 3х предыдущих значений равна " << x << endl;
	
}


int main(){
	setlocale(LC_ALL, "rus");
	
	do{
		cout << "Введите значение m " << endl;
		cin >> m;
		sum(m);
	}while(m);
	
	return 0;
	}





// Задача 8



int Array(int a){
	
	int x,y;
	
	
	srand(time(NULL));
	
	
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
	return 0;
}

int main(){
	setlocale(LC_ALL, "rus");
	int a = 0;
	cout << "Данная программа создаст введенное вами количество целочисленных массивов. Для прекращения программы введите любую букву" << endl;
	do{
		cout << "Введите количество чисел в массиве" << endl;
		cin >> a;
		Array(a);
	}while(a);

return 0;
}


*/


// Задача 9


int i,z,t,c,d; // Счетчики для функций
int a,b,x,y = 0; // Переменные для создания массива


int Matrix(){
	
	srand(time(0));
	
	
		
	cout << "Введите количество строк и столбцов в массиве" << endl;
	cin >> a >> b;
	
	cout << "Введите максимум и минимум" << endl;
	cin >> x >> y;
	
	const int Row = a;
	const int Col = b;
	
	const int upperlim = x;
	const int lowerlim = y;
	
	t = 0;
	z = 0;
	
	int Matrix[Row][Col] = {};
	
	for (c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			Matrix[c][d] = rand() % (upperlim - lowerlim + 1);
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


int Matrix_max(){
	
	const int Row = a;
	const int Col = b;
	
	const int upperlim = x;
	const int lowerlim = y;
	
	int max_digit = lowerlim;
	
	for(c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			if(Matrix[c][d] > max_digit){
			max_digit = Matrix[c][d];
			}
		}
		cout << endl;
		
	}
	cout << "Максимальное значение массива = " << max_digit << endl;
	
	return 0;
}

int Matrix_min(){
	
	int min_digit = upperlim;
	
	for(c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			if(min_digit > Matrix[c][d]){
			min_digit = Matrix[c][d];
			}
		}
		cout << endl;
		
	}
	cout << "Минимальное значение массива = " << min_digit << endl;
	
	return 0;
}

int main(){
	setlocale(LC_ALL, "rus");
	
	cout << "Данная программа создает двумерный массив" << endl;
	cout << "После чего, показывает максимальное и минимальное значение данного массива" << endl;
	cout << "Для продолжения введите +" << endl;
	cout << "Для завершения программы введите любую букву" << endl;
	do{
	cin >> t;
		if(t == '+'){
			Matrix();
			Matrix_max();
			Matrix_min();
		}
	}while(t == '+');
	
	return 0;	
}
