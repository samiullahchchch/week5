#include <iostream>
using namespace std;
void checking(float num1, float num2, float num3); 
void checking1(float num1, float num2, float num3);
void checking2(float num1, float num2, float num3);

  main()
{
 float number1,number2,number3;
 string name;
 cout<<"The unit in which you want to see answer(centimetre,milimeter,kilometer)"<<endl;
 cin>>name;
 cout<<"Enter the length::::"<<endl;
 cin>>number1;
 cout<<"Enter the width::::"<<endl;
 cin>>number2;
 cout<<"Enter the height::::"<<endl;
 cin>>number3;
 
  if (name == "centimeter")
{
  checking(number1,number2,number3);
 
}

  if (name == "kilometer")
{
  checking1(number1,number2,number3);
 
}

  if (name == "milimeter")
{
  checking2(number1,number2,number3);
 
}


}

 void checking(float num1, float num2, float num3)
{
 float result1,result2; 
 result1 = (num1*num2*num3)/3;
 result2 = result1 * 1000000;
 cout<< "volume of pyramid is:::"<<result2<<" cube  centimeter  "<<endl;
}
 
 void checking1(float num1, float num2, float num3)
{
 float result1,result2;
 result1 = (num1*num2*num3)/3;
 result2 = result1 / 1000000;
 cout<< "volume of pyramid is:::"<<result2<<"cube kilometer  "<<endl;
}



 void checking2(float num1, float num2, float num3)
{
 float result1,result2;
 result1 = (num1*num2*num3)/3;
 result2 = result1 * 1000000000;
 cout<< "volume of pyramid is:::"<<result2<<" cube milimeter  "<<endl;
}



