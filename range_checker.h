#ifndef RANGE_CHECKER_H_
#define RANGE_CHECKER_H_

#include <stdio.h>
#include <string.h>

#define DATA_STREAM_SIZE 	100

extern char RangeAndReading[DATA_STREAM_SIZE];

void checkNumberOfReadingsInRange(int inputStream[], int rangeStart, int rangeEnd);

#endif /* RANGE_CHECKER_H_ */
