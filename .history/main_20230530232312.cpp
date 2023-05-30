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
    cout << "welcome to our phonebook project\n\n";
    cout << "Team DemoTeamName\n";
    cout << "Team Members:\n";
    cout << "Rakibur Rahman Rakib (222-15-6191)\n";
    cout << "Abdur Radi (222-15-6191)\n";
    cout << "Angur Saha (222-15-6191)\n\n\n\n\n";
    cout << "---------------------------------------------------------\n";

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

        case 5:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 3);
}