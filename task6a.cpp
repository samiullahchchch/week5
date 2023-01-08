#include<iostream>
using namespace std;

void  check1(int num1);
void  check2(int num2);




   int main ()
{
   int number1,number2,number3;
  cout<<"Enter the number "<<endl; 
  cin>>number1;
  number3 = number1 % 10 ;
  number2 = number1 / 10 ;

  check1(number2);  
  cout<<" ";
  check2(number3);

}


void  check1(int num1)
{
  if( num1 == 2)
{
 cout<<"tewenty";
}

  if( num1 == 3)
{
 cout<<"thirty";
}

  if( num1 == 4)
{
 cout<<"forty";
}

  if( num1 == 5)
{
 cout<<"fifty";
}

  if( num1 == 6)
{
 cout<<"sixty";
}


  if( num1 == 7)
{
 cout<<"seventy";
}

  if( num1 == 8)
{
 cout<<"Eighty";
}

  if( num1 == 9)
{
 cout<<"Ninty";
}


}

  void  check2(int num2)
{

 if( num2 == 1)
{
cout<<"one";
}

 if( num2 == 2)
{
cout<<"two";
}

if( num2 == 3)
{
cout<<"three";
}


if( num2 == 4)
{
cout<<"four";
}

if( num2 == 5)
{
cout<<"five";
}

if( num2 == 6)
{
cout<<"six";
}


if( num2 == 7)
{
cout<<"seven";
}

if( num2 == 8)
{
cout<<"eight";
}

if( num2 == 9)
{
cout<<"nine";
}




}




