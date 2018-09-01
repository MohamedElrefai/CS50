#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
     string s= get_string();
    char temp[10];
     int counter=0;
     if(s!=NULL) {
     temp[0] =toupper(s[0]); //my first char i know it


   // looping to discover spacing 
    for(int i=1,n=strlen(s);i<n;i++)
     { 
         //once finding space my second char will be capital
       if(s[i]==' ')
       { counter+=1;
       // store in my temporary arr of char
       temp[counter]=toupper(s[i+1]);    
             }
        }
        for(int j=0;j<counter+1;j++)
        {
            printf("%c",temp[j]);
        }
     }
     printf("\n");
}