#include <iostream>
#include "AddressBook.h"
#include <windows.h>
using namespace std;

int main()
{
    //SetConsoleCtrlHandler(NULL, TRUE);
    AddressBook addressbook;
    cout<<"Welcome in address book program"<<endl<<endl;
    while(1)
    {
        cout<<"What do you want to do?"<<endl<<"Press: "<<endl;
        cout<<"1. to add person"<<endl;
        cout<<"2. to change person data"<<endl;
        cout<<"3. to remove person from book"<<endl;
        cout<<"4. to show all the people"<<endl;
        cout<<"5. to close program"<<endl;

        int i=0;
        cin>>i;

        system("cls");
        string name,email;
        switch(i)
        {
        case 1: cout<<"You have to write name: ";
                cin>>name;
                cout<<"You have to write email: ";
                cin>>email;
                addressbook.add(name,email);
                break;

        case 2:
                cout<<"You have to write name to change: ";
                cin>>name;
                cout<<"You have to write email to change: ";
                cin>>email;
                addressbook.change(name,email);
                break;
        case 3:
                cout<<"You have to write name to remove: ";
                cin>>name;
                addressbook.deletee(name);
                break;
        case 4:
                cout<<"There we go: "<<endl;
                addressbook.showall();
                break;

        case 5:

                addressbook.save();
                return 0;
                break;
        default: break;

        }

    }

    return 0;
}
