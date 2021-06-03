#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;


/*


// Задание 1


struct AEROFLOT{
	char destination;
	int flight;
	char plane;
};




// Задание 2                 Вводи и вывод информации только на латинской раскладке, иначе иероглифы

struct AEROFLOT{
	char dest[15]; // пункт назначения
	int flight; // номер рейса
	char plane[15]; // тип самолета
};



int main(){
	
	int i,t,q; // счетчики
	char z; // временная переменная
	setlocale(LC_ALL, "rus");
	
	static int j; // количество рейсов
	
	cout << "Введите количество рейсов" << endl;
	cin >> j;
	
	cout << "Введите данные рейсов" << endl;
	
	AEROFLOT a[j];
	
	
	
	// Заполнение БД
	for(i = 0; i < j; i++){
		cout << "Введите пункт назначения" << endl;
		cin >> a[i].dest;
		cout << "Введите номер рейса" << endl;
		cin >> a[i].flight;
		cout << "Введите тип самолета" << endl;
		cin >> a[i].plane;
	}
	
	// Реализация сортировки в алфавитном порядке по полю "Пункт назначения"
	
	for(i = 0; i < j; i++){
		for(t = i + 1; t < j; t++){
			if(strcmp(a[i].dest, a[t].dest) > 0){ // Сравнение 2х значений
				z = *a[i].dest;
				*a[i].dest = *a[j].dest;
				*a[j].dest = z;
			}
		}
	}
	
	for(i = 0; i < j; i++){
		cout << a[i].dest << "    " << a[i].flight << "    " << a[i].plane << endl;
	}
	
	char list[15];
	while(strcmp(list, "стоп")){
		cout << "Введите желаемый тип самолета: " << endl;
		cin >> list;
		q = 0;
		for(i = 0; i < j; i++){
			if(strcmp(a[i].plane, list) == 0){ // Проверка на отсутствие различий 2х значений
				cout << endl << a[i].dest << "    " << a[i].flight << endl;
				q++;
			}
		}
		if(q == 0)	cout << endl << "Такие рейсы отсутствуют";
	}
	
	return 0;
}







// Задание 3

struct MARSH{
	char start[15];
	char end[15];
	int num;
};



*/



// Задание 4



struct MARSH{
	char start[15];
	char end[15];
	int num;
};



int main(){
	
	setlocale(LC_ALL, "rus");
	
	int i,t,q,z; // счетчики
	
	setlocale(LC_ALL, "rus");
	
	static int j; // количество маршрутов
	
	cout << "Введите количество маршрутов" << endl;
	cin >> j;
	
	cout << "Введите данные по маршруту" << endl;
	
	MARSH a[j];
	
	
	
	// Заполнение БД
	for(i = 0; i < j; i++){
		cout << "Введите номер маршрута" << endl;
		cin >> a[i].num;
		cout << "Введите пункт отправления" << endl;
		cin >> a[i].start;
		cout << "Введите пункт прибытия" << endl;
		cin >> a[i].end;

	}
	
	// Реализация сортировки в порядке возрастания по полю "Номер маршрута"
	
	
    while (z)
    {
       z = false;	
       for(i = 1; i < j; i++)
       {
         if (a[i].num < a[i-1].num)
         {  swap(a[i].start,a[i-1].start);
            swap(a[i].end,a[i-1].end);
            swap(a[i].num,a[i-1].num);
            z = true;	} 
       }
    }
	
	for(i = 0; i < j; i++){
		cout << a[i].num << "    " << a[i].start << "    " << a[i].end << endl;
	}
	
   int list;
    while (true){
    	cout << endl << "Введите номер маршрута: ";
		cin >> list;
		
	i = 0;
	
    while ((a[i].num != list) && (i < j))	i++;
    cout << i << endl;
      	if (i == j){
      		cout << endl << "Маршрутов с номером " << list << " не найдено " << endl;
      	}
		else{   
    		cout << endl << "Пункт отправления " << a[i].start << "   ";
    		cout << "Пункт прибытия " << a[i].end << "  Номер " << a[i].num << endl;
    	}
      	cout << endl << "Для продолжения введите 1" << endl;
	  	cin >> q;
      	if (q == 0)  break;
    }
	
	
	
	return 0;
	
}
