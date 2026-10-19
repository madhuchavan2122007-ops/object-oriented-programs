/* File Handling with C++ using ifstream & ofstream class object */
/* To write the content in File */
/* Then to read the content of file */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Writing content into file
    ofstream fout("sample.txt");

    fout << "Hello World!" << endl;
    fout << "Welcome to C++ File Handling." << endl;
    fout << "This is a file handling program.";

    fout.close();

    cout << "Data written successfully!" << endl;

    // Reading content from file
    ifstream fin("sample.txt");
    string line;

    cout << "\nContent of File:" << endl;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
