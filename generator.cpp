#include "stdafx.h" 
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <iostream> 
#include "string.h" 
#include <ctime> 

using namespace std;

class generator
{
public: 
	
	void output(int t);
private: 
	void fabrica_p();
};

void generator::fabrica_p()
{
	char *a[4][4] = { { "When ", "Why ", "How long ", "Where " },
	                { "can ", "did ", "should ", "must " },
                	{ "the God ", "the Devil ", "the cat ", "the C++ code " },
                	{ "die? ", "dance? ", "live? ", "cry? " } };
	cout << a[0][rand() % 3];
	cout << a[1][rand() % 3];
	cout << a[2][rand() % 3];
	cout << a[3][rand() % 3];
}

void generator::output(int t)
{

	for (int i = 0; i < t; i++)
	{
		cout << "\n";
		cout << "Your slogan: *** ";
		fabrica_p();
		cout << "***";
		cout << "\n";
		cout << "\n";
	}
}

int main()
{
	srand(time(NULL));
	generator GENER;
	int t;
	cout << "How many slogans do you want to create? ";
	cin >> t;
	cout << "\n";
	GENER.output(t);
	_gettch();
	return 0;
}
