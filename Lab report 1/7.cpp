#include<iostream>
#include<string>
using namespace std;

class Account{
	public:
		float balance;
		float withdraw;
		
		Account(float ba, float with){
			balance= ba;
			withdraw = with;
		}
		
		void check_ammount(){
			
	   if(balance >= withdraw){
       balance = balance - withdraw;
      cout<<"Transaction Done: "<<balance<<endl;
       }
       else{
    cout<<"Insufficient balance"<<endl;
      }
   }
		void getdisplay(){
			cout<<"Final amount is "<<endl;
			check_ammount();
		}
};

int main(){
	float ba,wit;
	
	cout<<"Enter the balance ";
	cin>>ba;
	cout<<"Enter the withdraw ";
	cin>>wit;
	Account acc(ba,wit);
	acc.getdisplay();
	
}
