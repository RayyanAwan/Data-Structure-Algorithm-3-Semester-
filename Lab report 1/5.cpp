#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int rollnum;
    int marks;
    
    Student(string na,int rl, int ma){
    	name =na;
    	rollnum=rl;
    	marks=ma;
	}


    void setdisplay() {
        cout<<"Student name is "<<name<<endl;
        cout<<"Student rollnum is "<<rollnum<<endl;
        cout<<"Student marks is "<<marks<<endl;
    }

};

int main() {
    Student st1("Rayyan",15,98);
    Student st2("Hassan",50,65);
    Student st3("Awan",30,23);
    
    st1.setdisplay();
    st2.setdisplay();
    st3.setdisplay();

    return 0;
}

