#include <vector>
#include <random>
#include <time.h>
using namespace std;
string GenerateWords(){
	vector <string> wordsList;
	wordsList.push_back("apple");
	wordsList.push_back("anger");
	wordsList.push_back("angry");
	wordsList.push_back("mango");
	wordsList.push_back("weary");
	wordsList.push_back("onion");
	wordsList.push_back("thing");
	wordsList.push_back("maize");
	wordsList.push_back("wheat");
	wordsList.push_back("juice");
	wordsList.push_back("crane");
	wordsList.push_back("buzzy");
	wordsList.push_back("fuzzy");
	wordsList.push_back("belly");
	

	// generate seed for the random generator
	srand(time(0));
	int random = 0 + (rand()%wordsList.size());
	return wordsList[random];


}


