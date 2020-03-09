#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

class Polynomial {
    int* data;
    int data_size;

    public:

    // constructor 1
    Polynomial(int A[], int size) {
        
        data = new int[size];

        for (int index; index < data_size; index++) {
           //populate data array with coefficient values
            data[index] = A[index];
        }

    }

    // constructor 2
    Polynomial() {
        // degree of polynomial, between 0 and 1000
         data_size = rand() % 1001;
         data = new int[data_size]; // creates array of this size
        // coefficients, from -1000 to 1000, fill in array
        for (int i=0; i < data_size ; i++) {
            data[i] = rand() % 2001 + (-1000); // between -1000 and 1000
        }
    }

    //constructor 3
    Polynomial(std::string fileName) {
    ifstream inFile;
    inFile.open("textFile.txt");
    
    if (!inFile.eof()) {
        cout << "Unable to open file." << endl;
        exit(1);   // call system to stop
    }
    
    while (inFile >> x) {
    sum = sum + x;
    }
    inFile.close();
    }

    //declare print fn
    void print();

    ~Polynomial() {
        delete [] data;
    }

};