#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct City {
    string name;
    string country;
    int population;
    int area;
};
int main() {
    const string fileName = "city.txt";
    City city1 = { "Vinnitsya", "Ukraine", 300000, 600};
    City city2 = { "New-York","USA", 1000000, 1000};
    City city3 = { "Moscow", "Russia", 3000000, 4000};
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << city1.name << ' ' << city1.country << ' ' << city1.population << ' ' << city1.area << ' ' << '\n';
        outputFile << city2.name << ' ' << city2.country << ' ' << city2.population << ' ' << city2.area << ' ' << '\n';
        outputFile << city3.name << ' ' << city3.country << ' ' << city3.population << ' ' << city3.area << ' ' <<  '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        City city;
        while (inputFile >> City.name >> City.country >> City.population << City.area) {
            cout << "name: " << City.name << '\n';
            cout << "country: " << City.country << '\n';
            cout << "population: " << City.population << '\n';
            cout << "area: " << City.area << '\n';
            cout << "----------------\n";
        }
        inputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for reading.\n";
        return 1;
    }
    cout << "cities of more than 1 million:" << endl;
    for (int i = 0; i < cityy; i++) {
        if (shop[i].cityy > 1000000) {
            cout << "name: " << City[i].name << endl;
            cout << "country: " << City[i].country << endl;
            cout << "price: " << City[i].population << endl;
            cout << "area: " << City[i].area << endl;
            cout << "-----------------------" << endl;
        }
    }
    return 0;
}
