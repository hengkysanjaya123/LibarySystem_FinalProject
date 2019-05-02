#ifndef CATEGORY_H
#define CATEGORY_H

#include <string>

class Category
{
	public:
		Category();
		Category(string name);
		
		void setName(string name);
		string getName();
		
	private:
		string name;
};

#endif
