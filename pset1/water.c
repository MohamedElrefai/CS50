#include<stdio.h>
#include<cs50.h>

int main(void)
{   int min;
    do{ printf("Minutes: "); //getting the mins from user
    min=get_int();
        
    } while(min<=0) ;
    
    printf("Bottles: %i \n",min*12);
    
    
}
