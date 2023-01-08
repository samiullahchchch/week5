#include <iostream>
using namespace std;
void checking(float num1);
void checking2(float num1);
void checking3(float num1);
void checking4(float num1);
void checking5(float num1);
 main()
{
  char code;
  float price;
  cout<<"Enter the price of vehicle"<<endl;
  cin>>price;
  cout<<"Enter the one  vehicle code feom these(M,E,S,V,T)"<<endl;
  cin>>code;
  
  if (code == 'M')
{
  checking(price); 

}

 if (code == 'E')
{
  checking2(price); 

}

 if (code == 'S')
{
  checking3(price); 

}

 if (code == 'V')
{
  checking4(price); 

}

 if (code == 'T')
{
  checking5(price); 

}




}

 void checking(float num1)
{
 float result1,result2;
 result1 = num1 * 6/ 100;
 result2 = result1 + num1;
 cout<<"Now the price of vehicle is ::::"<<result2<<endl;
}

void checking2(float num1)
{
 float result1,result2;
 result1 = num1 * 8/ 100;
 result2 = result1 + num1;
 cout<<"Now the price of vehicle is ::::"<<result2<<endl;
}


void checking3(float num1)
{
 float result1,result2;
 result1 = num1 * 10/ 100;
 result2 = result1 + num1;
 cout<<"Now the price of vehicle is ::::"<<result2<<endl;
}

void checking4(float num1)
{
 float result1,result2;
 result1 = num1 * 12/ 100;
 result2 = result1 + num1;
 cout<<"Now the price of vehicle is ::::"<<result2<<endl;
}

void checking5(float num1)
{
 float result1,result2;
 result1 = num1 * 15/ 100;
 result2 = result1 + num1;
 cout<<"Now the price of vehicle is ::::"<<result2<<endl;
}