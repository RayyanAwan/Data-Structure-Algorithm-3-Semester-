#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int rollnum;
    int marks;


    void setdisplay() {
        cout<<"Student name is "<<name<<endl;
        cout<<"Student rollnum is "<<rollnum<<endl;
        cout<<"Student marks is "<<marks<<endl;
    }

};

int main() {
    Student st1,st2,st3;
    st1.name ="Ahmad";
    st1.rollnum=30;
    st1.marks=93;
    st1.setdisplay();

cout<<endl;
   st2.name ="Sarmed";
    st2.rollnum=17;
    st2.marks=85;
    st2.setdisplay();
cout<<endl;
   st3.name ="Awais";
    st3.rollnum=129;
    st3.marks=90;
    st3.setdisplay();


    return 0;
}

