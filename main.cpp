// This tells Catch to provide a main() - only do this in one cpp file
#include "global.h"

#ifdef RUN_TEST

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#else

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int main( int argc, char* argv[] ) {

//    int result = Catch::Session().run( argc, argv );

    // global clean-up...

//    return result;
    return 0;
}

#endif