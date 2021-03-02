// --------- DON'T TOUCH --------
#include "global.h"
#ifdef RUN_TEST
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#else
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
// ------------------------------


int main() {
    int result = Catch::Session().run();

    // global clean-up...

    return result;
}
#endif