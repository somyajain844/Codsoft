#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string NameOfFile;
    cout << "Enter the name of text file:\n";
    cin >> NameOfFile;
    ifstream file(NameOfFile);
    if(!file)
    {
        cout << "File does not exist!\n";
        return 1;
    }
    int wordcount=0;
    string word;
    while (file >> word) 
    wordcount++;
    cout << "Total number of words in text file:" << wordcount << endl;
    return 0;
}