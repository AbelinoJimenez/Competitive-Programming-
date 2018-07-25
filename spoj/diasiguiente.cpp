#include <bits/stdc++.h>
using namespace std;

string dias[]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};

int buscar(string date){
	for(int i=0;i<7;i++)
		if(dias[i]==date)return i;
}

int main(){
  string date;
	cin>>date;
	int idx=buscar(date);
	cout<<dias[(idx+1)%7];

return 0;
}