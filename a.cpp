#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
#include<windows.h>
#include <conio.h>
#include "link.h"
using namespace std;

void SetColor(int color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
int main()
{
	// default white
	SetColor(15);

	string word = GenerateWords();
	char first , second , third, fourth , fifth;
	bool found = true;
	first = word[0];
	second = word[1];
	third = word[2];
	fourth = word[3];
	fifth = word[4];
	int tried = 0;
	int j;
	int k;
	while (tried <= 5) {
		SetColor(15);
		cout << "Guess the word " << endl;
		string guess;
		SetColor(7);
		cin >> guess;
		if (guess == word){
			SetColor(2);
			cout << "Guess Correct" << endl;
			break;
		}
		vector <pair<char,string>> tempIndex;
		for (int i = 0; i < guess.size(); i++) {
			for (j = 0; j < word.size(); j++) {
				k = j;
				if(word[j] == guess[i] && i == j){
					
					tempIndex.push_back(make_pair(guess[i],"correct"));
					found = true;
					break;
				}
				else if(word[j] == guess[i] && i!= j){
					tempIndex.push_back(make_pair(guess[i], "misplaced"));
					found = true;
					break;
				}
				else{
					found = false;
				}
				

			}
			if(found == false){
				tempIndex.push_back(make_pair(guess[i],"absent"));
				
			}
			found = true;

		}
		
		for(auto i: tempIndex){
			if(i.second == "absent"){
				// default white color
				SetColor(15);
				cout << i.first;
			}
			else if(i.second == "misplaced"){
				// yellow color
				SetColor(14);
				cout << i.first;
			}
			else if(i.second == "correct"){
				// green color
				SetColor(2);
				cout << i.first;
			}
			
		}
		SetColor(4);
		cout << "NOOBBBB select again.." << endl;
		cout << endl;
		tried += 1;
		tempIndex.clear();
		
	}
	cout << "correct word " << word << endl;


	return EXIT_SUCCESS;

}