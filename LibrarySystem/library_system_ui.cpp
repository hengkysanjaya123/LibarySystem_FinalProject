#include <iostream>
#include "library_system.cpp"

using namespace std;

class LibrarySystemUI{
	private:
		LibrarySystem ls;
	public:
		void run(){
			int option;
			cout << "Welcome to Library System" << endl
			     << "1. Login" << endl
			     << "2. Register" << endl
			     << "3. Exit" << endl;
			     
			cin >> option;
			// login
			if(option == 1){
				string username, password;
				cout << "username >>";
				cin >> username;
				cout << "password >>";
				cin >> password;
				
				
//				cout << "Welcome [name] (admin)" << endl
//					 << "1. Master Data" << endl
//					 	<< "\t1. Book" << endl
//					 		<< "\t\t1. Insert" << endl
//					 		<< "\t\t2. Update" << endl
//					 		<< "\t\t3. Delete" << endl
//					 		<< "\t\t4. Search" << endl
//					 		<< "\t\t5. View all" << endl
//					 	<< "\t2. Category" << endl
//					 		<< "\t\t1. Insert" << endl
//					 		<< "\t\t2. Update" << endl
//					 		<< "\t\t3. Delete" << endl
//					 		<< "\t\t4. Search" << endl
//					 		<< "\t\t5. View all" << endl
//					 	<< "\t3. User" << endl
//						 	<< "\t\t1. Insert" << endl
//					 		<< "\t\t2. Update" << endl
//					 		<< "\t\t3. Delete" << endl
//					 		<< "\t\t4. Search" << endl
//					 		<< "\t\t5. View all" << endl
//					 << "2. View Transaction" << endl
//					 << "3. View Borrowed Books" << endl
//					 << "4. " << endl;
					 
				cout << "Book CRUD" << endl
					<< "\t\t1. Insert" << endl
			 		<< "\t\t2. Update" << endl
			 		<< "\t\t3. Delete" << endl
			 		<< "\t\t4. Search" << endl
			 		<< "\t\t5. View all" << endl;
			 		
			 	cin >> option;
			 	if(option == 1){
			 		string name ,username, password, confirm_password, role;
			 		
			 		cout << "-- Add New User --" << endl;
			 		
			 		cout << "name >>";
			 		getline(cin, name);
			 		
			 		cout << "username >>";
			 		getline(cin, username);
			 		
			 		cout << "password >>";
			 		getline(cin, password);
			 		
			 		cout << "confirm password >>";
			 		getline(cin, confirm_password);
			 		// check confirm password & password
			 		
			 		cout << "Role [L = Library, A = Admin]>>";
			 		getline(cin, role);
			 		
			 		ls.addUser(User(name, username, password, role));	
				}
			}
			// exit
			else if(option == 2){
				
			}
			else{
				cout << "Wrong Input" << endl;
			}
		}
};
