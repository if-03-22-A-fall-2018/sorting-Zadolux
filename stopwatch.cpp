/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * Used to measure time elapsed between functions
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"

clock_t start;
clock_t stop;
bool is_running = false;

void start_stopwatch()
{
  start = clock();
  is_running = true;
}

void stop_stopwatch()
{
  stop = clock();
  is_running = false;
}

float elapsed_time()
{
  if(is_running)
  {
    stop = clock();
  }

  return (float)(stop - start) / CLOCKS_PER_SEC;
}
