/*
	Nguyen, Alexander

	February 14, 2020

	CS A250
	A2 - Pokemon Class
*/
#ifndef POKEMON_H
#define POKEMON_H

#include <string>

class Pokemon {
	
	public:
		//Default Constructor
		Pokemon();

		//Overloaded Constructors
		Pokemon(const std::string& pokeName, int pokeNum1, 
			const std:: string& firstType);

		Pokemon(const std::string& pokeName, int pokeNum1, 
			const std::string& firstType, const std::string& secondType);
		
		//Getters and Setters for pokemon types
		std::string getFirstType() const;
		std::string getSecondType() const;

		void setFirstType(std::string newFirstType);
		void setSecondType(std::string newSecondType);
		
		//Common Type Function
		bool commonType(Pokemon obj)const;

		//Print Function
		void print() const;

		//Destructor
		~Pokemon();

	private:
		//Variable Creation
		std::string pokeName;
		int pokeNum;
		std::string firstType;
		std::string secondType;
};

#endif
