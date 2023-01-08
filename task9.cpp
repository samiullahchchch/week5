#include<iostream>
using namespace std;
void check(int num1,int num2);


  main()
{
  int hour, min; 
  cout<<"Enter the hour "<<endl;
  cin>>hour;
  cout<<"Enter the min "<<endl;
  cin>>min;
  check(hour,min);

}


  void check(int num1,int num2)
{
  int result1,result2,result3,result4 ;
  result1 = num1 * 60;
  result2 = result1 + 15 + num2;
  result3 = result2 % 60 ;
  result4 = result2 / 60 ;
  cout<<""<<result4;
  cout<<":";
  cout<<""<<result3;
}