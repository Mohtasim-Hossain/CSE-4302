#include <bits\stdc++.h>
#include <iostream>

using namespace std;

class RationalNumber
{
   private:
   	  int p;
   	  int q;

   public:
      void assign(int numerator,int denominator)
      {
      	if(denominator == 0)
      	{
      	  cout << "The fraction is undefined!\n";
      	  return;
      	}
      	p = numerator;
      	q = denominator;
      }

      double convert()
      {
      	double val = (double)p/q;
      	return val;
      }

      void invert()
      {
        if(p == 0)
        {
        	 cout << "The fraction is undefined!\n";
        	 return;
        }
        swap(p,q);
      }

      void print()
      {  
      	if(p == 0) cout << "The Rational Number is " << 0 << endl;
      	else cout << "The Rational Number is " << p << "/" << q << endl;
      }

};


int main()
{
	RationalNumber r1;

	r1.assign(5,0);
	r1.assign(3,2);

	r1.print();
   cout << r1.convert() << endl;

   r1.invert();
   cout << r1.convert() << endl;

   r1.print();

   r1.invert();
   cout << r1.convert() << endl;


   r1.assign(0,6);
   r1.print();

   r1.invert();
   r1.print();



}