#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H

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
		LibrarySystem();
		void addUser(User u);
		void removeUser(int position);
		void updateUser(int position,User u);
		
		vector<User> getListUser();
		
		// -- Login --
		bool doLogin(string username, string password, User& u);
		// -- Book operations --
		
		void addBook(Book b);
		void removeBook(int position);
		void updateBook(int position,Book b);
		void displayBooks();
		
		
		
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


#endif
