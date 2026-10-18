#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outfile("records.txt", ios::app);

    if (!outfile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int n;
    string name;
    int age;

    cout << "How many records do you want to add? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter age: ";
        cin >> age;

        outfile << "Name: " << name
                << ", Age: " << age << endl;
    }

    outfile.close();

    // Display all records
    ifstream infile("records.txt");

    if (!infile) {
        cout << "Error reading file!" << endl;
        return 1;
    }

    string line;

    cout << "\nAll Records:\n";

    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();

    return 0;
}