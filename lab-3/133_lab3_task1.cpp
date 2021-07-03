#include <bits\stdc++.h>
#include <iostream>

using namespace std;

class Counter
{
   private:
   	  int count = 0;
   	  int step;

   public:
      void setIncrementStep(int step_val)
      {
      	step = step_val;
      }

      int getCount()
      {
      	return count;
      }

      void increment()
      {
        count += step;
      }

      void resetCount()
      {
      	count = 0;
      }

};


int main()
{
	Counter c1;

	cout << c1.getCount() << endl;
	c1.setIncrementStep(5);
	c1.increment();
	cout << c1.getCount() << endl;
	c1.increment();
	cout << c1.getCount() << endl;
	c1.increment();
	c1.increment();
	cout << c1.getCount() << endl;
	c1.resetCount();
	cout << c1.getCount() << endl;
}