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
    forward_list<int> fwd_lst = {1, 3, 4, 5, 6, 7};
    auto r3 = filter(fwd_lst, 3, 2, 1); // r3 == {5, 4, 3}.
    for (const auto& item:r3)
        std::cout << item << " ";
    std::cout << std::endl;   // 5 4 3
#endif
}

TEST_CASE("Pregunta #3_4") {
    execute_test("test_3_4.in", pregunta_3);
}