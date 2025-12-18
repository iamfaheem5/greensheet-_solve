#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double salary;
    if (!(cin >> salary)) return 0;

    double limits[] = {400.00, 800.00, 1200.00, 2000.00, 1000000.00};
    int percents[] = {15, 12, 10, 7, 4};
    
    int rate = 0;

    for (int i = 0; i < 5; i++) {
        if (salary <= limits[i]) {
            rate = percents[i];
            
          
            double increase = salary * (rate / 100.0);
            double newSalary = salary + increase;


            cout << fixed << setprecision(2);
            cout << "Novo salario: " << newSalary << endl;
            cout << "Reajuste ganho: " << increase << endl;
            
           
            cout << "Em percentual: " << rate << " %" << endl;
            
            break; 
        }
    }

    return 0;
}