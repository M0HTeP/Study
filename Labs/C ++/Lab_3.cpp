#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;




/*

// Задача 1

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b;
	a = rand();
	b = rand();
	if (a%2 == 1 && b%2 == 0) {
		cout << a;
		}
	else if (a%2 == 0 && b%2 == 1){
		cout << b;
	}
	else if (a%2 == 0 && b%2 == 0){
		a +=1;
		cout << a;
	}
	else if (a%2 == 1 && b%2 == 1){
		b += 1;
		cout << a;
	}
	
	return 0;
	
 } 
 
 
 

 
 
 
 // Задача 2
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a, b, c;
 	
 	cout << "Введите 3 рахличныз числа" << endl;
 	cin >> a;
 	cin >> b;
 	cin >> c;
 	
 	if (a < b < c){
 		cout << "Средним числом является " << b << endl;
	 }
	 
	else if (b < a < c){
			cout << "Средним числом является " << a << endl;
	}
	
	else {
			cout << "Средним числом является " << c << endl;
	}
	
	
	return 0;
 }
 
 
 

 
 
 // Задача 3
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a;
 	
 	cout << "Введите число" << endl;
 	cin >> a;
 	
 	cout << "Количество байт = " << a * 1024 << endl << "Количество килобайт = " << a * 1024 * 1024 << endl;
 	
 	return 0;
 }
 
 
 
 
 // Задача 4
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a;
 	
 	cout << "Введите номер символа таблицы ASCII" << endl;
 	cin >> a;
 	
 	if (a >= 65 && a <= 90){
 		cout << "Введен код английской заглавной буквы" << endl;
	 }
	 
	else if (a >= 97 && a <= 122){
		cout << "Введен код английской строчной буквы" << endl;
	}
	
	else {
		cout << "Введен какой-то код =)" << endl;
	}
	
	return 0;
 }
 
 

 
 
 
 // Задача 5
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a,b;
 	
 
 	cout << "Введите 2 разных числа" << endl;
 	cin >> a;
 	cin >> b;
 	
	 
	int c = a / b;
 	int d = a % b; 	

 	if (d == 0){
 		cout << "Число " << a << " делится на число " << b;
 		cout << " без остатка" << endl;
 		cout << "Частное от деления = " << c << endl;
	 }
	 
	else {
		cout << "Число " << a << " делится на число " << b;
 		cout << " с остатком, который составляет " << d << endl;
 		cout << "Частное от деления = " << c << endl;
	}
	
	return 0;
 }
 
 
 

 
 
 // Задача 6
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a;
 	
 	cout << "Введите год" << endl;
 	cin >> a;
 	
 	if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
 		cout << "Год високосный" << endl;
	 }
	 
	else {
		cout << "Год не високосный" << endl;
	}
	
	return 0;
 }
 
 

 
 
 // Задача 7
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a,b,c;
 	
 	cout << "Введите коэффициенты квадратного уравнения" << endl;
 	cin >> a >> b >> c;
 	
 	cout << "Квадратное уравнение имеет вид: " << a << "x^2 + " << b << "x + " << c << endl;
 	
 	cout << "Вычислим дискриминант по формуле D = " << b << "^2-4*" << a << "*" << c << endl;
 	float D = b * b - 4 * a * c;
 	float x1 = (-b + sqrt(D)) / (2 * a);
 	float x2 = (-b - sqrt(D)) / (2 * a);
 	
 	if (D > 0){ 		
 		cout << "Так как дискриминант больше 0 и равен " << D << " , то уравнение имеет решение" << endl;
 		cout << "x1 = " << x1 << endl;
 		cout << "x2 = " << x2 << endl;
	 }
	
	else if (D == 0){
		cout << "Так как дискриминант равен 0, то уравнение имеет только одно решение" << endl;
		cout << "x = " << x1 << endl;
	}
	
	else {
		cout << "Так как дискриминант отрицательный и равен " << D << " , то уравнение решений не имеет" << endl;
		
	return 0;	
	}
 }
 
 
 

 
 
 // Задача 8
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float x,y;
 	
 	cout << "Введите координаты Х и У" << endl;
 	cin >> x >> y;
 	
 	if (x > 0 && y > 0){
 		cout << "Точка принадлежит 1 четверти" << endl;
	 }
	 
	else if ( x < 0 && y > 0){
		cout << "Точка принадлежит 2 четверти" << endl;
	}
	else if ( x < 0 && y < 0){
		cout << "Точка принадлежит 3 четверти" << endl;
	}
	else if ( x > 0 && y < 0){
		cout << "Точка принадлежит 4 четверти" << endl;
	}
	else if (x == 0 && y > 0){
		cout << "Точка принадлежит 1 и 2 четвертям" << endl;
	}
	else if (x == 0 && y < 0){
		cout << "Точка принадлежит 3 и 4 четвертям" << endl;
	}
	else if (x > 0 && y ==0){
		cout << "Точка принадлежит 1 и 4 четвертям" << endl;
	}
	else if (x < 0 && y == 0){
		cout << "Точка принадлежит 2 и 3 четвертям" << endl;
	}
	else{
		cout << "Точка является началом координат" << endl;
	}
	
	return 0;
 }
 
 

 
 
 // Задача 9
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float x,y,r;
 	
 	cout << "Введите координаты Х и У для точки" << endl;
 	cin >> x >> y;
 	cout << "Введите радиус окружности" << endl;
 	cin >> r;
 	
 	float h = sqrt(x * x + y * y);
 	
 	cout << "Расстояние от начала координат до точки = " << h << endl;
 	
 	if (h <= r){
 		cout << "Точка принадлежит окружности" << endl;
	 }
 	
 	else{
 		cout << "Точка не принадлежит окружности" << endl;
	 }
 	return 0;
 }
 
 
 
 

 
 // Задача 10
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	
 	float y,x;
 	
 	cin >> x;
 	
 	if (x > 0){
 		y = 2 * x - 10;
 		cout << y << endl;
	 }
	else if (x = 0){
		y = 2;
		cout << y << endl;
	}
	else {
		y = 2 * fabs(x) - 1;
		cout << y << endl;
	}
 	
 	
 	return 0;
 }
 
 
 

 
 
 // Задача 11
 
 int main(){
 	setlocale(LC_ALL, "rus");
 	
 	float a,b,c;
 	
 	cout << "Введите 3 числа" << endl;
 	cin >> a >> b >> c;
 	
 	if (a > b && a > c){
 		cout << "Наибольшее число = " << a << endl;
	 }
	else if (b > a && b > c ){
		cout << "Наибольшее число = " << b << endl;
	}
	else if (c > a && c > b){
		cout << "Наибольшее число = " << c << endl;
	}
	 
	 return 0;
 }
 
 
 
 

 
 
 
 // Задача 12
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float a,b,c;
 	
 	cout << "Введите стороны треугольника" << endl;
 	cin >> a >> b >> c;
 	
 	if (a + b <= c || a + c <= b || b + c <= a){
 		cout << "Треугольник не существует" << endl;
	 }
	 
	else if (a != b && a != c && b != c){
		cout << "Треугольник разносторонний" << endl;
	}
	
	else if(a == b == c){
		cout << "Треугольник равносторонний" << endl;
	}
	
	else {
		cout << "Треугольник равнобедренный" << endl;
	}
	
	return 0;
 }
 
 
 
 

 
 
 
 // Задача 13 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float a,r;
 	
 	cout << "Введите сторону квадрата и радиус круга" << endl;
 	cin >> a >> r;
 	
 	float Sr = 3.14 * r * r; // Площадь круга
 	if (r <= a / 2) {
 		cout << "Круг может быть вписан в квардат" << endl;
	 }
	 
	else if ((a * sqrt(2)) / 2 <= r){
		cout << "Квадрат может быть вписан в круг" << endl;
	}
	else{
		cout << "Ничего не получится =)" << endl;
	}
	
	return 0;
 }
 

 
 
 // Задача 14
 
 
 int main() 
 {
 	setlocale(LC_ALL, "rus");
 	
 	int x;
 	
 	cout << "Введите возраст" << endl;
 	cin >> x;
 	
 	if (x <= 5){
 		cout << "Дошкольник" << endl;
	 }
	 
	else if (x >5 && x <= 17){
		cout << "Ученик" << endl;
	}
	
	else if (x > 17 && x <= 50){
		cout << "Работник" << endl;
	}
	
	else if (x > 50 && x <= 120){
		cout << "Пенсионер" << endl;
	}
	else{
		cout << "Puncks not dead!" << endl;
	}
	
	return 0;
 	
 	
 }
 
 

 
 
 // Задача 15
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float y,a;
 	
 	cout << "Введите возраст и трудовой стаж" << endl;
 	cin >> a >> y;
 	
 	if (18 <= a < 42 && y >= 20){
 		cout << "Вы нам подъодите!" << endl;
	 }
	 
	else {
		cout << "Не, не прокатит" << endl;
	}
	
	return 0;
 }
 
 
 */
