#include<iostream>
using namespace std;

struct Distance{
	int feet;
	float inch;
	
	void print_distance(){
		cout<<"Displaying information "<<endl;
		cout<<"Distace = "<<feet<<" feet "<<inch<<" inches "<<endl;
	}

};

int main(){
	 Distance d;
	 Distance *ptr = &d;
	cout<<"Enter Feet : ";
	cin>>ptr->feet;
	cout<<"Enter inch: ";
	cin>>ptr->inch;

	ptr->print_distance();
	
	return 0;
}



