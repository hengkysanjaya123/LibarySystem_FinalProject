#include <iostream>
#include "library_system.cpp"

using namespace std;

class LibrarySystemUI{
	private:
		LibrarySystem ls;
	public:
		void run(){
			ls.addUser(User("test", "test", "test", "A"));
			
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
				
				User u;
				bool login = ls.doLogin(username, password, u);		
				if(login){
					if(u.getRole() == "A"){
						adminPage(u);			
					}
					else if(u.getRole() == "L"){
						
					}				
				}
				else{
					cout << "Username and password incorrect" << endl;
				}
			}
			// exit
			else if(option == 2){
				
			}
			else{
				cout << "Wrong Input" << endl;
			}
		}
		void adminPage(User currentUser){
			int option;
			while(true){
				cout << "Welcome " << currentUser.getName() <<" (admin)" << endl
					<< "1. Master Data" << endl
	 				<< "2. View Transaction" << endl
					<< "3. View Borrowed Books" << endl
					<< "4. Logout" << endl
					<< ">>";
					
				cin >> option;
				// master data
				if(option == 1){
					cout << "1. Book" << endl
	 				 	 << "2. Category" << endl
					 	 << "3. User" << endl
						 << ">>";
					cin >> option;
					
					// book
					if(option == 1){
						while(true){
							cout << "Book CRUD" << endl
								<< "1. Insert" << endl
						 		<< "2. Update" << endl
						 		<< "3. Delete" << endl
						 		<< "4. Search" << endl
						 		<< "5. View all" << endl
						 		<< "6. Back to menu" << endl;
						 		
						 	cin >> option;
						 	// insert book
						 	if(option == 1){
						 		string b_name, b_author;
								int b_stock;
						 		
						 		cout << "book's name >>";
						 		cin.ignore();
						 		getline(cin, b_name);
						 		
						 		cout << "book's author >>";
						 		cin.ignore();
						 		getline(cin, b_author);
						 		
						 		cout << "book's stock >>";
						 		cin >> b_stock;
						 		
						 		ls.addBook(Book(b_name, b_author, b_stock));
						 		
						 		cout << "~ Book added successfully ~" << endl;
							}
							// update book
							else if(option == 2){
								
							}
							// delete book
							else if(option == 3){
								
							}
							// search book
							else if(option == 4){
								
							}
							// view all book
							else if(option == 5){
								ls.displayBooks();
							}
							// back to menu
							else if(option == 6){
								break;
							}
							else{
								cout << "Wrong Input" << endl;
							}
						}
					} 
					// category
					else if(option == 2){
						
					}
					// user
					else if(option == 3){
						cout << "User CRUD" << endl
							<< "1. Insert" << endl
					 		<< "2. Update" << endl
					 		<< "3. Delete" << endl
					 		<< "4. Search" << endl
					 		<< "5. View all" << endl;
					 		
					 	cin >> option;
					 	// insert user
					 	if(option == 1){
					 		string name ,username, password, confirm_password, role;
					 		
					 		cout << "-- Add New User --" << endl;
					 		
					 		cout << "name >>";
					 		cin.ignore();
					 		getline(cin, name);
					 		
					 		cout << "username >>";
					 		cin.ignore();
					 		getline(cin, username);
					 		
					 		cout << "password >>";
					 		cin.ignore();
					 		getline(cin, password);
					 		
					 		cout << "confirm password >>";
					 		cin.ignore();
					 		getline(cin, confirm_password);
					 		// check confirm password & password
					 		
					 		cin.ignore();
					 		cout << "Role [L = Library, A = Admin]>>";
					 		getline(cin, role);
					 		
					 		ls.addUser(User(name, username, password, role));	
						}
						// update user
						else if(option == 2){
							
						}
						// delete user
						else if(option == 3){
							
						}
						// search user
						else if(option == 4){
							
						}
						// view all users
						else if(option == 5){
							
						}
					}
					// logout
					else if(option == 4){
						break;
					}
					// wrong input
					else{
						cout << "Wrong Input" << endl;
					}
					cout << endl;
				}
				// view transaction
				else if(option == 2){
					
				}
				// view borrowed books
				else if(option == 3){
					
				}
			}
					 
				
		}
};

