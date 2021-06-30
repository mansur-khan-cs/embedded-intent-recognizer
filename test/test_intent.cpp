#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Intent.h"

TEST_CASE( "RecognizeIntent") {
    Intent intent;  

    SECTION("Should get weather intent"){
        std::vector<std::string> v = {"What", "is", "the", "weather", "like", "today?"};
        intent.setIntent(v);
        REQUIRE( intent.recognize() ==  "Intent: Get Weather");
    }
    SECTION("Should get weather intent in city(Paris)"){
        std::vector<std::string> v = {"What", "is", "the", "weather", "like", "in", "Paris", "today?"};
        intent.setIntent(v);
        REQUIRE( intent.recognize() ==  "Intent: Get Weather City");
    }
    SECTION("Should get weather intent in city(Frankfurt)"){
        std::vector<std::string> v = {"What", "is", "the", "weather", "like", "in", "Frankfurt", "today?"};
        intent.setIntent(v);
        REQUIRE( intent.recognize() ==  "Intent: Get Weather City");
    }
    SECTION("Should get weather intent in city(Berlin)"){
        std::vector<std::string> v = {"What", "is", "the", "weather", "like", "in", "Berlin", "today?"};
        intent.setIntent(v);
        REQUIRE( intent.recognize() ==  "Intent: Get Weather City");
    }      
    SECTION("Should get fact intent"){
        std::vector<std::string> v = {"Tell", "me", "an", "interesting", "fact"};
        intent.setIntent(v);
        REQUIRE( intent.recognize() ==  "Intent: Get Fact");
    }        
}