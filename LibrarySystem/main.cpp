#include <iostream>
#include "library_system.cpp"

using namespace std;

int main()
{
	LibrarySystem ls;
	
	ls.add(User("", "", "", ""), ls.getListUser());
	
	
	cout << ls.getListUser().size();
}
