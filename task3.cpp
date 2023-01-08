#include <iostream>
#include <cmath>

using namespace std;
void lsgreater(int number1,int number2);


main()
{
  int num1,num2;
  cout<<"enter the number "<<endl;
  cin>>num1;
  cout<<"enter the number "<<endl;
  cin>>num2;
  lsgreater(num1,num2); 

}


void lsgreater(int number1,int number2)
{
   int result = max(number1,number2);
  cout<<"The greater number is:::"<<result<<endl;
   
}
