#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;


/*

// Задание 1

int main(){
	
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int sum;
	
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << endl;
	cout << "Введите максимум и минимум" << endl;
	cin >> upperlim >> lowerlim;
	
	int* Array = new int [size];

	
	
	for(int i = 0; i < size; i++){
		Array[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Array[i] << " | ";
	}
	cout << endl << endl;
	
	for(int i = 0; i < size; i++){
	if(Array[i] >= 0 && Array[i] % 2 == 0)
	{
		sum += Array[i];
	}
	
	}
cout << "Сумма четных положительных чисел = " << sum <<endl;
	
	delete[] Array;

	
	return 0;
	
}




// Задание 2

int main(){
	
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int max;
	
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << endl;
	cout << "Введите максимум и минимум" << endl;
	cin >> upperlim >> lowerlim;
	
	int b = lowerlim;
	
	int* Array = new int [size];
	
	for(int i = 0; i < size; i++){
		Array[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Array[i] << " | ";
	}
	cout << endl << endl;
	
		
	for(int i = 0; i < size; i += 2)
	{
		if(Array[i] > b)
		{
			b = Array[i];
		}
	}
	
	cout << "Максимальный элемент с четным индексом = " << b << endl;
	
	delete[] Array;
// Если ввести размер массива = 20, то будет непонятное число. Не баг, а фича =)
	
	return 0;
	
}





// Задание 3

int main(){
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int max;
	int sum;
	int avg;
	
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << endl;
	cout << "Введите максимум и минимум" << endl;
	cin >> upperlim >> lowerlim;
	
	int b = lowerlim;
	
	int* Array = new int [size];
	
	
	for(int i = 0; i < size; i++){
		Array[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Array[i] << " | ";
		sum += Array[i];
	}
	cout << endl << endl;
	
	avg = sum / size;
	
	cout << "Значения, меньше среднего арифметического " << "(" << avg << ")" << endl;
	for(int i = 0; i < size; i++)
	{
		if(Array[i] < avg)
		{
			cout << Array[i] << " | ";
		}
	}
	
	
	delete[] Array;
	return 0;
}


*/

// Задание 4

int main(){
	
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int low1, low2;
	
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << endl;
	cout << "Введите максимум и минимум" << endl;
	cin >> upperlim >> lowerlim;
	
	int b = lowerlim;
	
	int* Array = new int [size];
	
	
	for(int i = 0; i < size; i++){
		Array[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Array[i] << " | ";
	}
	cout << endl << endl;
	
	
	for(int i = 0; i < size; i++)
	{
		if(Array[i] < low1)
		{
			low1 = Array[i];	
			cout << "low1 = "	<< low1 << endl;
		}
	
		if(Array[i] < upperlim && low1 != Array[i])
		{
			low2 = Array[i];
			cout << "low2 = " << low2 << endl;
		}
	}
	cout << "Два наименьших числа " << low1 << " и " << low2 << endl;
}
