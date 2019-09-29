/******************************************************************

  CIS 22B

	Lab1: Program is designed to input data from a default file path, sort it, 
			and print it to the screen. If the file isn't found, the program 
			will prompt the user for the correct file name. 

  Author: Kaden Golda

  Date:4/20/2019

*******************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

void output();

struct movie {
	std::vector <std::string> Title(20), Director(20), Genre(20), Year(20), runningTime(20);
} 

/* *****************************************************************
	Main() opens the file path, fills each vector from the file, and sorts it alphabetically. 
*******************************************************************/
int main() {
	using namespace std;

    movie m1;

	string filename;

	ifstream inFile;		// create file for input
	inFile.open("Movie_entries.txt");
	while (inFile.fail() == 1) // Prompt user to enter a new filename if "inFile.open" fails. 
	{
		cout << "No such file, please enter the correct file name:" << endl;	// Send error if file doesn't exist.
		getline(cin, filename);

		inFile.open(filename);
	}
		// Iterating "for" loop to fill all data. Strings are used as we only need "Title()".
		for (int i = 0; i < 20; i++) 
		{
			getline(inFile, m1.Title[i], ',');
			getline(inFile, m1.Director[i], ',');
			getline(inFile, m1.Genre[i], ',');
			getline(inFile, m1.Year[i], ',');
			getline(inFile, m1.runningTime[i]);
		}
		sort(Title.begin(), Title.end()); // Use std::sort to sort the vector alphabetically. 
		output(Title); // Call the output function to print the sorted vector "Title()"
	return 0;
}

void output() {
/******************************************************************
	This Function prints sorted data passed as a parameter.
	Title: The title of each film, sorted alphebetically.
*******************************************************************/
    movie m1;

	using namespace std;
	for (int i = 0; i < 20; i++)
	{
		cout << m1.Title[i] << endl;
	}
}

/*
A Thousand Words
Avengers: Age of Ultron
Captain America: The Winter Soldier
Chungking Express
Earthlings
Ghost in the Shell
Guardians of the Galaxy
Happy Feet
Inglourious Basterds
Interstellar
Kung Fu Hustle
Limitless
Mean Girls
Superbad
Surf's Up
The Great Escape
The Matrix
Under the Tuscan Sun
Whiplash
Zoolander
*/

