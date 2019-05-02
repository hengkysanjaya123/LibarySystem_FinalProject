#include "category.h"

Category::Category()
{
}

Category::Category(string name)
{
	this->name = name;
}

void Category::setName(string name)
{
	this->name = name;
}

string Category::getName()
{
	return this->name;
}


