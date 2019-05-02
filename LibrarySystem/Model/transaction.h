#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
<<<<<<< HEAD
using namespace std;
=======
#include "user.h"
#include "book.h"
>>>>>>> c52eae912a1d1f4cb593d0c39c3db3e120c14467

using namespace std;
class Transaction
{
	public:
		Transaction();
		Transaction(User user, Book book, string status, string date, string review);	
		
		void setUser(User user);
		User getUser();
		
		void setBook(Book book);
		Book getBook();
		
		void setStatus(string status);
		string getStatus();
		
		void setDate(string date);
		string getDate();
		
		void setReview(string review);
		string getReview();	
				
	private:
		User user;
		Book book;
		string status;
		string date;
		string review;
	
<<<<<<< HEAD
	public:
		Transaction(string user,string status, string date, string review){
			
		}
};
=======
};

#endif
>>>>>>> c52eae912a1d1f4cb593d0c39c3db3e120c14467
