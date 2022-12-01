#include <iostream>
#include <vector>
#include "Movie.h"

class Movies {
private:
	std::vector <std::string> movies_catalog;
public:
	void addMovie(Movie movie) {
		std::string name = movie.getName();
		int rating = movie.getRating();
		movies_catalog.push_back(name +" "+ std::to_string(rating));
	}
	void displayAll() {
		for (auto movie : movies_catalog) {
			std::cout << movie << std::endl;
		}
	}
};

int main()
{
	Movie movie1("Saijaku no Bahamut", 8);
	Movie movie2("Highschool DXD", 9);
	Movie movie3("To Love Ru", 10);

	Movies movies;
	movies.addMovie(movie1);
	movies.addMovie(movie2);
	movies.addMovie(movie3);
	movies.displayAll();

	std::cout << "Press any key to exit the console...";
	std::cin.ignore();
	std::cin.get();
}

