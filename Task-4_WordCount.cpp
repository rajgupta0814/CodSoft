/*
Develop a program that counts the number of words in a given
text file. Prompt the user to enter the file name and display the
total word count.
*/
#include <iostream>
#include <fstream>
using namespace std;

class WordCounter {
public:
    string fileName;
    int wordCount;

    WordCounter(const string &file) : fileName(file), wordCount(0) {}

    void countWords() {
        char ch;
        ifstream inputFile(fileName);

        if (inputFile.is_open()) {
            while (!inputFile.eof()) {
                inputFile.get(ch);
                if (isalpha(ch)) {
                    // Read characters until a non-alphabetic character is encountered
                    while (isalpha(ch)) {
                        inputFile.get(ch);
                    }
                    wordCount++;
                }
            }
            inputFile.close();
            cout << "Total number of words: " << wordCount << endl;
        } else {
            cout << "Unable to open the file." << endl;
        }
    }
};

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    WordCounter counter(filename);
    counter.countWords();

    return 0;
}
