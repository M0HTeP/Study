#include <math.h>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/*


// ������ 1

int main()
{
 setlocale(LC_ALL, "rus");

int count = 0;
int age, mid_age = 0;
int mid_age_month = 0;
int total_age = 0;
int max;
int min = 1000;

cout << "������� ������� ������� ����������, ��� ��������� ������� ����� �����" << endl;
do
{
	cout << "������� ������� " << count + 1 << " ����������" << endl;
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
cout << "�� ���� ���� " << count << " �����������" << endl;
cout << "������� ������� �������� " << mid_age << " ��� " << mid_age_month << " �����(��)" << endl;
cout << "����� ������� ���������� ��������� " << max << " ���" << endl;
cout << "����� ������� ���������� ��������� " << min << " ���" << endl;


return 0;
}







// ������ 2

int main()
{
	setlocale(LC_ALL, "rus");
	
	int box_all = 0;
	int box_sum = 0;
	int box_ost = 0;
	int box = 0;
	int car = 0;
	
	cout << "������� ���������� ������" << endl;
	cin >> box_all;
	box_ost = box_all - box;
	do
	{
		cout << "������� ���������� ������ ����������� � " << car + 1 << " ��������" <<
		 "(�������� " << box_ost << " ������)" << endl;
		cin >> box;
		
		if(box > box_ost)
		{
			cout << "�������� ���������� ������, �������� �� " << box - box_ost <<
			" ������. ������� ������ ����������" << endl;
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
	
	cout << "��� " << box_sum << " ������ ����� ��������� � " << car << " ����������" << endl;
	
	return 0;
}




// ������ 3

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,z,i, a1;
	
	
	cout << "������� �������� ��������" << endl;
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
		if(a > z) // ��� ����� �������, ����� ��������� ��� �����, ������� ��������
		{
			break;
		}
	} while(a <= z);
	
	cout << "����� ���� �������� ����� �� " << a1 << " �� " << z << " ����� " << i << endl;
	
	return 0;
}







// ������ 4

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,b,h,q;
	string x,y,z;
	x, y, z = "^";
	string space, space_1;
	space, space_1 = " ";
	
	cout << "������� ������ ��������������� ������������" << endl;
	cin >> h;
	
	b = h * 2 + 1; // ����� ������ (���������)
	a = b - 2; // ���������� ��������
	
	z.resize(b + 2,'^'); // ������ ���������
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








// ������ 5


int main()
{
	setlocale(LC_ALL, "rus");
	
	int x, max, x1;
	
	cout << "������� ����������� ����� (�������� �� 2147483647 �� -2147483647)" << endl;
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
	cout << "����� ������� ����� = " << max << endl;
	return 0;
}




// ������ 6 

int main()
{
	setlocale(LC_ALL, "rus");
	
	int c,x,a;
	double p,y,z;
	y = 0;
	cout << "������� ���������� ����� ��� ����������" << endl;
	cin >> a;
	srand(time(NULL));
	
	for (c = 0; c != a; ++c)
	{
		x = rand();
		if (x % 2 == 0)
		{
			y += 1; // ������� ������ �����
		}
		if (x % 2 == 1)
		{
			z += 1; // ������� �������� ������
		}
	}
	p = y / a;
	cout << "����������� ��������� ������ ����� = " << p * 100 << "%" << endl;
	
	return 0;
}





// ������ 7 

int main()
{
	setlocale(LC_ALL, "rus");
	
	int c,n,t,x;
	t = 0;
		
	cout << "������� ���������� ����� � ���������" << endl;
	cin >> n;
	
	for (c = 0; c != n; c++)
	{
		t = t + c + 1;
	}
	x = n * (n + 1) / 2;
	
	cout << t  << " = " << x << endl;
	
	return 0;
}





// ������ 8 

int main()
{
	setlocale(LC_ALL, "rus");
	
	float x,y,a,t;
	t = 1;
	cout << "�������� ����� �� 0 �� 100 �� 10 �������" << endl;
	srand(time(0));
	x = 0 + rand() % (100 + 0 + 1);
	do
	{
		
		cout << "������� # " << t << endl;
		cout << "������� ����� " << endl;
		cin >> a;
		
		
		if(a > x && t < 10)
		{
			cout << "���������� �����, ������� ��������" << endl;
		}
		if(a < x && t < 10)
		{
			cout << "��������, �������� �����!" << endl;
		}
		if(a == x)
		{
			cout << "���������! �� ������� �����!!!" << endl;
			break;
		}
		t ++;
		if (t > 10)
		{
			cout << "� ��������� �� ���������. ���������� ����� ���� " << x << endl;
		}
	}while(t != 11);
	
	
	return 0;
}




// ������ 9

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a = 31;
	cout << "������� ASCII � 32 �� 127 �������" << endl;
	for (char i = ' '; i <= '~'; ++i)
	{
		cout << ++a << " = " << i << ((i % 10 == 9) ? '\n' : ' ');
	}
	
	return 0;
}





// ������ 10

int main()
{
	setlocale(LC_ALL, "rus");
	
	
	int x,x1,x2,y,z = 0;
	cout << "������� ����������� ����� (�������� �� 2147483647 �� -2147483647)" << endl;
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
	cout << "� ����� " << x2 <<  " ���������� ������ ���� = " << y <<" , � ���������� �������� ���� = " << z << endl;
	return 0;
}






// ������ 11 


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
cout << "������� ����� ��������� ���� ���������" << endl;
	cin >> n;
while(i < n)
{
cout << Fib(i) << endl;
i++;
}
return 0;

}





// ������ 12

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,b,c,x = 0;
	
	cout << "������� ��������� � �������� �����" << endl;
	cin >> a >> b;
	cout << "������� ���" << endl;
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




// ������ 13

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a = 0;
	
	cout << "������� �����" << endl;
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




// ������ 14

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x = 0;
	int y = 1;
	
	cout << "������� �����" << endl;
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
	cout << "����� ���� = " << x << endl;
	cout << "������������ ���� = " << y << endl;
		
	return 0;
}






// ������ 15

int main()
{
	setlocale(LC_ALL, "rus");
	
	double a,b,d,x,y = 0;
	char c,z;
	
	
	do
	{
		cout << "������� 2 �����" << endl;
		cin >> x >> y;
		cout << "������� �������� (+, -, *, /)" << endl;
		cin >> c;

	
		if(c != '+' && c != '-' && c != '*' && c != '/'  || c == 0)
		{
			cout << "������ �������� ���� ��� �������� �������� ������� �����, ��������� ����" << endl;
			cout << "������� 2 �����" << endl;
			cin >> x >> y;
			cout << "������� �������� (+, -, *, /)" << endl;
			cin >> c;
		}
			if(c == '+')
			{
				a = x + y;
				cout << "����� ����� = " << a << endl;
			}
			if(c == '-')
			{
				a = x - y;
				cout << "�������� ����� = " << a << endl;
			}
			if(c == '*')
			{
				a = x * y;
				cout << "������������ ����� = " << a << endl;
			}
			if(c == '/' && y != 0)
			{
				a = x / y;
				cout << "������� ����� = " << a << endl;
			}
			if(c == '/' && y == 0)
			{
				cout << "������� �� 0 ����������" << endl;
			}
			
		cout << "�� ������ ���������� ������ ���������?" << endl;
		cout << "���� ������ ��������� ������, ������� ��� ��� 0" << endl;
		cin >> z;
		
		if(z = *"���" && z == *"���" && z == *"���" && z == *"���" && z == *"���" && z == *"���" && z == 0)
		{
			break;
		}
		
	}while(z);
	
	return 0;
}


*/
