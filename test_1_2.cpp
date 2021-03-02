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
    auto p2 = term{ 3, 4 } + term{ 2, 6 } + term{ 2, 5 };
    cout << p2 << endl; // 3x^4 + 2x^6 + 2x^5
#endif
}

TEST_CASE("Pregunta #1_2") {
    execute_test("test_1_2.in", pregunta_1);
}