#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Car {
    string brand;
    string model;
    int age;
    int mileage;
};
int main() {
    const string fileName = "car.txt";
    Car car1 = { "BMW", "M5", 2020, 5000 };
    Car car2 = { "Porsche", "Cayne", 2018, 3453 };
    Car car3 = { "Mercedes", "s350", 2019, 120000 };
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << car1.brand << ' ' << car1.model << ' ' << car1.age << ' ' << car1.mileage << '\n';
        outputFile << car2.brand << ' ' << car2.model << ' ' << car2.age << ' ' << car2.mileage << '\n';
        outputFile << car3.brand << ' ' << car3.model << ' ' << car3.age << ' ' << car3.mileage << '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    ifstream inputFile(fileName);
    if (mileage < 10000 inputFile.is_open()) {
        Car car;
        while (inputFile >> car.brand >> car.model >> car.age >> car.mileage) {
            cout << "brand: " << car.brand << '\n';
            cout << "model: " << car.model << '\n';
            cout << "Age: " << car.age << '\n';
            cout << "mileage : " << car.mileage << '\n';
            cout << "----------------\n";
        }
        inputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for reading.\n";
        return 1;
    }
    return 0;
}
