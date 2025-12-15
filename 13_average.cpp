// problem- https://judge.beecrowd.com/en/problems/view/1014
//


#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    float x, y;
    cin>>x>>y;
    x=x*3.5;
    y=y*7.5;
    cout<<fixed;
    cout<<setprecision(5);
    float z=(x+y);
    float average = z/11;
    cout<<"MEDIA = "<<average<<endl;

    return 0 ;
}
