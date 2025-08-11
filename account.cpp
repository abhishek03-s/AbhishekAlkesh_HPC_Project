#include<iostream>
using namespace std;

class Account{
public:
    int accNo;
    string accName;
    float balance;
    


    void getAccountDetails(){

        accNo= 219200;
        accName = "Alkesh Jivtode";
        balance = 10000;

    }


void deposit(float amount){

    if(amount >0){
         amount += balance;
           cout << "Deposited: " << amount << endl;

    }else{
               cout << "Invalid deposit amount." << endl;
    }

}


void withdraw(float amount){
  if(amount > balance){

    cout<<"insufficient balance"<<endl;

  }else{
    balance -= amount;
    cout << "Withdraw: " << amount << endl;
  }
   }



   void displayAcct(){
    
     cout << "Account Number: " << accNo << endl;
        cout << "Account Name: " << accName << endl;
        cout << "Balance: " << balance << endl;
    }


float getbalance(){

    return balance;
}

};


int main(){

Account a;

 a.getAccountDetails();
    a.displayAcct();

    a.deposit(3000);
    a.displayAcct();

    a.withdraw(5000);
    a.displayAcct();

    a.withdraw(20000); 


return 0;


}