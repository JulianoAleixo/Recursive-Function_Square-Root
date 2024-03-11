/**************************************************
 *                                                *
 *             Algoritmos Recursivos              *
 *                 Raiz Quadrada                  *
 *                                                *
 **************************************************
 *                                                *
 *  Autor: Juliano Moreira Aleixo                 *
 *  Disciplina: C03                               *
 *  Professor: Jonas Lopes de Vilas Boas          *
 *  Data: 11/03/2024                              *
 *                                                *
 **************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

float pow(float a, float n) {
    if (n == 0)
        return 1;
    else
        return a * pow(a, n - 1);
}

float absolute(float v) {
    if (v < 0)
        return -v;
    else
        return v;
}

float squareRoot(float x, float xo, float e) {
    if (absolute(pow(xo, 2) - x) <= e) {
        return xo;
    }
    else {
        return squareRoot(x, ((pow(xo, 2) + x) / (2 * xo)), e);
    }
}

int main() {
    float x, xo;
    float e;
    cout << "Enter the X value: ";
    cin >> x;
    cout << "Enter the Xo value: ";
    cin >> xo;
    cout << "Enter the E value: ";
    cin >> e;

    float res = squareRoot(x, xo, e);
    cout << "The result is " << fixed << setprecision(4) <<  res << endl;

    return 0;
}

