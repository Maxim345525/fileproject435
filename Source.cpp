#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Student {
    string surname;
    string name;
    int age;
    float averageGrade;
};
int main() {
    const string fileName = "students.txt";
    Student student1 = { "Maximchuk", "Maxim", 20, 4.5 };
    Student student2 = { "Tumchuk", "Vasya", 19, 4.2 };
    Student student3 = { "Voloshun", "Vlad", 21, 4.8 };
    ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << student1.surname << ' ' << student1.name << ' ' << student1.age << ' ' << student1.averageGrade << '\n';
        outputFile << student2.surname << ' ' << student2.name << ' ' << student2.age << ' ' << student2.averageGrade << '\n';
        outputFile << student3.surname << ' ' << student3.name << ' ' << student3.age << ' ' << student3.averageGrade << '\n';
        outputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for recording.\n";
        return 1;
    }
    std::ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        Student student;
        while (inputFile >> student.surname >> student.name >> student.age >> student.averageGrade) {
            std::cout << "Surname: " << student.surname << '\n';
            std::cout << "Name: " << student.name << '\n';
            std::cout << "Age: " << student.age << '\n';
            std::cout << "Avarega mark: " << student.averageGrade << '\n';
            std::cout << "----------------\n";
        }
        inputFile.close();
    }
    else {
        cout << "Error opening file " << fileName << " for reading.\n";
        return 1;
    }
    return 0;
}