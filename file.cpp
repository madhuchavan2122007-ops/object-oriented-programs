

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   
    ofstream fout("sample.txt");

    fout << "Hello World!" << endl;
    fout << "Welcome to C++ File Handling." << endl;
    fout << "This is a file handling program.";

    fout.close();

    cout << "Data written successfully!" << endl;

  
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
