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
    cout << standard_deviation (10, 13, 14, 15) << endl; // 1.87083 aprox.
#endif
}

TEST_CASE("Pregunta #2_2") {
    execute_test("test_2_2.in", pregunta_2);
}