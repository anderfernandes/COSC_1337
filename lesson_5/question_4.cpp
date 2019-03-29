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
  string input;

  // Opening file
  inputFile.open("input.txt", ios::in);

  // Loading output file into program
  ofstream filterFile;
  filterFile.open("filter.txt", ios::out);

  
  if (!inputFile)
  {
    cout << "Failed to open file." << endl;
    return 0;
  }

  if (!filterFile)
  {
    cout << "Failed to open file." << endl;
    return 0;
  }

  // Reading file contents
  while (inputFile >> input)
  {
    // Check if word has a period in the end, which indicates the end of a sentence
    sentence += input + " ";
    cout << input[-1];
    if (input.back() == '.')
    {
      sentences.push_back(sentence);
      sentence = "";
    }
    
    //filterFile << input << " ";
  }

  for (string word : sentences)
  {
    // Check if the first letter is capital
    if (!isupper(word[0]))
      // Make them uppercase if they are not
      word[0] = toupper(word[0]);
    
    // Loop through word, skip index 0 because it contains the first letter
    for (int i = 1; i < word.length(); i++)
    {
      // Change all the letters other than the first letter of sentences to lowercase
      if (!islower(word[i]))
        input[i] = tolower(input[i]);
    }
    
    cout << word;
  }

  inputFile.close();
  filterFile.close();

  return 0;
}