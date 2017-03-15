// This tells Catch to provide a main() - only do this in one cpp file
// CTestと組み合わせる場合どこまで必要なのかな
// add_executableしてるので多分全部に対して必要。
#define CATCH_CONFIG_MAIN

#include <catch.hpp>
#include <math.hpp>

using namespace Math;

// [factorial] ってなんやねん
TEST_CASE("Factorials are computed", "[factorial]") {
  REQUIRE(Factorial(1) == 0);
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("Hoge#Fuga returns 3", "hoge?") {
  REQUIRE(Hoge::Fuga() == 3);
}
