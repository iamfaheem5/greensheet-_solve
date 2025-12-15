#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a ,b ;
    int a1 ,b1 ;
    float c;
    float c1;

    cin>>a>>b>>c;
    cin>>a1>>b1>>c1;

    cout<<fixed;
    cout<<setprecision(2);
    float vlp=(b*c)+(b1*c1);
    cout<<"VALOR A PAGAR: R$ "<<vlp;

}
