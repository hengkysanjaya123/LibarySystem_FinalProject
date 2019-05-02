#include <iostream>
#include <list>

//#include "book.h"
#include "Model/user.h"

using namespace std;

class LibrarySystem{
	private:
		list<User> listUser;
//		list<Book> listBook;
	public:
		list<User>* getListUser(){
			return &(this->listUser);
		}
		
		template<class T>
		void add(T obj, list<T>& list){
			list.push_back(obj);
		}
		
		template<class T>
		void remove(T obj, list<T>& list){
			list.remove(obj);	
		}
		
		template<class T>
		void update(T beforeObj, list<T> list, T afterObj){
			for(int i = 0;i < list.size();i++){
				if(list[i] == beforeObj){
					list[i] = afterObj;
					break;
				}
			}
		}
};
