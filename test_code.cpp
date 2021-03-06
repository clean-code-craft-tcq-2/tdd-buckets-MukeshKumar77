#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "range_checker.h"

TEST_CASE("check number of readings in given range from charging session"){
  	int data[DATA_STREAM_SIZE] = {4,5};
	int rangeLow = 4;
	int rangeHigh = 5;
	checkNumberOfReadingsInRange(data, rangeLow, rangeHigh);
	REQUIRE(!strncmp(RangeAndReading, "4-5,2", 5));
}

TEST_CASE("check of no readings found in given range from charging session"){
  	int data[DATA_STREAM_SIZE] = {3,0,-2,10,100};
	int rangeLow = 4;
	int rangeHigh = 7;
	checkNumberOfReadingsInRange(data, rangeLow, rangeHigh);
	REQUIRE(!strncmp(RangeAndReading, "4-7,0", 5));
}
