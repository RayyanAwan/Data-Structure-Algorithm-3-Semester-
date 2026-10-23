#include<iostream>
using namespace std;

int main(){
	int var1 = 11;
	int var2 = 22;
	int *p;
	cout<<"Values of var1 "<<&var1<<endl;
	cout<<"Values of var2 "<<&var2<<endl;
	p = &var1;
	cout<<"Address of var1 "<<*p<<endl;
	p = &var2;
	cout<<"Address of var2 "<<*p<<endl;
}





// directly access the values
