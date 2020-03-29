/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}
// 8 checks (sum = 8)
TEST_CASE("Test replacment of v,g,s,d with w,j,z,t respectively"){
    string text = "gladiators vains shrink in combat";
    CHECK(find(text, "jladiators") == string("gladiators"));
    CHECK(find(text, "zhrink") == string("shrink"));
    CHECK(find(text, "wains") == string("vains"));
    CHECK(find(text, "combad") == string("combat"));
    CHECK(find(text, "glatiadors") == string("gladiators"));
    CHECK(find(text, "vainz") == string("vains"));
    CHECK(find(text, "glatiatorz") == string("gladiators"));
    CHECK(find(text, "jlatiatorz") == string("gladiators"));
  
}
//10 checks (sum = 18)
TEST_CASE("Test replacment of o,i with u,y respectively"){
    string text = "why are you inside";
    CHECK(find(text, "why") == string("why"));
    CHECK(find(text, "whi") == string("why"));
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "iou") == string("you"));
    CHECK(find(text, "yuu") == string("you"));
    CHECK(find(text, "iuu") == string("you"));
    CHECK(find(text, "ynside") == string("inside"));
    CHECK(find(text, "ynsyde") == string("inside"));
    CHECK(find(text, "insyde") == string("inside"));
    CHECK(find(text, "inside") == string("inside"));
}
//14 checks (sum = 32)
TEST_CASE("Test replacment of b with f & p"){
    string text = "what a perfect backflip";
    CHECK(find(text, "perfect") == string("perfect"));
    CHECK(find(text, "ferfect") == string("perfect"));
    CHECK(find(text, "berfect") == string("perfect"));
    CHECK(find(text, "perpect") == string("perfect"));
    CHECK(find(text, "perbect") == string("perfect"));
    CHECK(find(text, "berpect") == string("perfect"));
    CHECK(find(text, "ferbect") == string("perfect"));
    CHECK(find(text, "packflip") == string("backflip"));
    CHECK(find(text, "backplip") == string("backflip"));
    CHECK(find(text, "packplip") == string("backflip"));
    CHECK(find(text, "backblib") == string("backflip"));
    CHECK(find(text, "backflif") == string("backflip"));
    CHECK(find(text, "fackblip") == string("backflip"));
    CHECK(find(text, "fackplib") == string("backflip"));


}

//12 checks (sum = 44)
TEST_CASE("Test replacment of c with k & q"){
    string text = "drive your car to the backstage";
      CHECK(find(text, "kar") == string("car"));
      CHECK(find(text, "qar") == string("car"));
      CHECK(find(text, "car") == string("car"));
      CHECK(find(text, "bakkstage") == string("backstage"));
      CHECK(find(text, "baccstage") == string("backstage"));
      CHECK(find(text, "baqqstage") == string("backstage"));
      CHECK(find(text, "baqkstage") == string("backstage"));
      CHECK(find(text, "bacqstage") == string("backstage"));
      CHECK(find(text, "baqcstage") == string("backstage"));
      CHECK(find(text, "bakcstage") == string("backstage"));
      CHECK(find(text, "backstage") == string("backstage"));
      CHECK(find(text, "bakqstage") == string("backstage"));

}


//17 checks (sum = 61)
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Youll Never Walk Alone";
          CHECK(find(text, "youll") == string("Youll"));
          CHECK(find(text, "YouLl") == string("Youll"));
          CHECK(find(text, "YOUll") == string("Youll"));
          CHECK(find(text, "YouLL") == string("Youll"));
          CHECK(find(text, "NEVER") == string("Never"));
          CHECK(find(text, "never") == string("Never"));
          CHECK(find(text, "nEvEr") == string("Never"));
          CHECK(find(text, "NeVeR") == string("Never"));
          CHECK(find(text, "nEver") == string("Never"));
          CHECK(find(text, "wAlK") == string("Walk"));
          CHECK(find(text, "WaLk") == string("Walk"));
          CHECK(find(text, "WALK") == string("Walk"));
          CHECK(find(text, "wAlK") == string("Walk"));
          CHECK(find(text, "alone") == string("Alone"));
          CHECK(find(text, "AlOnE") == string("Alone"));
          CHECK(find(text, "AlONE") == string("Alone"));
          CHECK(find(text, "ALONE") == string("Alone"));

}
//14 checks (sum = 74)
TEST_CASE("Test replacement of lower and upper case and the change of letters w,b with v & f respectivly"){
string text = "snowboards ARE fUn";
  CHECK(find(text, "sNowboards") == string("snowboards"));
  CHECK(find(text, "snowFoards") == string("snowboards"));
  CHECK(find(text, "snOwpoardS") == string("snowboards"));
  CHECK(find(text, "SNOVboards") == string("snowboards"));
  CHECK(find(text, "snoVFoards") == string("snowboards"));
  CHECK(find(text, "sNowboARds") == string("snowboards"));
  CHECK(find(text, "snowPoards") == string("snowboards"));
  CHECK(find(text, "SNOVFOARDS") == string("snowboards"));
  CHECK(find(text, "aRe") == string("ARE"));
  CHECK(find(text, "FUn") == string("fUn"));
  CHECK(find(text, "BUn") == string("fUn")); 
  CHECK(find(text, "PUn") == string("fUn"));
  CHECK(find(text, "PUN") == string("fUn"));
  CHECK(find(text, "BuN") == string("fUn"));
  


}

//15 checks (sum = 89)
TEST_CASE("Test replacement of lower and upper case and the change of letters d,o,i with t,u & y respectivly"){
string text = "aDoRiNg mySelf is A must";
  CHECK(find(text, "aDURiNg") == string("aDoRiNg"));
  CHECK(find(text, "atURiNg") == string("aDoRiNg"));
  CHECK(find(text, "aDoRYNg") == string("aDoRiNg"));
  CHECK(find(text, "aTURYNg") == string("aDoRiNg"));
  CHECK(find(text, "atoRYng") == string("aDoRiNg"));
  CHECK(find(text, "ADURYNG") == string("aDoRiNg"));
  CHECK(find(text, "aduring") == string("aDoRiNg"));
  CHECK(find(text, "adoRYNg") == string("aDoRiNg"));
  CHECK(find(text, "mYSelf") == string("mySelf"));
  CHECK(find(text, "miSelf") == string("mySelf"));
  CHECK(find(text, "mISelf") == string("mySelf"));
  CHECK(find(text, "musT") == string("must"));
  CHECK(find(text, "musD") == string("must"));
  CHECK(find(text, "mUsD") == string("must"));
  CHECK(find(text, "MUSd") == string("must"));

}
//11 checks (sum = 100)
TEST_CASE("Checking all of the cases"){
string text = "DONT worry Be HaPPy cgs";
  CHECK(find(text, "tONT") == string("DONT"));
  CHECK(find(text, "TOND") == string("DONT"));
  CHECK(find(text, "tONd") == string("DONT"));
  CHECK(find(text, "vorrY") == string("worry"));
  CHECK(find(text, "woRRy") == string("worry"));
  CHECK(find(text, "VUrrI") == string("worry"));
  CHECK(find(text, "fe") == string("Be"));
  CHECK(find(text, "HabPi") == string("HaPPy"));
  CHECK(find(text, "HAFFy") == string("HaPPy"));
  CHECK(find(text, "habpy") == string("HaPPy"));
  CHECK(find(text, "CgZ") == string("cgs"));
  CHECK(find(text, "CJs") == string("cgs"));

}