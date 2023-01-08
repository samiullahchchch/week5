#include <iostream>
using namespace std;



  main()
{
  int  hour ,days, working_people, working_days, time;
  cout<<"Enter the needed houe to complete the Firm ::"<<endl;
  cin>>hour;
  cout<<"Enter the number of working peoples ::"<<endl;
  cin>>working_people;
  cout<<"Enter the days"<<endl;
  cin>>days;


  working_days = days - (days*0.1);
  time   = working_days * hour * 10;

  if(time > hour)
{
  time = time - hour ;
  cout<<"Yes"<<time<<"  hour left"<<endl;
} 

  if(time < hour)
{
  time = hour - time ;
  cout<<"Not"<<time<<"  hour enogh"<<endl;
}



}