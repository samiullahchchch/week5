#include <iostream>
#include <cmath>

using namespace std;
void process(int num1,int num2, int num3);
void checking(int numa1,int numa2, int numa3);   

main()
{
  int number1,number2,number3;
  cout<<"Enter the cofficent of x^2 "<<endl;
  cin>>number1;
  cout<<"Enter the cofficent of x"<<endl;
  cin>>number2;
  cout<<"Enter the varible"<<endl;
  cin>>number3;
  process(number1,number2,number3);
  checking(number1,number2,number3);
}

void process(int num1,int num2, int num3)
{
  int result1,result2,result3,result4,result6;
  float result5,result7,result8;
  result1 = -1 * num2;
  result2 = num2 * num2;
  result3 = 4 * num1 * num3;
  result4 = result2 - result3;
  result5 = sqrt(result4);
  result6 = 2 * num1;
  result7 = result1 + result5;
  result8 = result7 / result6;
  cout<<" x = "<<result8;
  
}

void checking(int numa1,int numa2, int numa3)
{
  int result1,result2,result3,result4,result6;
  float result5,result7,result8;
  result1 = -1 * numa2;
  result2 = numa2 * numa2;
  result3 = 4 * numa1 * numa3;
  result4 = result2 - result3;
  result5 = sqrt(result4);
  result6 = 2 * numa1;
  result7 = result1 - result5;
  result8 = result7 / result6;
  cout<<" x = "<<result8;
  
}
