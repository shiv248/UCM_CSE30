#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    fstream file;
    string word;
    string filename;
    int count = 0;
 
    filename = "words.txt";
 
    file.open(filename.c_str());
 
    while (file >> word)
    {
        count++;
    }
    cout << count << endl;
 
    return 0;
}
