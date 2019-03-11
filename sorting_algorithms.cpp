/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * Bubble sort and insertion sort
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"
#include <stdlib.h>

void init_random(int* array, unsigned long size)
{
  for(unsigned long i = 0; i < size; i++)
  {
    array[i] = random();
  }
}

int* bubble_sort(int* array, unsigned long size)
{
  for(unsigned long i = 0; i < size; i++)
  {
    for(unsigned long j = 0; j < size - i; j++)
    {
      if(array[j] > array[j + 1])
      {
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
      }
    }
  }

  return array;
}

int* insertion_sort(int* array, unsigned long size)
{
  unsigned long j;
  int temp;

  for(unsigned long i = 0; i < size; i++)
  {
      j = i;
      while((j > 0) && (array[j - 1] > array[j]))
      {
          temp = array[j - 1];
          array[j - 1] = array[j];
          array[j] = temp;
          j--;
      }
  }

  return array;
}
