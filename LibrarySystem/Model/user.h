#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User
{
	private:
		string name;
		string username;
		string password;
		string role;
		string level;
	
	public:
		User(string n, string u, string p, string r);
		void setName(string name);
		string getName();
		void setUsername(string username);
		string getUsername();
		void setPassword(string password);
		string getPassword();
		void setRole(string role);
		string getRole();
		void setLevel(string level);
		string getLevel();
};

#endif
