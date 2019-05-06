#include <iostream>
#include <list>
#include <vector>

//#include "book.h"
#include "Model/user.h"

using namespace std;

class LibrarySystem{
	private:
		vector<User> listUser;
//		list<Book> listBook;
	public:
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
