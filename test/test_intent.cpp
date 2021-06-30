#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Intent.h"

TEST_CASE( "RecognizeIntent") {
      

    SECTION("Should get weather intent"){
        std::vector<std::string> v = {"What", "is", "the", "weather", "like", "today?"};
        Intent intent(v);
        REQUIRE( intent.recognize() ==  "Intent: Get Weather");
    }      
}