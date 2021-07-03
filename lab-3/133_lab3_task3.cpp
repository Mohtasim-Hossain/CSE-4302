#include <bits\stdc++.h>
#include <iostream>

using namespace std;

class RationalNumber
{
   private:
   	  char name[15];
        double discountPercent = 0.5;
        double unitPrice = 10;

   public:
      void assignName(char name1[])
      {
      	strcpy(name, name1);
      }

      void setPrice(double price)
      {
      	unitPrice = price;
      }

      void setDiscPercent(double percent)
      {
        discountPercent = percent;
      }

      double getSellingPrice(int nos)
      {  
      	double ans = unitPrice-(unitPrice*(discountPercent/100));
         return ans*nos;
      }

      void display()
      {
         cout << name << " has a unit price of BDT " << (int)unitPrice << ". Current discount " << discountPercent << "%" << endl;
         // Cocola noodle has a unit price BDT 10. Current discount 10%.
      }

};


int main()
{
	RationalNumber r1, r2;
   
   char s[] = {"coca cola"};
   r1.assignName(s);
   cout << r1.getSellingPrice(5) << endl;
   r1.display();

   r1.setPrice(100);
   r1.setDiscPercent(15);
   r1.display();
   cout << r1.getSellingPrice(5) << endl;

   char s1[] = "heineken";
   r2.assignName(s1);
   r2.setPrice(500);
   r2.setDiscPercent(15);
   r2.display();
   cout << r2.getSellingPrice(5) << endl;




}