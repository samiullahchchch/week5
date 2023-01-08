#include<iostream>
using namespace std;
void process(int num1);

  int main()       
{ 
  int number1;
  cout<<"Enter the number"<<endl; 
  cin>>number1;
  process(number1);
}


  void process(int num1)
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
  

  result10 = result1 + result3;
  result11 = result7 + result9;
  
  if(result10 == result11)
{
  cout<<"The number is symmtrical"<<endl;      
}

  if(result10 != result11)
{
  cout<<"The number is symmtrical"<<endl;   
}


 
}


