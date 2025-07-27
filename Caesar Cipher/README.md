# **Encryption‑Decryption‑Algo‑CPP**

A growing repository of encryption and decryption algorithms implemented in **C++**, structured by algorithm types for clean organization and easy exploration.

---

## ** Folder Contents**

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

This repository contains a **modern C++ implementation of the Caesar cipher**, featuring both encryption and decryption capabilities via a command‑line interface.  
Supported features:

- **Alphabetic characters only**: converts to uppercase before processing.
- **Non‑alphabet characters (spaces, punctuation, digits)** remain unchanged.
- **Wrap-around logic** ensures correct behavior near the ends of the alphabet.
- The main program runs in a loop, offering interactive encryption, decryption, or exit.

---

## **How It Works**

The Caesar cipher shifts each letter by a **fixed integer value**:

- **Encryption** adds the shift to each letter, wrapping past `'Z'`.
- **Decryption** subtracts the shift, wrapping below `'A'`.
- Conversion to uppercase ensures consistency.
- Non-letter characters are **not modified**.

Large or out-of-range shift values (e.g. 65) are handled correctly using modulus arithmetic (`shift % 26`) to keep it within [0–25].

---

## **Usage Instructions**

1. **Clone the repository**  
   ```
   git clone https://github.com/T-Bugging/Encryption-Decryption-Algo-cpp.git
   cd Encryption-Decryption-Algo-cpp/Caesar
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

4. **Use the interactive menu**:
   - Press **1** to encrypt a message  
   - Press **2** to decrypt  
   - Press **3** to exit

---


## ** Contact**

Created by **Uday**  
Feel free to **clone, explore, or tinker** with the project.  
Open to feedback, contributions, or collaboration ideas!

