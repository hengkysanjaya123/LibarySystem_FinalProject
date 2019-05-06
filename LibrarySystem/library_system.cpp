#include <iostream>
#include <vector>

#include "Model/book.h"
#include "Model/user.h"

using namespace std;

class LibrarySystem{
	private:
		vector<User> listUser;
		vector<Book> listBook;
	public:
		// -- User operations --
		void addUser(User u){
			listUser.push_back(u);
		}
		
		void removeUser(int position){
			listUser.erase(listUser.begin() + position);
		}
		
		void updateUser(int position,User u){
			listUser[0].getName() = u.getName();	
			listUser[0].getUsername() = u.getUsername();
			listUser[0].getPassword() = u.getPassword();
			listUser[0].getRole() = u.getRole();
		}
		
		vector<User> getListUser(){
			return listUser;
		}
		
		// -- Login --
		bool doLogin(string username, string password, User& u){
			for(int i= 0 ; i < listUser.size();i++){
				User cur = listUser[i];
				if(cur.getUsername() == username && cur.getPassword() == password){
					u = cur;
					return true;
				}
			}
			return false;
		}
		
		// -- Book operations --
		
		void addBook(Book b){
			listBook.push_back(b);
		}
		
		void removeBook(int position){
			listBook.erase(listBook.begin() + position);
		}
		
		void updateBook(int position,Book b){
			
		}
		
		void displayBooks(){
			printf("%-20s | %-20s | %-20s | %-20s |\n", "Name", "Author", "Stock", "Rating");
			for(int i = 0 ; i < listBook.size();i++){
				printf("%-20s | %-20s | %-20d | %-20d |\n", listBook[i].getName().c_str(),listBook[i].getAuthor().c_str() , listBook[i].getStock(), listBook[i].getRating());
			}
		}
		
		
		
//		list<User>* getListUser(){
//			return &(this->listUser);
//		}
		
//		template<class T>
//		void add(T obj, list<T>& list){
//			list.push_back(obj);
//		}
		
//		template<class T>
//		void remove(T obj, list<T>& list){
//			for(int i = 0;i < list.size();i++){
//				if(list[i] == obj){
//					list.remove(list[i]);
//					break;
//				}
//			}
//		}
		
//		template<class T>
//		void update(T beforeObj, list<T> list, T afterObj){
//			for(int i = 0;i < list.size();i++){
//				if(list[i] == beforeObj){
//					list[i] = afterObj;
//					break;
//				}
//			}
//		}
};
