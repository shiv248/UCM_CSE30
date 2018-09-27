#include <bits/stdc++.h>
using namespace std;

int main()
{
	fstream file;
	string word;
	string phrase = "many";
	string filename;
	int count = 0;
	cin >> phrase;
	transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);

	filename = "words.txt";
	file.open(filename.c_str());

	while (file >> word)

	{


		for (int i = 0, len = word.size(); i < len; i++)
		{
			if (ispunct(word[i]))
			{
				word.erase(i--, 1);
				len = word.size();
			}
		}



		transform(word.begin(), word.end(), word.begin(), ::toupper);
		if( word == phrase){
			count++;
		}

	}

	cout << count << endl;

	return 0;
}
