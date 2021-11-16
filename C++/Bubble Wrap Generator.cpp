#include<stdio.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

int main()
{
	int rows, cols = 0;
	string word;

	cout << "How many columns?" << endl;
	cin >> rows;
	cout << "How many rows?" << endl;
	cin >> cols;
	cout << "What should each cell say?" << endl;
	cin >> word;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "||*" + word + "*|| ";
		}

		cout << endl;
	}
}
