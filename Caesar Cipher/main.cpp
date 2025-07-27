#include <iostream>
#include <string>
#include "caesar.h"
using namespace std;

int main() {
    while(true) {
    int choice;
    cout << "----------------------------------" << endl;
    cout<<"Welcome to the Caesar Cipher Program!"<<endl;
    cout << "Choose an option:" << endl;    
    cout << "1. Encrypt a message" << endl;
    cout << "2. Decrypt a message" << endl;
    cout << "3. Exit" << endl;
    cout<<"Enter your choice (1 | 2 | 3): ";
    cin >> choice;
    cout << "----------------------------------" << endl;
    if(choice == 1) {
        string message;
        int shift;
        cout << "Enter the message to encrypt: ";
        cin.ignore(); // Clear the newline character from the input buffer
        getline(cin, message);
        cout << "Enter the shift value: ";
        cin >> shift;

        string encryptedMessage = caesarCipherEncrypt(message, shift);
        cout << "Encrypted Message: " << encryptedMessage << endl;

    } else if(choice == 2) {
        string cipher;
        int shift;
        cout << "Enter the message to decrypt: ";
        cin.ignore(); // Clear the newline character from the input buffer
        getline(cin, cipher);
        cout << "Enter the shift value: ";
        cin >> shift;

        string decryptedMessage = caesarCipherDecrypt(cipher, shift);
        cout << "Decrypted Message: " << decryptedMessage << endl;
    }
        else if(choice == 3) {
        cout << "Exiting the program. Goodbye!" << endl;
        break;
    }

     else {
        cout << "Invalid choice. Please run the program again." << endl;
    }
}}
