#include <iostream>
#include <fstream>
#include <stdexcept>  // For std::runtime_error

using namespace std;

int main() {
    try {
        // Open a file for reading
        ifstream inputFile("example.txt");

        // Enable exceptions on the stream
        inputFile.exceptions(ifstream::failbit | ifstream::badbit);

        // Check if the file was opened successfully
        if (!inputFile.is_open()) {
            throw runtime_error("File could not be opened.");
        }

        // Process the file (example: reading a line)
        string line;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }

        // Close the file
        inputFile.close();
    }
    catch (const ifstream::failure& e) {
        cerr << "File handling error: " << e.what() << endl;
    }
    catch (const exception& e) {
        cerr << "General error: " << e.what() << endl;
    }
    catch (...) {
        cerr << "An unknown error occurred." << endl;
    }

    return 0;
}
