/*
	Nguyen, Alexander

	February 14, 2020

	CS A250
	A2 - Pokemon Class
*/

class Pokemon {
	private:
		//Variable creation
		std::string pokeName, firstType, secondType;
		int pokeNum;

	public:
		//Default Constructor
		Pokemon()
		{
			pokeName = "None";
			firstType = "None";
			secondType = "None";
			pokeNum = 0;
		};

		//Overloaded Constructors
		Pokemon(std::string pokeName, int pokeNum,
			std::string firstType)
		{

		}

		Pokemon(std::string pokeName, int pokeNum,
			std::string firstType, std::string secondType)
		{

		}



		//Destructor
		~Pokemon();
};
