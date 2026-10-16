#include<iostream>
#include<string>
using namespace std;

class Account{
	public:
		float balance;
		float withdraw;
		float deposite;
		
		Account(float ba, float with,float dep){
			balance= ba;
			withdraw = with;
			deposite = dep;
			
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
			balance =balance + deposite;
			cout<<"Final amount is "<<endl;
			check_ammount();
		}
};

int main(){
	float ba,wit,depo;
	
	cout<<"Enter the balance ";
	cin>>ba;
	cout<<"Enter the withdraw ";
	cin>>wit;
	cout<<"Enter the deposite ";
	cin>>depo;
	Account acc(ba,wit,depo);
	acc.getdisplay();
	
}
