#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Weather {
    int date;
    int temperature;
    int pressure;
};
int main() {
    const string fileName = "weather.txt";
    Weather weather1 = { 21.05.2023, 23, 50 };
    Weather weather2 = { 22.03.2022, -14, 12 };
    Weather weather3 = { 15.01.2022, -4, 43 };
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << weather1.date << ' ' << weather1.temperature << ' ' << weather1.pressure << ' ' << '\n';
        outputFile << weather2.date << ' ' << weather2.temperature << ' ' << weather2.pressure << ' ' << '\n';
        outputFile << weather3.date << ' ' << weather3.temperature << ' ' << weather3.pressure << ' ' << '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        Weather weather;
        while (inputFile >> weather.date >> weather.temperature >> weather.pressure) {
            cout << "date: " << weather.date << '\n';
            cout << "temperature: " << weather.temperature << '\n';
            cout << "pressure: " << weather.pressure << '\n';
            cout << "----------------\n";
        }
        inputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for reading.\n";
        return 1;
    }
    cout << "days with a temperature below 0 degrees." << endl;
    for (int i = 0; i < temperature; i++) {
        if (Weather[i].temperature < 0) {
            cout << "namespace: " << weather[i].date << endl;
            cout << "temperature: " << weather[i].temperature << endl;
            cout << "pressure: " << weather[i].pressure << endl;
            cout << "-----------------------" << endl;
        }
    }
    return 0;
}
