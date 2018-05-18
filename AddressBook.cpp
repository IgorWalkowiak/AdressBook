#include "AddressBook.h"
#include<fstream>
#include<iostream>

bool AddressBook::change(string name,string email)
{
    if(book[name].empty())
    {
        cout<<"Wpis nie istnieje"<<endl;
        return false;
    }

    book[name]=email;
    return true;
}

bool AddressBook::add(string name, string email)
{
     if(!(book[name].empty()))
     {
      cout<<"Wpis o danej nazwie istnieje"<<endl;
      return false;
     }
     book[name]=email;
     return true;
}

bool AddressBook::deletee(string name)
{
     if(book[name].empty())
    {
        cout<<"Wpis nie istnieje"<<endl;
        return false;
    }
    book.erase(name);

}

bool AddressBook::showall(void)
{
    for(auto it:book)
        std::cout<<"Name: "<<it.first<<"\t\t"<<"Email: "<<it.second<<endl;
}

AddressBook::AddressBook(void)
{
    fstream file;
    file.open("data",std::ios::in);
    string bufor;

    while(getline(file,bufor))
    {
    int i = bufor.find("/");
    book[bufor.substr(0,i)]=bufor.substr(i+1,bufor.length()-1);
    }

}

AddressBook::~AddressBook(void)
{
    fstream file;
    file.open("data",std::ios::out);cout<<"OTWARLEM";

    for( auto it:book)
        file<< it.first<<"/"<<it.second<<endl;
}

void AddressBook::save(void)
{
    fstream file;
    file.open("data",std::ios::out);

    for( auto it:book)
        file<< it.first<<"/"<<it.second<<endl;
}


