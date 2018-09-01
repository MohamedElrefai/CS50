#include<stdio.h>
#include<cs50.h>
#include <stdlib.h>
#include<string.h>

int main (int argc , string argv[])
{ //handeling argc
      if(argc!=2 )
    { printf("Must be one argument input ");
        return 1;}
 int key=atoi(argv[1]);
 int dummy;    
  // as the input more than 2
  
    // get the i/ps from user
printf("plaintext:  ");
string s=get_string();
//checking not Null
if(s!=NULL)
{ // make my key wrapping  around my character 26 chars only
    if(key>26) 
 {key=key%26;}
 //sniffing with the char and finding out upper lower to decrypt it 
    for(int i=0,n=strlen(s);i<n;i++)
    {
        //upper char
        if(s[i]>='A'&&s[i]<='Z')
        { 
            dummy=(s[i]+key)%90;
            if(dummy<65)
            { //to start from the first
                dummy=dummy+64;
                s[i]=dummy;
            }
            else
            {s[i]=s[i]+key;}
         }
        
        //lower
        else if (s[i]>='a'&&s[i]<='z'){
         dummy=(s[i]+key)%122;
    
            if(dummy<97)
            {dummy=dummy+96;
                s[i]=dummy; }
            else
            {s[i]=s[i]+key;}

            }
             //not char       
         //don't do anything
         }    
        
    }
 
printf("ciphertext: %s\n",s);
 
}