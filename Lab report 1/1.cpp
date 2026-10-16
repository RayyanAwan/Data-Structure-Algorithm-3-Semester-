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
    Student st;
    st.name ="Ahmad";
    st.rollnum=30;
    st.marks=80;
    
    st.setdisplay();

    return 0;
}

