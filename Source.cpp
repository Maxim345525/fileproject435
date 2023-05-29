#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Team {
    string name;
    int win;
    int defeat;
};
int main() {
    const string fileName = "team.txt";
    Team team1 = { "Niva", 5, 15 };
    Team team2 = { "Titan",19, 20 };
    Team team3 = { "Shakhtar", 21, 10 };
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << team1.name << ' ' << team1.win << ' ' << team1.defeat << ' ' << '\n';
        outputFile << team2.name << ' ' << team2.win << ' ' << team2.defeat << ' ' << '\n';
        outputFile << team3.name << ' ' << team3.win << ' ' << team3.defeat << ' ' << '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        Team team;
        while (inputFile >> Team.name >> Team.win >> Team.defeat) {
            cout << "name: " << Team.name << '\n';
            cout << "win: " << Team.win << '\n';
            cout << "defeat: " << Team.defeat << '\n';
            cout << "----------------\n";
        }
        inputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for reading.\n";
        return 1;
    }
    cout << "teams with more than 50% wins.:" << endl;
    for (int i = 0; i < win; i++) {
        if (Team[i].win > 50%) {
            cout << "name: " << Team[i].name << endl;
            cout << "win: " << Team[i].win << endl;
            cout << "defeat: " << Team[i].defeat << endl;
            cout << "-----------------------" << endl;
        }
    }
    return 0;
}
}