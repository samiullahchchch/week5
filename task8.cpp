#include<iostream>
using namespace std;

void process1(int num1);
void process2(int num1);
void process3(int num1);
void process4(int num1);

  main()
{
  int number1;
  cout<<"Enter the number"<<endl;
  cin>>number1;
 
  if(number1 < 100)
{
  process1(number1);  
}


  if(number1 < 1000)
{

  if(number1 >100)
  {
  process2(number1);  
  }  

}


  if(number1 < 10000)
{

  if(number1 >1000)
  {
  process3(number1);  
  }  

}


  if(number1 < 100000)
{

  if(number1 >10000)
  {
  process4(number1);  
  }  

}



}

  void process1(int num1)
{
  int result1,result2,result3,result4,result5;
  result1 = num1 % 10;
  result2 = result1 / 10;
  result3 = result2 % 10;
  result4 = result1 + result3;
  result5 = result4 % 2;
  
  if (result5 == 1)
  {
  cout<<"The number is oddish"<<endl;
  } 

  if (result5 == 0)
  {
  cout<<"The number is evenish"<<endl;
  }

}

  void process2(int num1)
{
  int result1,result2,result3,result4,result5,result6,result7;
  result1 = num1 % 10;
  result2 = result1 / 10;
  result3 = result2 % 10;
  result4 = result3 / 10;
  result5 = result4 % 10;
  result6 = result1 + result3 + result5;
  result7 = result6 % 2;
 
  if (result7 == 1)
  {
  cout<<"The number is oddish"<<endl;
  } 

  if (result7 == 0)
  {
  cout<<"The number is evenish"<<endl;
  }

}

  void process3(int num1)
{
  int result1,result2,result3,result4,result5,result6,result7,result8,result9;
  result1 = num1 % 10;
  result2 = result1 / 10;
  result3 = result2 % 10;
  result4 = result3 / 10;
  result5 = result4 % 10;
  result6 = result5 / 10;
  result7 = result6 % 10;
  result8 = result1 + result3 + result5 + result7;
  result9 = result8 % 2;
  
  if (result9 == 1)
  {
  cout<<"The number is oddish"<<endl;
  } 

  if (result9 == 0)
  {
  cout<<"The number is evenish"<<endl;
  }

}

  void process4(int num1)
{
  int result1,result2,result3,result4,result5,result6,result7,result8,result9,result10,result11;
  result1 = num1 % 10;
  result2 = result1 / 10;
  result3 = result2 % 10;
  result4 = result3 / 10;
  result5 = result4 % 10;
  result6 = result5 / 10;
  result7 = result6 % 10;
  result8 = result7 / 10;
  result9 = result8 % 10;
  result10 = result1 + result3 + result5 + result7 + result9;
  result11 = result10 % 2;
  
  if (result11 == 1)
  {
  cout<<"The number is oddish"<<endl;
  } 

  if (result11 == 0)
  {
  cout<<"The number is evenish"<<endl;
  }


}
