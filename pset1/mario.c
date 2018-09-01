#include<cs50.h>
#include<stdio.h>
void hash(int hash);
void space(int space);
int main(void)
{
int height;
do{
    printf("Height:");
    height=get_int();
} while( height<0  || height>23);
for(int i=0;i<height;i++)
{

space(height-i-1); //left pyramid
hash(i+1);
space(2);
hash(i+1); //right one

printf("\n");
}

}

void space(int space)
{ 
  for(int i=0;i<space;i++)
  {
    printf(" ");
   }
    }

void hash(int hash)
{
    for(int i=0;i<hash;i++)
    {
     printf("#");
    }
}

