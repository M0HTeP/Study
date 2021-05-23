#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;


/*

// ������� 1

int main(){
	
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int sum;
	
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << endl;
	cout << "������� �������� � �������" << endl;
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
cout << "����� ������ ������������� ����� = " << sum <<endl;
	
	delete[] Array;

	
	return 0;
	
}




// ������� 2

int main(){
	
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int max;
	
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << endl;
	cout << "������� �������� � �������" << endl;
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
	
	cout << "������������ ������� � ������ �������� = " << b << endl;
	
	delete[] Array;
// ���� ������ ������ ������� = 20, �� ����� ���������� �����. �� ���, � ���� =)
	
	return 0;
	
}





// ������� 3

int main(){
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int max;
	int sum;
	int avg;
	
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << endl;
	cout << "������� �������� � �������" << endl;
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
	
	cout << "��������, ������ �������� ��������������� " << "(" << avg << ")" << endl;
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

// ������� 4

int main(){
	
	setlocale(LC_ALL, "rus");
	
	srand(time(0));
	
	int size;
	int upperlim;
	int lowerlim;
	int low1, low2;
	
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << endl;
	cout << "������� �������� � �������" << endl;
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
	cout << "��� ���������� ����� " << low1 << " � " << low2 << endl;
}
