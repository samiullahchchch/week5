#include <iostream>
#include <cmath>

using namespace std;
void checking(int number1,int number2);
  


main() 
{   
   int angle,base;
   cout<<"Enter the angle of inclination  "<<endl;
   cin>>angle;
   cout<<"Enter the lenght of  base  "<<endl;
   cin>>base;
   
   checking(angle,base);
  
}

void checking(int number1,int number2)
{
   float result1,result2,result3;
   result1 = number1/57.2958;
   result2 = tan(result1);
   result3 = result2 * number2;
   cout<<"The height is :::::"<<result3;

}
     
 






