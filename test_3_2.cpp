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
    list lst = {1, 3, 4, 5};
    auto r2 = filter(lst, 2, 0, -1); // r2 == {4, 1}.
    for (const auto& item:r2)
        cout << item << " ";
    cout << std::endl;   // 4 1
#endif
}

TEST_CASE("Pregunta #3_2") {
    execute_test("test_3_2.in", pregunta_3);
}