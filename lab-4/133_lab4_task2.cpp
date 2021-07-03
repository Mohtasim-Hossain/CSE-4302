#include <bits\stdc++.h>
#include <iostream>

using namespace std;

class BankAccount
{
   private:
   	  string number, name, type;
      double cur_bal, min_bal;

   public:
   	  BankAccount():cur_bal(0)
   	  {}

   	  BankAccount(string an, string nm, string tp, double bal, double min):number(an), name(nm), type(tp), cur_bal(bal), min_bal(min) 
   	  {}
      void setValue(string an, string nm, string tp, double bal, double min)
      {
      	number = an;
        name = nm;
        type = tp;
        cur_bal = bal;
        min_bal = min;
      }
      void display()
      {
           cout << "The account number: " << number << endl;
           cout << "The account holder name: " << name << endl;
           cout << "The account type: " << type << endl;
           cout << "The current balance: " << cur_bal << endl;
           cout << "The minimum balance : " << min_bal << endl;

      }
      showBalance()
      {
        cout << "Current balance is: " << cur_bal << endl;
      }
      deposit(double amount)
      {
        cur_bal += amount;
      }
      withdrawal(double amount)
      {
        cur_bal -= amount;
        if(cur_bal < min_bal)
        {
          cout << "Invalid withdrawal amount!\n";
          cur_bal += amount;
        }
      }
      giveInterst()
      {
        double a = cur_bal*.025;
        double b = a*.9;
        cur_bal += b;
      }
      
      ~BankAccount()
      {
        cout << "Account of " << name <<" with account no " << number << 
        "is destroyed with a balance BDT " << cur_bal << endl;
      }


};


int main()
{

}