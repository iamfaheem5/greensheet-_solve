// problem- 



#include <iostream>



using namespace std;

int main(){
 
  
int days;
cin>>days;

int year = days/365;
int extramonts = (days%365)/30;
int extradays = (days%365)%30;
cout<<year<<" ano(s)"<<endl<<extramonts<<" mes(es)"<<endl<<extradays<<" dia(s)"<<endl;



}
