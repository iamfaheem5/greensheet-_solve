// problem- 



#include <iostream>



using namespace std;

int main(){
 
  
int n; 
cin>>n;

string months[] = { "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };

if(n>=1&&n<=12){
    cout<<months[n-1]<<endl;
}


}
