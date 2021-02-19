//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "global.h"
#include "redirect_io.h"
using namespace std;

TEST_CASE("Pregunta #1") {
#ifdef RUN_TEST
    execute_test("test_2.in", pregunta_1);
#endif
}