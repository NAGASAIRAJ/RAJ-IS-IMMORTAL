//The buble sort gets its name because as array elements are sorted they gradually "bubbles" to their proper position.
//A bubble sort will compare two adjacent element of ana array and will swap them they are not in order.
//The compare starts with the first and second element.After that it will compare the second with the third one and soo on....the processs continues till the end of the bubble sort array
//When the end of the array is reached the bubble sort algorithm will returns to element one and starts the process all over again.
//as we can see in the source below,the bubble sort algorithm is easy to programm. but the bubble sot algorithm is slower than any other sorting algorithms.Because the  Because the sort always needs a final extra pass to check to see that there are no more swaps are made. If there are no more swaps the swap flag is put up and the process ends

 
#include <stdio.h> //It is a statement which tells the compiler to insert the  contends of stdio at that particular place 
 
int main() //function returns the int value.
{
int array[100], n, c, d, swap; //int[] array is similar to the int array[] 
 
printf("Enter number of elements\n"); //prinf formates the data to stdout
  
scanf("%d", &n);// the scanf function allows to accept input from standard in.

int uses-%d
float uses-%f
char uses-%c
   
printf("Enter %d integers\n", n);
 
for (c = 0; c < n; c++) // A "for loop" genearlly iterates the function.
  
scanf("%d", &array[c]);
 
for (c = 0 ; c < ( n - 1 ); c++)
{
for (d = 0 ; d < n - c - 1; d++)
{
if (array[d] > array[d+1]) //a "if loop" says mainly about the condition
{
swap       = array[d];
array[d]   = array[d+1];
array[d+1] = swap;
}
}
}
 
printf("Sorted list in ascending order:\n");
 
for ( c = 0 ; c < n ; c++ )
printf("%d\n", array[c]);
 
return 0;//
}

