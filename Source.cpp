#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Library {
    string avtor;
    string name;
    int age;
    int number;
};
int main() {
    const string fileName = "library.txt";
    Library library1 = { "Omelianchuk", "Harry Potter", 2007, 254 };
    Library library2 = { "Tumchuk", "War", 1999, 432 };
    Library library3 = { "Ivanov", "Holokost", 2021, 243 };
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << library1.avtor << ' ' << library1.name << ' ' << library1.age << ' ' << library1.number << '\n';
        outputFile << library2.avtor << ' ' << library2.name << ' ' << library2.age << ' ' << library2.number << '\n';
        outputFile << library3.avtor << ' ' << library3.name << ' ' << library3.age << ' ' << library3.number << '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    ifstream inputFile(fileName);
    if (age > 2000 inputFile.is_open()) {
        Library library;
        while (inputFile >> Library.avtor >> Library.name >> Library.age >> Library.number) {
            cout << "avtor: " << Library.avtor << '\n';
            cout << "name: " << Library.name << '\n';
            cout << "Age: " << Library.age << '\n';
            cout << "number : " << Library.number << '\n';
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