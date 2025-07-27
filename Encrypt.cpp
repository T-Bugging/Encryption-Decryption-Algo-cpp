#include<iostream>
#include<string>
#include "caesar.h"
using namespace std;

string caesarCipherEncrypt(string message, int shift){


      for(int i=0;i<message.length();i++){
        if(isalpha(message[i])) {
        message[i]=toupper(message[i]);

         if(message[i]>='A' && message[i]<='Z')
        message[i]= message[i]+ (shift%26);
            if(message[i] > 'Z'){
            message[i] = message[i] - 26;}
        
        
          }
      }
      return message;
    }
    

    