#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

void printWrap(int rows, int cols, string word);

int main()
{
	int rows, cols = 0;
	string word;

	cout << "How many columns?" << endl;
	cin >> cols;
	cout << "How many rows?" << endl;
	cin >> rows;
	cout << "What should each cell say?" << endl;
	cin >> word;

    printWrap(rows, cols, word);
}

void printWrap(int rows, int cols, string word)
{
    for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "||*" + word + "*|| ";
		}
		cout << endl;
	}
}
