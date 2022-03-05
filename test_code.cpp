#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"

TEST_CASE("check number of readings in given range from charging session"){
  int inputRange[] = {4,5};
	checkNumberOfReadingsInRange(inputRange);
	REQUIRE(4-5, 2);
