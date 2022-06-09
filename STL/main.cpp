#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;

class Compare {
public:
	bool operator() (pair<string, int> p1, pair<string, int> p2) {
		if (p1.second < p2.second)
			return true;
		if (p1.second > p2.second)
			return false;
		if (p1.first < p2.first)
			return false;
		return true;
	}
};

int main()
{
	string myString;
	ifstream myFile("text.txt");
	if (!myFile)
	{
		printf("error la deschiderea fisierului: input.txt");
		return 0;
	}
	//citim prima linie din fisier
	if (!getline(myFile, myString)) {
		printf("error la citirea din fisier: input.txt");
		return 0;
	}
	map<string, int> Words;
	transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
	cout << myString << endl;
	string word = "";
	for (auto x : myString)
	{
		if (x == ' ' || x=='.')
		{
			if (word != "")
				if (Words.count(word) != 0)
					Words[word] += 1;
				else
					Words[word] = 1;
			word = "";
		}
		else {
			word = word + x;
		}
	}
	priority_queue<pair<string,int>, vector<pair<string,int>>, Compare>MyQueue;
	for (auto it = Words.begin();it != Words.end();it++)
		MyQueue.push(pair<string, int>(it->first, it->second));
	while (!MyQueue.empty())
	{
		cout << MyQueue.top().first << " => " << MyQueue.top().second << endl;
		MyQueue.pop();
	}
	return 0;
}