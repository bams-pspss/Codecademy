#include <iostream>
#include <iomanip>

#define PESOS 0.00025
#define REAIS 0.18
#define SOLES 0.26

using namespace std;

int main() {
    double pesos = 0.0;
    double reais = 0.0;
    double soles = 0.0;
    double dollar = 0.0;

    cout << "Enter number of Colombian Pesos: ";
    cin >> pesos;
    cout << "Enter number of Brazilian Reais: ";
    cin >> reais;
    cout << "Enter number od Peruvian Soles: " ;
    cin >> soles;

    dollar = (pesos * PESOS) + (reais * REAIS) + (soles * SOLES);

    //Set precision decimal to 2 decimal place    
    cout << fixed << setprecision(2);
    cout << "US Dollar = $ " << dollar << '\n';

    
    return 0;
}