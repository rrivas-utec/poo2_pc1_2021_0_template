//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "standard_deviation.h"
using namespace std;

static void pregunta_2() {
#ifdef ENABLE_TEST
    cout << standard_deviation (10) << endl; // 0
#endif
}

TEST_CASE("Pregunta #2_4") {
    execute_test("test_2_4.in", pregunta_2);
}