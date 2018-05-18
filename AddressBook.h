#ifndef ADDRESSBOOK_H_INCLUDED
#define ADDRESSBOOK_H_INCLUDED
#include<map>
#include<string>

using namespace std;

class AddressBook{

public:
    AddressBook(void);
   ~AddressBook(void);

    bool add(string,string);
    bool change(string,string);
    bool deletee(string);
    bool showall(void);
    void save(void);

private:
    map<string,string> book;

};

#endif // ADDRESSBOOK_H_INCLUDED
