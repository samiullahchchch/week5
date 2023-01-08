#include <iostream>
using namespace std;


main() 
{
  int volume,flowrate1,flowrate2;
  float result1,result2,result3,result4,result5,result6,result7;
  float hour ;
  cout<<"Enter the volume of the pool "<<endl;
  cin>>volume;
  cout<<"Enter the flowrate of pipe one "<<endl;
  cin>>flowrate1;
  cout<<"Enter the flowrate of pipe one "<<endl;
  cin>>flowrate2;
  cout<<"Enter the hour in which worker is absent "<<endl;
  cin>>hour;
 
  result1 = flowrate1 * hour ; 
  result2 = flowrate2 * hour ;
  result3 = result1 + result2;

  if(result3 < volume)
{
  result4 = ( result3 / volume) * 100;
  cout<<"The pool is :"<<result4<<"% full"<<endl;
  result5 = (result1 / result3) * 100;
  cout<<"The Pipe one is :"<<result5<<"% "<<endl;
  result6 = (result2 / result3) * 100;
  cout<<"The Pipe two is :"<<result6<<"% "<<endl;
}  
  
 if (result3 > volume)
{
  result7 =  result3 - volume;
  cout<<"THE POOL OVERFLOW WITH"<<"  "<<result7<<"  "<<"LITERS"<<endl;  
}



}