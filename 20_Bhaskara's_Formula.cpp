#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double nirnayok = (b * b) - (4 * a * c);


    if (nirnayok < 0 || a == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double snirnayok = sqrt(nirnayok);
        double root1 = (-b + snirnayok) / (2 * a);
        double root2 = (-b - snirnayok) / (2 * a);

        // Formatting to 5 decimal places
        cout << fixed << setprecision(5);
        cout << "R1 = " << root1 << endl;
        cout << "R2 = " << root2 << endl;
    }

    return 0;
}