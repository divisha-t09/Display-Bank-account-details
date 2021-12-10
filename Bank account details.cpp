#include<iostream>
using namespace std;

class account{

protected:
      char name[25];
      int accno;
      char type;
      int bal;
public:
     
      void input(){
        cout<<"Enter customer name(without space): ";cin>>name;
        cout<<"Enter account number: ";cin>>accno;
        fflush(stdin);
        cout<<"Enter type of account(Savings/Current Account): "; cin>>type;
        fflush(stdin);
        cout<<"Enter bal: ";cin>>bal;
      }
      void display(){
            cout<<"\n Customer Name- "<<name;
            cout<<"\n Account Number- "<<accno;
            cout<<"\n Type of Account- "<<type;
            cout<<"\n Balance- "<<bal;
      }
      void deposit(){
            int amt;
            cout<<"\n Enter the amount to deposit";
            cin>>amt;
            bal=bal+amt;
      }
};

int main()
{
	account C1;
	C1.input();
	C1.display();
	
	return(0);
}
