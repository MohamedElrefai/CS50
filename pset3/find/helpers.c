/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include<stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{  
    int start=0; 
    int end=n-1;
    int  inmid=(start+end)/2;
    //  implement a searching algorithm
    if(value<0){
        return false;}
 
  while(start<=end)
  {
      if(values[inmid]==value)
      {return true;}
      else if (values[inmid]<value)
      {//right
     inmid+=1; // no need for current element 
      start=inmid;
       
      }
      else if (values[inmid]>value)
      {//left
      inmid-=1; //delete current element
          end=inmid;
      }
       inmid=(start+end)/2;   }
    return false;}


/**
 * Sorts array of n values. 
 */
void sort(int values[], int n)
{
    //  implement a sorting algorithm O(n^2)
    int temp=0;
    int j,carry,update_index;
    for(int i=0;i<n;i++)
    { temp=0;
        for(j=0;j<n-i;j++){
        
        if(temp<values[j])
        {
            temp=values[j];
        update_index=j;}
        
    } if(update_index==n-i-1)
    {values[j-1]=temp;}
   //swap between last value and max value
    else
    {
     carry=values[j-1];
     values[update_index]=carry;
     values[j-1]=temp;
    }
    }

    return;
}

//  for(int i=0;i<n;i++){
//         if(value==values[i])
//         {return true;}
