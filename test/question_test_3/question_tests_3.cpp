#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify binary_to_decimal")
{
	CHECK(binary_to_decimal("00001010") == 10);
	CHECK(binary_to_decimal("10101010") == 170);
	CHECK(binary_to_decimal("11111111") == 255);
}

TEST_CASE("Verify get_power")
{
	CHECK(get_power(2, 2) == 4);
	CHECK(get_power(2, 3) == 8);
	CHECK(get_power(2, 4) == 16);
	CHECK(get_power(3, 2) == 9);
	CHECK(get_power(3, 3) == 27);
}