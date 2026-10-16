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
			check_ammount();
		}
};

int main(){
	Account acc(4000,3000);
	acc.getdisplay();
	
}
