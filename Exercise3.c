#include <stdio.h>

/*
Find the average value of an array.
*/

#define SIZE 5
double find_average(int *ptr,int size)
{
    double sum = 0  ;
    for(int i=0  ; i<size ; i++ )
    {
        sum = sum + ptr[i]; 
    }
    return sum/size ; 
}


int main()
{
   int array[5] = {1,2,3,4,5} ; 
   double result = find_average(array,SIZE) ; 
   printf("The avg value is: %f",result) ; 

    return 0 ; 
}