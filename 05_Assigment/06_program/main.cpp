// To create a file and implement read and write operations
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Creating and writing to a file
    ofstream outputFile("example.txt"); // Creates a file named "example.txt"

    if (outputFile.is_open()) {
        outputFile << "Hello, this is a sample text." << endl;
        outputFile << "Writing to a file in C++ is easy!" << endl;

        outputFile.close(); // Close the file after writing
        cout << "File created and written successfully." << endl;
    } else {
        cout << "Unable to open the file for writing." << endl;
        return 1; // Return an error code
    }

    // Reading from the file
    ifstream inputFile("example.txt"); // Opens the file for reading

    if (inputFile.is_open()) {
        cout << "Contents of the file:" << endl;

        // Read and print each line from the file
        string line;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }

        inputFile.close(); // Close the file after reading
    } else {
        cout << "Unable to open the file for reading." << endl;
        return 1; // Return an error code
    }

    return 0;
}
