# include <iostream>
# include <math.h>
using namespace std;

/*int main()
{
	setlocale(LC_ALL, "Russian");
	// ���������� ��������
	int chocolate = 2; 
	int milk = 3;
	int coffee = 1;
	// ������ ���� �� ���� ��������
	float priceOfChocolate = 11.04;
	float priceOfMilk = 9.59;
	float priceOfCoffee = 70.77;
	// ����� �����
	float sum = 0;
	
	//������� ���������
	sum = (chocolate * priceOfChocolate) + (milk * priceOfMilk) + (coffee * priceOfCoffee);
	
	cout << "����� ��������� ������� = "; // ����� �������� � ����� ���������
	
	cout << chocolate * priceOfChocolate << '+' << milk * priceOfMilk << '+' << coffee * priceOfCoffee;
	cout << "=" << sum << "������" << endl << endl;
	
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



// ������ ��� ���������������� �������

// ������ 1
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
	
	cout << "������ ����� = " << first << " ������ ����� = " << second << " ������ ����� = " << third << " ��������� ����� = " << fourth << endl;
	
	return 0;
}




// ������ 2

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




// ������ 3

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
	
	cout << "������ ����� = " << first << " ������ ����� = " << second << " ������������ ����� = " << proizv << " ����� ����� = " << sum << " �������� ����� = " << diff << endl;
	
	return  0;
}




// ������ 4 (������� �������)

int main ()
{
	
	setlocale(LC_ALL, "Russian");
	float bunny;
	float hole;
	
	cout << "������� ���������� ������ ";
	cin >> bunny;
	cout << "������� ���������� ������ ";
	cin >> hole;
	
	int a = round(bunny / hole);
	int b = round(hole / bunny);

	
	
	cout << "���������� ������ = " << bunny << " ���������� ������ = " << hole << endl;
	cout << "������������ ���������� ������ � ����� ������ = " << a << endl;
	
	return 0;
	
}






// ������ 5 

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int first;
	int last;
		
	cout << "������� ������ ����� ";
	cin >> first;
	cout << "������� ��������� ����� ";
	cin >> last;
	int count = first + last - 1;
	
	cout << "������ ����� = " << first << " ��������� ����� = " << last << " ����� ���� ����� ����� = " << (first + last) * count / 2 << endl;
	
	return 0;
}



// ������ 6

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	
	cout << "������� �������� ������� �������� ";
	cin >> a;
	
	int perim = a * 4;
	int space = a * a;
	
	cout << "��� ������� �� �������� = " << a << " �������� = " << perim << " ������� = " << space << endl;
	
	return 0;
}





// ������ 7

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a;
	int b;
	
	cout << "������� ������ ����� ";
	cin >> a;
	cout << "������� ������ ����� ";
	cin >> b;
	
	float hipp = sqrt((a^2) + (b^2));
	
	cout << "���������� = " << hipp << endl;
	return 0;
}





// ������ 8

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n;
	int k;
	
	cout << "������� ���������� ���������� ";
	cin >> n;
	cout << " ������� ���������� ����� ";
	cin >> k;
	
	int ostatok = k % n;
	int communism = (k - ostatok) / n;
	
	cout << "������� ��������� ���������� " << communism << " �����(�)" << endl;
	return 0;
}




// ������ 9

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int x;
	
	cout << "������� �������� � ";
	cin >> x;
	
	int fx = x^2 + 3 * x - 100;
	
	cout << "�������� �������� ������� = " << fx << endl;
	return 0;
}





// ������ 10 

int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	cout << "������� ����� ����-01-20" << endl;
	return 0;
	
}






// ������ 11

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
	
	
	cout << "������� a ";
	cin >> a;
	cout << "������� b ";
	cin >> b;
	cout << "������� c ";
	cin >> c;
	
	
	int fx = a*(x^2) + b * x + c;
	
	D = pow(b,2) - 4 * a * c;
	
	x1 = (-b + sqrt(D)) / 2 * a;
	x2 = (-b - sqrt(D)) / 2 * a;
	
	cout << "x1 = " << x1 << " x2 = " << x2 << endl;
	cout << D << sqrt(D);
	return 0;
	
}





// ������ 12

int main()
{
	setlocale(LC_ALL, "Russian");
	
	float a;
	float b;
	
	
	cout << "������� �������� ������ ������� ";
	cin >> a;
	cout << "������� �������� ������ ������� ";
	cin >> b;
	
	float pa = a * log2 (a);
	float pb = b * log2 (b);
	
	cout << "�������� �� ������� = " << pa + pb << endl;
	
	return 0;
}


*/


// ������ 13


int main()
{
	setlocale(LC_ALL, "Russian");
	
}
