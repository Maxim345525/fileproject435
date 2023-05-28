#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct shop {
    string name;
    int number;
    int price;
};
int main() {
    const string fileName = "shop.txt";
    Shop shop1 = { "ATB", 5, 15 };
    Shop shop2 = { "Grosh",19, 20 };
    Shop shop3 = { "Eva", 21, 10 };
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << shop1.name << ' ' << shop1.number << ' ' << shop1.price << ' ' << '\n';
        outputFile << shop2.name << ' ' << shop2.number << ' ' << shop2.price << ' ' << '\n';
        outputFile << shop3.name << ' ' << shop3.number << ' ' << shop3.price << ' ' << '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        Student student;
        while (inputFile >> shop.name >> shop.number >> shop.price) {
            cout << "name: " << shop.name << '\n';
            cout << "number: " << shop.number << '\n';
            cout << "price: " << shop.price << '\n';
            cout << "----------------\n";
        }
        inputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for reading.\n";
        return 1;
    }
    cout << "Products with availability of more than 10 units:" << endl;
    for (int i = 0; i < number; i++) {
        if (shop[i].number > 10) {
            cout << "name: " << shop[i].name << endl;
            cout << "number: " << shop[i].number << endl;
            cout << "price: " <<shop[i].price << endl;
            cout << "-----------------------" << endl;
        }
    }
    return 0;
}







}