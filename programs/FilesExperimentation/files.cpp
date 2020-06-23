#include<iostream>
#include<fstream>
using namespace std;

int main(){

    /*
        - ofstream - creating and writing to files
        - ifstream - reads from the files
        - fstream - does all - creates,writes,reads

        ---------------------------------------------

    */
    // creating a file - use ofstream or fstream. use insertion operator(<<) to write to a file.
    // ofstream MyFile("demo.txt");

    // writing text to a file
    // MyFile << "Ohma Tokita";

    // Reading from a file - use ifstream or fstream and the name of the file. We also use while loop along with getline() of the ifstream object to read the file line by line and prints it's content.
    string myText;
    ifstream MyFile("demo.txt");

    while (getline(MyFile, myText)) {
        cout << myText;
    }

    MyFile.close();
    return 0;
}