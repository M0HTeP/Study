#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;




/*


// ������ 1

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
cout << "����� ������ ������������� ����� = " << x <<endl;
return 0;
}






// ������ 2

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y,a = 0;
	
	
	srand(time(NULL));
	
	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "������� �������� � �������" << endl;
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
	
	cout << "������������ ������� � ������ �������� = " << b << endl;
	
	return 0;
	
}




// ������ 3

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y,b = 0;
	
	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "������� �������� � �������" << endl;
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
	
	
	int c = b / a; // ������� ��������������
	
	cout << endl << endl;
	cout << "��������, ������ �������� ��������������� " << "(" << c << ")" << endl;
	for(int i = 0; i < a; i++)
	{
		if(Arr[i] < c)
		{
			cout << Arr[i] << " | ";
		}
	}
	
	return 0;
}







// ������ 4

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y = 0;
	
	
	cout << "������� ���������� ��������� � �������" << endl;
	cin >> a;
	int Arr[a] = {};
	
	cout << "������� �������� � �������" << endl;
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
	cout << "��� ���������� ����� " << v << " � " << w << endl;
	
	return 0;
}






// ������ 5

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int q,w,z,t;
	int i = 0;
	srand(time(NULL));
	
	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	int *Arr = new int[a];
	
	cout << "������� �������� � �������" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	cout << "������� ��������" << endl;
	cin >> q >> w;
	z = 0;
	t = 0;
	
	for(i = 0; i < a; i++) // �������� �������
	{
		Arr[i] = lowerlim + rand() % (upperlim - lowerlim + 1);
		cout << Arr[i] << " | ";
	}
	cout << endl << endl;
	
	for(i = 0; i < a; i++) // ������ �������
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




// ������ 6

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int i,z,t;
	
	srand(time(0));
	
		
	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	float *Arr = new float[a];
	
	cout << "������� �������� � �������" << endl;
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
	cout << "����� ������� ������� ����������� ����� ������� �������������� �������� ���������� " << t << endl;
	
	
	return 0;
}




// ������ 7

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int i,z,t;
	
	srand(time(0));
	
		
	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	float *Arr = new float[a];
	
	cout << "������� �������� � �������" << endl;
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
	cout << "����� ������������ �������� ������� �� ������ ����� " << t << endl;
	
	return 0;
}




// ������ 8 

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a,x,y;
	int i,z,t;
	
	srand(time(0));
	
		
	cout << "������� ���������� ����� � �������" << endl;
	cin >> a;
	int *Arr = new int[a];
	
	cout << "������� �������� � �������" << endl;
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
	
	cout << "����� ���� ���� �������������� ������� = " << z << endl;
	
	return 0;
}






// ������ 9

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y;
	int i,z,t,c,d;
	
	srand(time(0));
	
	int a,b;
		
	cout << "������� ���������� ����� � �������� � �������" << endl;
	cin >> a >> b;
	
	const int Row = a;
	const int Col = b;
	
	
	
	cout << "������� �������� � �������" << endl;
	cin >> x >> y;
	const int upperlim = x;
	const int lowerlim = y;
	
	
	int Matrix[Row][Col] = {};
	
	for (c = 0; c < Row; c++)
	{
		for(d = 0; d < Col; d++)
		{
			Matrix[c][d] = rand() % (x - y + 1);
			if(Matrix[c][d] < 10) // ������� ���������� ��-�� ������������ ������������ �����. �������� �� 3� ������� �����
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
			if(Matrix[c][d] < 10) // ������� ���������� ��-�� ������������ ������������ �����. �������� �� 3� ������� �����
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

// ������ 10

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x,y;
	int i,z,t,c,d;
	
	srand(time(0));
	
	int a,b;
		
	cout << "������� ���������� ����� � �������� � �������" << endl;
	cin >> a >> b;
	
	const int Row = a;
	const int Col = b;
	
	
	
	cout << "������� �������� � �������" << endl;
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
			if(Matrix[c][d] < 10) // ������� ���������� ��-�� ������������ ������������ �����. �������� �� 3� ������� �����
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
	cout << "� ������ ��� ������� " << i << " ��������� ���������� �����, ������ " << t << endl;
	
	return 0;
}
