//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "polynomial.h"
using namespace std;

static void pregunta_1() {
#ifdef ENABLE_TEST
    polynomial p1 = term{ 1, 0 } + term{ 2, 2 } + term{ 2, 4 };
    cout << p1 << endl; // 1 + 2x^2 + 2x^4;
#endif
}

TEST_CASE("Pregunta #1_1") {
    execute_test("test_1_1.in", pregunta_1);
}