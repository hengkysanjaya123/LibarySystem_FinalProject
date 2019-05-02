#include "book.h"

Book::Book()
{
	
}

Book::Book(string name, string author, int stock)
{
	this->name = name;
	this->author = author;
	this->stock = stock;
	this->rating = 0;
}

void Book::setName(string name) 
{ 
	this->name = name; 
} 

string Book::getName()
{
	return this->name;
}

void Book::setAuthor(string author)
{
	this->author = author;
}

string Book::getAuthor()
{
	return this->author;
}

void Book::setStock(int stock)
{
	this->stock = stock;
}

int Book::getStock()
{
	return this->stock;
}

void Book::setRating(float rating)
{
	this->rating = rating;
}

float Book::getRating()
{
	return this->rating;
}



