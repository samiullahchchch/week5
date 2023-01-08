#include <iostream>
#include <cmath>

using namespace std;
void checking(int number1,int number2);


main()
{
  int num1,num2;
  cout<<"enter the number "<<endl;
  cin>>num1;
  cout<<"enter the number "<<endl;
  cin>>num2;
  checking(num1,num2); 

}


void checking(int number1,int number2)
{
   int result = min(number1,number2);
  cout<<"The minimum number is:::"<<result<<endl;
   
}
