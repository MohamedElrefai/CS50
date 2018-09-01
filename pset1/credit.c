#include<stdio.h>
#include<cs50.h>

long long power(int n);
int main(void)
{
    
long long cc_num;
int card,dummy,sum,size=0;
int sum_odd=0;
int sum_even=0;
do{
    printf("Number:");
    cc_num=get_long_long();
}   while(cc_num<0); 


    if(cc_num/power(13)==34||cc_num/power(13)==37)
    {card=1;
        size=15;
    }
    else if (cc_num/power(14)>50&&cc_num/power(14)<56)
    {card=2;
        size=16;
    }
    else if(cc_num/power(12)==4)
    {card=3;
        size=13;
    }
   else if(cc_num/power(15)==4)
    {card=3;
        size=16;
    }

for( int i=0;i<(size/2);i++)
{
sum_odd =sum_odd+cc_num%10;
cc_num=cc_num/10;

dummy=2*(cc_num%10);
if(dummy>=10)
{sum_even=sum_even + dummy % 10;
    dummy=dummy/10;
    sum_even=sum_even + dummy%10;
}
else {
sum_even=sum_even + 2*(cc_num%10); }
cc_num=cc_num/10;

}
if(size==13){sum_odd+=4;}
else if (size==15){sum_odd+=3;}

sum=sum_even+sum_odd;

if(card==1&&sum%10==0)
{printf("AMEX\n");}
else if(card==2&&sum%10==0)
{printf("MASTERCARD\n");}
else if(card==3&&sum%10==0)
{ printf("VISA\n");}
else {printf("INVALID\n");}
}

long long power(int n)
{ long long mul=1;
    for(int i=0;i<n;i++)
    {mul*=10;}
 return mul;}