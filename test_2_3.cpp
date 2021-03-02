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
    cout << standard_deviation (0, 0, 0, 0) << endl; // 0
#endif
}

TEST_CASE("Pregunta #2_3") {
    execute_test("test_2_3.in", pregunta_2);
}