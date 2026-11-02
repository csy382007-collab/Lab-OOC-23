
/* File Handling with C++ using ifstream & ofstream class object */
/* To write the Content in File */
/* Then to read the content of file */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Creation of ofstream class object
    ofstream fout;

    string line;

    // Open file for writing
    fout.open("sample.txt");

    // Execute a loop if file successfully opened
    while (fout) {

        // Read a line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Creation of ifstream class object to read the file
    ifstream fin;

    // Open file in input mode
    fin.open("sample.txt");

    // Execute loop until EOF (End of File)
    while (getline(fin, line)) {

        // Print line read from file
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}