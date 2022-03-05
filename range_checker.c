#include "range_checker.h"

char RangeAndReading[DATA_STREAM_SIZE];

void checkNumberOfReadingsInRange(int* inputStream, int rangeStart, int rangeEnd)
{
	int i, numberOfReadings = 0;
	for(i = 0; i < DATA_STREAM_SIZE; i++)
	{
		if((inputStream[i] >= rangeStart) && (inputStream[i] <= rangeEnd))
		{
			numberOfReadings++;
		}
	}

	sprintf(RangeAndReading, "%d-%d,%d",rangeStart, rangeEnd, numberOfReadings);
}
