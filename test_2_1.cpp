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
    cout << standard_deviation (1, 3, 4, 1, 20) << endl; // 7.19444 aprox.
#endif
}

TEST_CASE("Pregunta #2_1") {
    execute_test("test_2_1.in", pregunta_2);
}