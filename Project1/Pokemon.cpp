/*
	Nguyen, Alexander

	February 14, 2020

	CS A250
	A2 - Pokemon Class
*/

#include "Pokemon.h"
#include <iostream>

using namespace std;

//Default Constructor with Initialization List
Pokemon::Pokemon() : pokeName{ "None" }, pokeNum{ 0 },
	firstType{ "None" }, secondType{"None"}{
}

//Overloaded Constructors with Initialization List
Pokemon::Pokemon(const string& newPokeName, const int newPokeNum, 
	const string& newFirstType) : 
		pokeName{ newPokeName }, pokeNum{ newPokeNum },
		firstType{ newFirstType } {
}

Pokemon::Pokemon(const string& newPokeName, const int newPokeNum, 
	const string& newFirstType, const string& newSecondType) : 
		pokeName{ newPokeName }, pokeNum{ newPokeNum },firstType{ newFirstType }, 
		secondType{ newSecondType } {
}	

//Getters and Setter Implementation
string Pokemon::getFirstType()const
{
	return firstType;
}

string Pokemon::getSecondType()const
{
	return secondType;
}

void Pokemon::setFirstType(string newFirstType)
{
	firstType = newFirstType;
}

void Pokemon::setSecondType(string newSecondType)
{
	secondType = newSecondType;
}

bool Pokemon::commonType(Pokemon pokeObj)const
{
		if ((firstType == pokeObj.firstType) || (firstType == pokeObj.secondType))
		{
			return true;
		}
		else if (secondType == pokeObj.firstType||secondType == pokeObj.secondType)
		{
			if (secondType == "" && pokeObj.secondType == "")
			{
				return false;
			}
			return true;
		}
		else
		{
			return false;
		}	
}

//Print Function Implementation
void Pokemon::print() const
{
	if (secondType == "None")
	{
		cout << pokeName << ": " << firstType << endl;
	}
	else
	{
		cout << pokeName << ": " << firstType << " " << secondType << endl;
	}

}

//Desctructor Implementation
Pokemon::~Pokemon()
{

}