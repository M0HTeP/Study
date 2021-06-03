#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;


/*


// ������� 1


struct AEROFLOT{
	char destination;
	int flight;
	char plane;
};




// ������� 2                 ����� � ����� ���������� ������ �� ��������� ���������, ����� ���������

struct AEROFLOT{
	char dest[15]; // ����� ����������
	int flight; // ����� �����
	char plane[15]; // ��� ��������
};



int main(){
	
	int i,t,q; // ��������
	char z; // ��������� ����������
	setlocale(LC_ALL, "rus");
	
	static int j; // ���������� ������
	
	cout << "������� ���������� ������" << endl;
	cin >> j;
	
	cout << "������� ������ ������" << endl;
	
	AEROFLOT a[j];
	
	
	
	// ���������� ��
	for(i = 0; i < j; i++){
		cout << "������� ����� ����������" << endl;
		cin >> a[i].dest;
		cout << "������� ����� �����" << endl;
		cin >> a[i].flight;
		cout << "������� ��� ��������" << endl;
		cin >> a[i].plane;
	}
	
	// ���������� ���������� � ���������� ������� �� ���� "����� ����������"
	
	for(i = 0; i < j; i++){
		for(t = i + 1; t < j; t++){
			if(strcmp(a[i].dest, a[t].dest) > 0){ // ��������� 2� ��������
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
	while(strcmp(list, "����")){
		cout << "������� �������� ��� ��������: " << endl;
		cin >> list;
		q = 0;
		for(i = 0; i < j; i++){
			if(strcmp(a[i].plane, list) == 0){ // �������� �� ���������� �������� 2� ��������
				cout << endl << a[i].dest << "    " << a[i].flight << endl;
				q++;
			}
		}
		if(q == 0)	cout << endl << "����� ����� �����������";
	}
	
	return 0;
}







// ������� 3

struct MARSH{
	char start[15];
	char end[15];
	int num;
};



*/



// ������� 4



struct MARSH{
	char start[15];
	char end[15];
	int num;
};



int main(){
	
	setlocale(LC_ALL, "rus");
	
	int i,t,q,z; // ��������
	
	setlocale(LC_ALL, "rus");
	
	static int j; // ���������� ���������
	
	cout << "������� ���������� ���������" << endl;
	cin >> j;
	
	cout << "������� ������ �� ��������" << endl;
	
	MARSH a[j];
	
	
	
	// ���������� ��
	for(i = 0; i < j; i++){
		cout << "������� ����� ��������" << endl;
		cin >> a[i].num;
		cout << "������� ����� �����������" << endl;
		cin >> a[i].start;
		cout << "������� ����� ��������" << endl;
		cin >> a[i].end;

	}
	
	// ���������� ���������� � ������� ����������� �� ���� "����� ��������"
	
	
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
    	cout << endl << "������� ����� ��������: ";
		cin >> list;
		
	i = 0;
	
    while ((a[i].num != list) && (i < j))	i++;
    cout << i << endl;
      	if (i == j){
      		cout << endl << "��������� � ������� " << list << " �� ������� " << endl;
      	}
		else{   
    		cout << endl << "����� ����������� " << a[i].start << "   ";
    		cout << "����� �������� " << a[i].end << "  ����� " << a[i].num << endl;
    	}
      	cout << endl << "��� ����������� ������� 1" << endl;
	  	cin >> q;
      	if (q == 0)  break;
    }
	
	
	
	return 0;
	
}
