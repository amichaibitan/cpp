#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

/* 
hat:
 */

 CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));

  CHECK(nospaces(snowman(21111111)) == nospaces(" ___ \n.....\n(.,.)\n<( : )>\n( : )"));

/*
Nose
*/

CHECK(nospaces(snowman(12111111)) == nospaces("_===_\n(...)\n<( : )>\n( : )"));

CHECK(nospaces(snowman(13111111)) == nospaces("_===_\n(._.)\n<( : )>\n( : )"));
    
 /*
 left eye
 */
 CHECK(nospaces(snowman(11211111)) == nospaces("_===_\n(o,.)\n<( : )>\n( : )"));
 CHECK(nospaces(snowman(14111111)) == nospaces("_===_\n(-,.)\n<( : )>\n( : )"));

 /* 
right eye:
 */

 CHECK(nospaces(snowman(11131111)) == nospaces("_===_\n(.,O)\n<( : )>\n( : )"));
 CHECK(nospaces(snowman(11121111)) == nospaces("_===_\n(.,O)\n<( : )>\n( : )"));

/*
left hand
*/
 CHECK(nospaces(snowman(11112111)) == nospaces("_===_\n\\(.,O)\n( : )>\n( : )"));
 CHECK(nospaces(snowman(11113111)) == nospaces("_===_\n/(.,O)\n( : )>\n( : )"));
    

/* 
right hand
 */

 CHECK(nospaces(snowman(11111311)) == nospaces("_===_\n(.,.)/\n<( : )\n( : )"));
 CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n<( : ) \n( : )")); 
    /* Add more checks here */
/* 
torso:
 */

 CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n<(] [)>\n( : )"));
 CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n(.,.)\n<(> <)>\n( : )"));
 CHECK(nospaces(snowman(11111141)) == nospaces("_===_\n(.,.)\n<(   )>\n( : )"));

/* 
base:
 */

 CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n<( : )>\n("" "")"));
 CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n(.,.)\n<( : )>\n(___)"));
 CHECK(nospaces(snowman(11111141)) == nospaces("_===_\n(.,.)\n<( : )>\n(   )"));

}

TEST_CASE("Bad snowman code") {
    /*
    less numbers:
    */
    CHECK_THROWS(snowman(123));
     CHECK_THROWS(snowman(12344)); 
     CHECK_THROWS(snowman(123124));
     /*
    out of bound:
    */
    CHECK_THROWS(snowman(1222222223));
     CHECK_THROWS(snowman(1234444444)); 
     CHECK_THROWS(snowman(1231212341));

      /*
    wrong numbers:
    */
     CHECK_THROWS(snowman(23234578));
     CHECK_THROWS(snowman(12312399)); 
     CHECK_THROWS(snowman(66123412));
    


    /* Add more checks here */
}