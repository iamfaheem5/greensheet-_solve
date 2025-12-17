// problem- https://judge.beecrowd.com/en/problems/view/1805
// the formula is (x+y)*N # n is (y-x)+1






#include <iostream>



using namespace std;


int main(){

    long long x,y;
    cin>>x>>y;

    long long n = (y-x) +1;

    long long result = ((x+y)*n)/2;
    cout<<result<<endl;


 
  



}
