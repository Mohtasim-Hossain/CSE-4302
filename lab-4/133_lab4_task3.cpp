#include <bits\stdc++.h>
#include <iostream>

using namespace std;

class ZooAnimal
{
   private:
   	  string name;
      int b_year,cage_no, height;
      float weight;

   public:
   	  ZooAnimal():name("Tiger"), b_year(2021), cage_no(1), height(2.5), weight(205.85)
   	  {}

      void setter(string nm)
      {
      	name = nm;
      }
      string getter_name()
      {
        return name;
      }

      void setter_cage_no(int cage)
      {
        cage_no = cage;
      }
      int getter_cage_no()
      {
        return cage_no;
      }

      void setter(float wet)
      {
        weight = wet;
      }
      float getter_weight()
      {
        return weight;
      }

      void setter_height(int h)
      {  
        height = h;
      }
      int getter_height()
      {
        return height;
      }

      void setter_birth_year(int year = 2021)
      {
         if(year <= 2021) b_year = year;
         else
         {
           cout << "Invalid year of birth\n";
           b_year = 2021;
         }
      }
      int getter_birth_year()
      {
        return b_year;
      }
     
     int getage()
     {
       return 2021 - b_year ;
     }
     void getInformation()
     {
           cout << "\nThe animal name is : " << name << endl;
           cout << "The birth year is : " << b_year<< endl;
           cout << "the location is in cage no : " << cage_no << endl;
           cout << "The height is : " << height << endl;
           cout << "The weight is : " << weight << endl;

     }
      
      
      ~ZooAnimal()
      {
        cout << "the object is destoyed\n";
      }

};




int main()
{

}