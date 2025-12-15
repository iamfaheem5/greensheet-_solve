// set precision theory - https://www.geeksforgeeks.org/cpp/iomanip-setprecision-function-in-c-with-examples/
#include <iomanip>
#include <ios>
#include <iostream>

using namespace std;


int main (){

    int number ;
    float totalworkhour, hourly_rate;

    cin>>number>>totalworkhour>>hourly_rate;

    float salary = totalworkhour * hourly_rate;

    cout<<"NUMBER = "<<number<<endl;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"SALARY = U$ "<<salary<<endl;

    return 0;

}
