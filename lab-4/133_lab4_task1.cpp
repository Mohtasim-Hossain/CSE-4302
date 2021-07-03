#include <bits\stdc++.h>
#include <iostream>

using namespace std;

class Calculator
{
   private:
   	  int field;

   public:
   	Calculator():field(0)
   	{}

   	Calculator(int val):field(val)
   	{}
      int getValue()
      {
        return field;
      }
      void setValue()
      {
      	int x;
      	cin >> x;
      	field = x;
      }
      void add( int Value )
      {
      	field += Value;
      	display();
      }
      void subtract( int Value )
      {
      	field -= Value;
      	display();
      }
      void multiply( int Value )
      {
      	field *= Value;
      	display();
      }
      void divideBy( int Value )
      {
      	if(Value == 0) cout << "Error : divide by 0 is undefined.\n";
      	else field /= Value;
      	display();
      }
      void clear()
      {
        field = 0;
        display();
      }
      void display()
      {
      	cout << "Calculator display: " << field << endl;
      }
      ~Calculator()
      {
        cout << "Calculator object is destroyed.\n";
      }


};


int main()
{

  Calculator c(500);
  c.add(100);
  c.subtract(50);

}