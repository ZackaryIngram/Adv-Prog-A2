#pragma once
#include <iostream>
#include <string>

class StoryLine
{
private:
	std::string file; //Private member

public:
	StoryLine(std::string f); //Non default constructor
	~StoryLine();//Destructor

	//Getters & Setters
	std::string getFile();
	void setFile(std::string file);
};

