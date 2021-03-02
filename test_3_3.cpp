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
    deque dq = {1, 3, 4, 5, 6, 7, 5, 6, 7, 15, 100, 12};
    auto r3 = filter(dq, 3, 10, 1, 30);
    for (const auto& item:r3)
        std::cout << item << " ";
    std::cout << std::endl;   // 5 4 3
#endif
}

TEST_CASE("Pregunta #3_3") {
    execute_test("test_3_3.in", pregunta_3);
}