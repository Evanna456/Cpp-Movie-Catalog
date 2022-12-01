#pragma once
#ifndef _Movie_H_
#define _Movie_H_

#include <string>

class Movie {
private:
	std::string name;
	int rating;
public:
	Movie(std::string name, int rating) {
		this->name = name;
		this->rating = rating;
	}
	std::string getName() {
		return name;
	}
	int getRating() {
		return rating;
	}
};

#endif