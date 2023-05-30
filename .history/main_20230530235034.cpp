#include "bits/stdc++.h"

using namespace std;

struct Contact
{
    string name;
    int phoneNumber;
};

int main(void)
{
    // display welcome message and team members name
    cout << "-------------------------------------------------------\n";
    cout << "WELCOME TO OUR PHONEBOOK PROJECT\n";
    cout << "TEAM: DemoTeamName\n\n";
    cout << "\tTEAM MEMBERSE:\n";
    cout << "Rakibur Rahman Rakib (222-15-6191)\n";
    cout << "Abdur Radi (222-15-6191)\n";
    cout << "Angur Saha (222-15-6191)\n";
    cout << "---------------------------------------------------------\n\n\n\n\n\n\n";

    vector<Contact> phonebook; // vector for store the user name and contact number
    int choice;
    do
    {
        cout << "-------------------------------------------------------\n";
        cout << "Press 1 for Add Contact\n";
        cout << "Press 2 for Display All Contacts\n";
        cout << "Press 3 for Search a Contact\n";
        cout << "Press 4 for Delete a Contact\n";
        cout << "Press 5 for Exit\n";
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
            cout << "Contact added successfully!\n\n\n\n";
            break;
        }
        case 2:
        {
            cout << "-------------------------------------------------------\n";
            cout << "Contacts:\n";
            for (const auto &contact : phonebook)
            {
                cout << "Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << "\n";
            }
            break;
        }
        case 3:
        {
            cout << "Enter The Contact Name You Looking for\n";
            string searchQuery;
            cin >> searchQuery;

            bool found = false;
            // implement linear search for find the user info
            for (const auto &contact : phonebook)
            {
                if (contact.name == searchQuery)
                {
                    cout << "Contact found!\n";
                    cout << "Name: " << contact.name << ", Phone Number: " << contact.phoneNumber << "\n";
                    found = true;
                }
            }

            // if contact is not found
            if (!found)
            {
                cout << "Contact not found.\n";
            }

            break;
        }
        case 4:
        {
            cout << "Enter The Name or phone number of the contact to delete: ";
            string deleteQuery;
            cin >> deleteQuery;

            bool deleted = false;
            for (auto it = phonebook.begin(); it != phonebook.end(); ++it)
            {
                if (it->name == deleteQuery)
                {
                    phonebook.erase(it);
                    deleted = true;
                    cout << "Contact deleted successfully!\n";
                    break;
                }
            }

            if (!deleted)
            {
                cout << "Contact not found.\n";
            }

            break;
        }

        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 6);
}