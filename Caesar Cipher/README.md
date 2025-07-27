# **Caesar Cipher – C++ Implementation**

A clean and modular C++ implementation of the **Caesar Cipher**, structured for readability and further extension. This folder is part of a larger repository on classical encryption algorithms.

---

## **Folder Contents**

```
Caesar Cipher/
├── Encrypt.cpp       # Caesar encryption logic
├── Decrypt.cpp       # Caesar decryption logic
├── caesar.h          # Shared function declarations
├── main.cpp          # Interactive CLI to run encryption/decryption
└── README.md         # This file
```

---

## **Project Summary**

This project implements a **modernized Caesar Cipher** in C++, featuring both encryption and decryption support via a simple CLI.  
It is designed for clarity, correctness, and easy testing.

Key features:
- **Alphabetic characters only**: input is converted to uppercase
- **Non-alphabet characters** (spaces, punctuation, symbols, digits) remain unchanged
- **Wrap-around logic** ensures correctness near the edges of the alphabet
- **Handles any integer shift**, including large values like 65 or 104

---

## **How It Works**

The **Caesar Cipher** is a classical substitution cipher. Each letter in the plaintext is shifted by a fixed number of positions in the alphabet.

Example (Shift = 3):
```
A → D, B → E, ..., X → A, Y → B, Z → C
```

### **Encryption**
- Add shift to each uppercase letter
- Wrap around if the result goes past `'Z'`

### **Decryption**
- Subtract shift from each letter
- Wrap around if the result goes before `'A'`

Non-letter characters are ignored during both operations.

Large shift values are normalized using:
```cpp
effectiveShift = shift % 26;
```

---

## **Usage Instructions**

1. **Clone the repository**
   ```
   git clone https://github.com/T-Bugging/Encryption-Decryption-Algo-cpp.git
   cd Encryption-Decryption-Algo-cpp/Caesar\ Cipher
   ```

2. **Compile the program**
   ```
   g++ main.cpp Encrypt.cpp Decrypt.cpp -o caesar
   ```

3. **Run**
   ```
   ./caesar       # Linux/macOS
   caesar.exe     # Windows
   ```

4. **Use the interactive menu**
   - Press **1** to encrypt a message  
   - Press **2** to decrypt a message  
   - Press **3** to exit

---

## **Contact**

Created by **Uday**  
Feel free to **clone, explore, or tinker** with the project.  
Open to feedback, ideas, or contributions.

---

This project is part of the main repository:  
[Encryption-Decryption-Algo-cpp](https://github.com/T-Bugging/Encryption-Decryption-Algo-cpp)


