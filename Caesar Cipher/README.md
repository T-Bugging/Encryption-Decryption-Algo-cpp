Caesar Cipher - C++ Implementation
 Project Summary
This project implements a modernized Caesar cipher in C++, featuring both encryption and decryption functions. It handles:

Alphabetic characters only (A–Z), preserving case by converting to uppercase.

Spaces, punctuation, digits, and other symbols remain unchanged.

Wrap-around logic for letters near 'Z' or 'A'.

A command-line interactive mode to encrypt and decrypt in one run.

 How It Works – Caesar Cipher Explained
The Caesar cipher is a substitution cipher that shifts each letter in a message by a fixed number of positions in the alphabet.
For example, with a shift of 3:

css
Copy
Edit
A → D, B → E … X → A, Y → B, Z → C
Encryption: Add shift to each letter and wrap around past 'Z'.

Decryption: Subtract shift, and wrap before 'A' by adding 26.

This approach ensures reversible, consistent encryption of A–Z characters only.

  Features
Encryption Function (caesarCipherEncrypt)
Converts letters to uppercase

Shifts letters by the chosen shift value

Wraps around if the letter goes beyond 'Z'

Leaves non-alphabetic characters intact

Decryption Function (caesarCipherDecrypt)
Applies the reverse procedure:

Subtracts shift

Wraps around below 'A'

Ignores non-alphabetic characters

Interactive CLI in main()
Prompts user for input message and shift value

Prints out both the encrypted and decrypted versions

Shows real-time validation that encryption and decryption reverse each other

Run:

bash
Copy
Edit
./caesar
Examples:

Enter message: Hello, my friend!

Shift value: 3

App prints:

pgsql
Copy
Edit
Encrypted Message: KHOOR, PB IULHQG!
Decrypted Message: HELLO, MY FRIEND!

Why This Is Valuable
Demonstrates mastery of basic C++ string and character manipulation.

Highlights modular arithmetic and wrap-around logic.

Handles real-world edge cases (punctuation, case-insensitivity, symbol preservation).

Provides a solid foundation to extend into more advanced ciphers like Vigenère or Playfair.

 
 Contact
Created by Uday.
Feel free to clone, tinker, or reach out for feedback.
