#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;




/*

// ������ 1

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
 
 
 

 
 
 
 // ������ 2
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a, b, c;
 	
 	cout << "������� 3 ��������� �����" << endl;
 	cin >> a;
 	cin >> b;
 	cin >> c;
 	
 	if (a < b < c){
 		cout << "������� ������ �������� " << b << endl;
	 }
	 
	else if (b < a < c){
			cout << "������� ������ �������� " << a << endl;
	}
	
	else {
			cout << "������� ������ �������� " << c << endl;
	}
	
	
	return 0;
 }
 
 
 

 
 
 // ������ 3
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a;
 	
 	cout << "������� �����" << endl;
 	cin >> a;
 	
 	cout << "���������� ���� = " << a * 1024 << endl << "���������� �������� = " << a * 1024 * 1024 << endl;
 	
 	return 0;
 }
 
 
 
 
 // ������ 4
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a;
 	
 	cout << "������� ����� ������� ������� ASCII" << endl;
 	cin >> a;
 	
 	if (a >= 65 && a <= 90){
 		cout << "������ ��� ���������� ��������� �����" << endl;
	 }
	 
	else if (a >= 97 && a <= 122){
		cout << "������ ��� ���������� �������� �����" << endl;
	}
	
	else {
		cout << "������ �����-�� ��� =)" << endl;
	}
	
	return 0;
 }
 
 

 
 
 
 // ������ 5
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a,b;
 	
 
 	cout << "������� 2 ������ �����" << endl;
 	cin >> a;
 	cin >> b;
 	
	 
	int c = a / b;
 	int d = a % b; 	

 	if (d == 0){
 		cout << "����� " << a << " ������� �� ����� " << b;
 		cout << " ��� �������" << endl;
 		cout << "������� �� ������� = " << c << endl;
	 }
	 
	else {
		cout << "����� " << a << " ������� �� ����� " << b;
 		cout << " � ��������, ������� ���������� " << d << endl;
 		cout << "������� �� ������� = " << c << endl;
	}
	
	return 0;
 }
 
 
 

 
 
 // ������ 6
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a;
 	
 	cout << "������� ���" << endl;
 	cin >> a;
 	
 	if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
 		cout << "��� ����������" << endl;
	 }
	 
	else {
		cout << "��� �� ����������" << endl;
	}
	
	return 0;
 }
 
 

 
 
 // ������ 7
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	int a,b,c;
 	
 	cout << "������� ������������ ����������� ���������" << endl;
 	cin >> a >> b >> c;
 	
 	cout << "���������� ��������� ����� ���: " << a << "x^2 + " << b << "x + " << c << endl;
 	
 	cout << "�������� ������������ �� ������� D = " << b << "^2-4*" << a << "*" << c << endl;
 	float D = b * b - 4 * a * c;
 	float x1 = (-b + sqrt(D)) / (2 * a);
 	float x2 = (-b - sqrt(D)) / (2 * a);
 	
 	if (D > 0){ 		
 		cout << "��� ��� ������������ ������ 0 � ����� " << D << " , �� ��������� ����� �������" << endl;
 		cout << "x1 = " << x1 << endl;
 		cout << "x2 = " << x2 << endl;
	 }
	
	else if (D == 0){
		cout << "��� ��� ������������ ����� 0, �� ��������� ����� ������ ���� �������" << endl;
		cout << "x = " << x1 << endl;
	}
	
	else {
		cout << "��� ��� ������������ ������������� � ����� " << D << " , �� ��������� ������� �� �����" << endl;
		
	return 0;	
	}
 }
 
 
 

 
 
 // ������ 8
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float x,y;
 	
 	cout << "������� ���������� � � �" << endl;
 	cin >> x >> y;
 	
 	if (x > 0 && y > 0){
 		cout << "����� ����������� 1 ��������" << endl;
	 }
	 
	else if ( x < 0 && y > 0){
		cout << "����� ����������� 2 ��������" << endl;
	}
	else if ( x < 0 && y < 0){
		cout << "����� ����������� 3 ��������" << endl;
	}
	else if ( x > 0 && y < 0){
		cout << "����� ����������� 4 ��������" << endl;
	}
	else if (x == 0 && y > 0){
		cout << "����� ����������� 1 � 2 ���������" << endl;
	}
	else if (x == 0 && y < 0){
		cout << "����� ����������� 3 � 4 ���������" << endl;
	}
	else if (x > 0 && y ==0){
		cout << "����� ����������� 1 � 4 ���������" << endl;
	}
	else if (x < 0 && y == 0){
		cout << "����� ����������� 2 � 3 ���������" << endl;
	}
	else{
		cout << "����� �������� ������� ���������" << endl;
	}
	
	return 0;
 }
 
 

 
 
 // ������ 9
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float x,y,r;
 	
 	cout << "������� ���������� � � � ��� �����" << endl;
 	cin >> x >> y;
 	cout << "������� ������ ����������" << endl;
 	cin >> r;
 	
 	float h = sqrt(x * x + y * y);
 	
 	cout << "���������� �� ������ ��������� �� ����� = " << h << endl;
 	
 	if (h <= r){
 		cout << "����� ����������� ����������" << endl;
	 }
 	
 	else{
 		cout << "����� �� ����������� ����������" << endl;
	 }
 	return 0;
 }
 
 
 
 

 
 // ������ 10
 
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
 
 
 

 
 
 // ������ 11
 
 int main(){
 	setlocale(LC_ALL, "rus");
 	
 	float a,b,c;
 	
 	cout << "������� 3 �����" << endl;
 	cin >> a >> b >> c;
 	
 	if (a > b && a > c){
 		cout << "���������� ����� = " << a << endl;
	 }
	else if (b > a && b > c ){
		cout << "���������� ����� = " << b << endl;
	}
	else if (c > a && c > b){
		cout << "���������� ����� = " << c << endl;
	}
	 
	 return 0;
 }
 
 
 
 

 
 
 
 // ������ 12
 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float a,b,c;
 	
 	cout << "������� ������� ������������" << endl;
 	cin >> a >> b >> c;
 	
 	if (a + b <= c || a + c <= b || b + c <= a){
 		cout << "����������� �� ����������" << endl;
	 }
	 
	else if (a != b && a != c && b != c){
		cout << "����������� ��������������" << endl;
	}
	
	else if(a == b == c){
		cout << "����������� ��������������" << endl;
	}
	
	else {
		cout << "����������� ��������������" << endl;
	}
	
	return 0;
 }
 
 
 
 

 
 
 
 // ������ 13 
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float a,r;
 	
 	cout << "������� ������� �������� � ������ �����" << endl;
 	cin >> a >> r;
 	
 	float Sr = 3.14 * r * r; // ������� �����
 	if (r <= a / 2) {
 		cout << "���� ����� ���� ������ � �������" << endl;
	 }
	 
	else if ((a * sqrt(2)) / 2 <= r){
		cout << "������� ����� ���� ������ � ����" << endl;
	}
	else{
		cout << "������ �� ��������� =)" << endl;
	}
	
	return 0;
 }
 

 
 
 // ������ 14
 
 
 int main() 
 {
 	setlocale(LC_ALL, "rus");
 	
 	int x;
 	
 	cout << "������� �������" << endl;
 	cin >> x;
 	
 	if (x <= 5){
 		cout << "����������" << endl;
	 }
	 
	else if (x >5 && x <= 17){
		cout << "������" << endl;
	}
	
	else if (x > 17 && x <= 50){
		cout << "��������" << endl;
	}
	
	else if (x > 50 && x <= 120){
		cout << "���������" << endl;
	}
	else{
		cout << "Puncks not dead!" << endl;
	}
	
	return 0;
 	
 	
 }
 
 

 
 
 // ������ 15
 
 int main()
 {
 	setlocale(LC_ALL, "rus");
 	
 	float y,a;
 	
 	cout << "������� ������� � �������� ����" << endl;
 	cin >> a >> y;
 	
 	if (18 <= a < 42 && y >= 20){
 		cout << "�� ��� ���������!" << endl;
	 }
	 
	else {
		cout << "��, �� ��������" << endl;
	}
	
	return 0;
 }
 
 
 */
