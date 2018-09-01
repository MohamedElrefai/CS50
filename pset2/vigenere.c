#include<stdio.h>
#include<cs50.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
char caesar_upper(int key,char m);
char caesar_lower(int key,char m);
// vigenere using caesar crypto
int main (int argc , string argv[])
{ //handeling argc
      if(argc!=2 )
    { printf("Usage: ./vigenere k");
        return 1;}
        //check for input char 
        for(int i=0,n=strlen(argv[1]);i<n;i++)
        {
            if(isupper(argv[1][i])||islower(argv[1][i]))
            {
                // great job make it all upper as it wil be index only 
                argv[1][i]=toupper(argv[1][i]);
               
            }
        
            else{printf("Usage: ./vigenere k");
                return 1;}
        }
        printf("plaintext: ");
        string s=get_string();
       int count=0; //to move with in no with i which maybe there is no char in my word !
         for(int i=0,n=strlen(s),r=strlen(argv[1]);i<n;i++)
        {  if(isalpha(s[i]))
         {
            if(isupper(s[i]))
            { //first the key index(all capital) to the char position and the char with returning to save in the same s[i]
                s[i]=caesar_upper(argv[1][(count%r)]-65,s[i]);
                count=count+1;
               }
            else if (islower(s[i]))
            { s[i]=caesar_lower((argv[1][(count%r)]-65),s[i]);

                  count=count+1;
            }
            
        }
         
        //else don't do anything
           
        }
        printf("ciphertext: %s\n",s);
}

char caesar_upper(int key,char m)
{ int dummy;

        //upper char
            dummy=(m+key)%90;
            if(dummy<65)
            { //to start from the first
                dummy=dummy+64;
               m=dummy;
            }
            else
            {m=m+key;}
            
            return m;}
char caesar_lower(int key,char m){
int dummy;
     dummy=(m+key)%122;
    
            if(dummy<97)
            {dummy=dummy+96;
               m=dummy; }
            else
            {m=m+key;}

     return m;
}