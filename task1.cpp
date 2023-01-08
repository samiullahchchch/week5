#include <iostream>
using namespace std;
void add(int number1,int number);

int main()
{
   int num1,num2;
  cout<<"enter the number"<<endl;
  cin>>num1;

 cout<<"enter the number"<<endl;
 cin>>num2;
 add(num1,num2);
}

void add(int number1 , int number2)
{
  int sum = number1 + number2;
  cout<<"the answer is: "<<sum<<endl;


}
