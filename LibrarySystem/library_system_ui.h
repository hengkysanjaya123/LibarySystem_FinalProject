#ifndef LIBRARY_SYSTEM_UI_H
#define LIBRARY_SYSTEM_UI_H

#include <iostream>
#include "library_system.h"

using namespace std;

class LibrarySystemUI{
	private:
		LibrarySystem ls;
	public:
		void run();
		void adminPage(User currentUser);

};

#endif
