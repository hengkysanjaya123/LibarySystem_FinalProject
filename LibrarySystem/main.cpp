#include <iostream>
#include "Model/user.h"
#include "library_system.cpp"


using namespace std;

int main()
{
	LibrarySystem ls;
	
	ls.add(User("", "", "", ""), *ls.getListUser());
	ls.add(User("", "", "", ""), *ls.getListUser());
	
	//ls.remove(User("", "", "", ""), *ls.getListUser());
	
	cout << ls.getListUser()->size();
	cout << "hello";
}
