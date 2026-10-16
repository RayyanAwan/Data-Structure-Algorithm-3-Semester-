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
    Student st("Rayyan",15,98);
    st.setdisplay();

    return 0;
}

