#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
double far,cel,agua;
std::cout << "Escribe la temperatura en Farenheit" << '\n';
std::cin >> far;
cel= '5'*(far − '32')/'9';
std::cout << "La temperatura en celcius es " <<cel<<"°"<< '\n';
if (cel>=100) {
std::cout << "El agua evapora a esta temperatura" << '\n';
} else {
std::cout << "El agua no evopara a esta temperatura" << '\n';
}
}
