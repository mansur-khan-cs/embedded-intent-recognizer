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
}