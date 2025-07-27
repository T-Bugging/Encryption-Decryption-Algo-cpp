#include<iostream>
#include<string>
#include "caesar.h"
using namespace std;

string caesarCipherDecrypt(string cipher, int shift){
        for(int i=0;i<cipher.length();i++){
            if(isalpha(cipher[i])){
            cipher[i]=toupper(cipher[i]);
    
            if(cipher[i]>='A' && cipher[i]<='Z')
            cipher[i]= cipher[i] - (shift%26);
                if(cipher[i] < 'A'){
                cipher[i] = cipher[i] + 26;}
            
            
     }
    }
     return cipher;
    }

