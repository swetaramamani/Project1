/*
Lab Assignment 1

Anusha Dey - 20769485
Sweta Ramamani - 20798147

*/

#include "lab1_polynomial.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;

//are these 3 needed
// Polynomial::Polynomial(int A[], int size)) {
//     //implicit setters here
// }

// Polynomial::Polynomial() {
//     // should this be empty ?
// }

// Polynomial::Polynomial(string fileName) {

// }

// not sure if the Polynomial::print is needed
void Polynomial::print(data) {
    for (int i = 0; i < (data.size -1); i++) {
        cout << data[i] << "x^" << [i] << " + ";
    }
    //print last polynomial (no " + " at end)
    cout << data[data.size] << "x^" << [data.size];
}

// bool operator==(const Polynomial& target); // performs *this == target
// void print(); // prints the polynomial (e.g., 2x^3 + 1x^0)
// Polynomial operator+(const Polynomial& target); // performs*this +target
// Polynomial operator-(const Polynomial& target); // performs*this -target
// Polynomial operator*(const Polynomial& target); // performs*this *target
// Polynomial derivative(); // computes derivative of *this

int main()
{
    srand(time(0));
}
