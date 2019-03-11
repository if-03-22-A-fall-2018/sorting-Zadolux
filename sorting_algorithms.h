/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class name here>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * File:			sorting_algorithms.h
 * Author:			Peter Bauer
 * Due Date:		#due#
 * ----------------------------------------------------------
 * Description:
 * <Add description>
 * ----------------------------------------------------------
 */
#ifndef ___SORTING_ALGORITHMS_H
#define ___SORTING_ALGORITHMS_H

/**
*** @file sorting_algorithms.h
*** @brief Description of sorting algorithms
*** @page Sorting Algorithms
*** Basically two functions to sort arrays of integer elements. Furthermore, a function
*** to initialize an array with a number of random elements.
*/

void init_random(int* array, unsigned long size);
int* bubble_sort(int* array, unsigned long size);
int* insertion_sort(int* array, unsigned long size);
void init_random();

#endif
