#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	vector <string>sentences;
	string sentence;
	// Loading input file into program
	ifstream inputFile;
	bool needFirstUpper = true;

	// Opening file
	inputFile.open("input.txt", ios::in);
	string word;

	// Loading output file into program
	ofstream filterFile;
	filterFile.open("filter.txt", ios::out);

	// 
	if (!inputFile)
	{
		cout << "Failed to open file." << endl;
		return 0;
	}
	// Check for file existence
	if (!filterFile)
	{
		cout << "Failed to open file." << endl;
		return 0;
	}

	// Reading file contents, looping through each word in the file
	while (inputFile >> word)
	{
		// Loop through each letter
		for (int i = 0; i < word.length(); i++)
		{
			// Make all letters lowercase
			word[i] = tolower(word[i]);
		}

		// If the previous word ended in a period...
		if (needFirstUpper)	
		{
			// ... Set first letter to upper case
			word[0] = toupper(word[0]);
			// ... We won't need the next letter to be upper case
			needFirstUpper = false;
		}
		

		// Check if word has a period in the end, which indicates the end of a sentence
		if (word.back() == '.')
			// Mark next word to have first letter uppercase
			needFirstUpper = true;
		
		// Add white space to end of the word
		word.push_back(' ');
	
		// Writing word to file
		filterFile << word;
	
	}

	inputFile.close();
	filterFile.close();

	return 0;
}