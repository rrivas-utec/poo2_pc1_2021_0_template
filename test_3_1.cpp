//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "filter.h"
using namespace std;

static void pregunta_3() {
#ifdef ENABLE_TEST
    vector vec = {1, 3, 4, 5, 6, 7};
    auto r1 = filter(vec, 5, 2, 4, 10); // r1 == {7, 4, 6}
    for (const auto& item:r1)
        cout << item << " ";
    cout << endl;   // 7 4 6

#endif
}

TEST_CASE("Pregunta #3_1") {
    execute_test("test_3_1.in", pregunta_3);
}