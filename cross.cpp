#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class bank{
   char name[50],add[100],y;
   int bal=0;
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display();
};
void bank :: open_account(){
	cout<<"Enter your full name  ::  ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\n Enter your address ::  ";
	cin.getline(add,100);
	cout<<"\n What type of account you want to open? Saving(S)/ Current(C)";
	cin>>y;
	cout<<"\n Enter amount for deposit  ::  ";
	cin>>bal;
	cout<<"\n Your account has been created";
}
void bank :: deposit_money(){
	int a;
	cout<<"\n How much money you want to deposit";
	cin>>a;
	bal+=a;
	cout<<"\n Your total amount is  ::  "<<bal;
}
void bank :: display(){
	cout<<"\n Your Full name  ::  "<<name;
	cout<<"\n Your address ::  "<<add;
	cout<<"\n Type of account ::  "<<y;
	cout<<"\n Amount deposited ::  "<<bal;
}
void bank :: withdraw_money(){
	float amount;
	cout<<"\n Withdraw  ::  ";
	cout<<"\n Enter amount to withdraw  ::  ";
	cin>>amount;
	bal-=amount;
	cout<<"\n Current Amount left  ::  "<<bal;
}


int main(){
	
	int ch;
	char x;
	bank obj;
	do{
	
    	cout<<"1) Open Account \n";
    	cout<<"2) Deposit Money \n";
    	cout<<"3) Withdraw Money \n";
    	cout<<"4) Display Account \n";
    	cout<<"5) Exit";
    	cout<<"\nSelect options from above\n";
    	cin>>ch;
    	switch(ch){
	    	case 1:
	    	 cout<<"1) Open Account\n";
	    	 obj.open_account();
	     	 break;
		
	    	case 2:
		     cout<<"2) Deposit Money\n";
	    	 obj.deposit_money();
		     break;
		
		case 3:
		 cout<<"3) Withdraw Money\n";
		 obj.withdraw_money();
		 break;
		
		case 4:
			cout<<"4)Display Account \n";
			obj.display();
			break;
		
		case 5:
			if(ch==5)
			exit(1);
		
		default:
			cout<<"\n Wrong entry, Try Again";
    } 

		    cout<<"\n Wanna enter again :: y/n\n";
		    x=getch();
		    if(x=='n'|| x=='N')
		    exit(0);
		    
	} while(x=='y'||x=='Y');
	getch();
	return 0;
}
