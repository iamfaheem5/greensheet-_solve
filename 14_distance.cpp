// problem- 



#include <iostream>
#include<iomanip>
#include<cmath>




using namespace std;

int main(){
 
float x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;


float xdistance = (x2-x1);
float ydistance = (y2-y1);

float sdistance =(xdistance*xdistance)+(ydistance*ydistance) ;
float total_distance = sqrt(sdistance);


cout<<fixed;
cout<<setprecision(4);
cout<<total_distance<<endl;





}
