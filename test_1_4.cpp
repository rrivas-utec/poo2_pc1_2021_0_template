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
    auto p2 = term{ 3, 4 } + term{ 2, 6 } + term{ 2, 5 };
    cout << p2 << endl; // 3x^4 + 2x^6 + 2x^5;
    auto p3 = p1 + p2;
    cout << p3 << endl; // 1 + 2x^2 + 6x^4 + 2x^6 + 2x^5;
#endif
}

TEST_CASE("Pregunta #1_4") {
    execute_test("test_1_4.in", pregunta_1);
}