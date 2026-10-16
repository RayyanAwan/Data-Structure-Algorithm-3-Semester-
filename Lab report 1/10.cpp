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
	Book bk1("Focus","Chaly_Bao",400);
	Book bk2("Soulmate","Awan",550);
	Book bk3("Paradom","Ahmad",350);
    bk1.setdisplay();
    cout<<endl;
    bk2.setdisplay();
     cout<<endl;
    bk3.setdisplay();

    return 0;
}

