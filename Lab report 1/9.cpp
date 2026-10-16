#include<iostream>
#include<string>
using namespace std;

class Book{
public:
    string name;
    string author;
    int price;
    
    Book(string na,string at, int pc){
    	name =na;
    	author=at;
    	price=pc;
	}


    void setdisplay() {
    	cout<<"The Book Details "<<endl;
        cout<<"The Book name is "<<name<<endl;
        cout<<"The Book author name  is "<<author<<endl;
        cout<<"The Book price  is "<<price<<endl;
    }

};

int main() {
	Book bk("Focus","Chaly_Bao",400);
    bk.setdisplay();

    return 0;
}

