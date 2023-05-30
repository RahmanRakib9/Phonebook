#include "bits/stdc++.h"

using namespace std;

struct Contact
{
    string name;
    int phoneNumber;
};

int main(void)
{   
    

    vector<Contact> phonebook; // vector for store the user name and contact number
    int choice;
    do
    {
        cout << "Press 1 for Add Contact\n";
        cout << "Press 2 for Display All Contacts\n";
        // cout << "Press 3 for Delete a Contact\n";
        cout << "Press 3 for Exit\n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Contact newContact;
            cout << "Enter name: ";
            cin >> newContact.name;
            cout << "Enter phone number: ";
            cin >> newContact.phoneNumber;
            phonebook.push_back(newContact);
            cout << "Contact added successfully!\n";
            break;
        }
        case 2:
        {
            cout << "Contacts:\n";
            for (const auto &contact : phonebook)
            {
                cout << "Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << "\n";
            }
            break;
        }
        case 3:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 3);
}