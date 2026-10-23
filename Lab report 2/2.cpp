#include<iostream>
using namespace std;

struct Distance{
	int feet;
	float inch;

};

int main(){
	 Distance d;
	 Distance *ptr = &d;
	cout<<"Enter Feet : ";
	cin>>ptr->feet;
	cout<<"Enter inch: ";
	cin>>ptr->inch;
	cout<<"Display information "<<endl;
	cout<<"Distance = "<<ptr->feet<<" feet "<<ptr->inch<<" inches "; 
}



