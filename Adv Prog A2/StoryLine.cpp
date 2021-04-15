#include "StoryLine.h"

StoryLine::StoryLine(std::string f)
{
	setFile(f);
}

StoryLine::~StoryLine() = default;

std::string StoryLine::getFile()
{
	return static_cast<std::string>(file);
}

void StoryLine::setFile(std::string file)
{
	this->file = file;
}
