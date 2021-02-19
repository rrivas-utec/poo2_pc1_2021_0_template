//
// Created by rudri on 10/11/2020.
//

#include "global.h"
#include "filter.h"

using namespace std;

void pregunta_3() {
#ifdef ENABLE_TEST
    // Ejemplo #1:
    std::vector vec = {1, 3, 4, 5, 6, 7};
    auto r1 = filter(vec, 5, 2, 4, 10); // r1 == {7, 4, 6}
    // Ejemplo #2:
    std::list lst = {1, 3, 4, 5};
    auto r2 = filter(lst, 2, 0, -1); // r2 == {4, 1}.
    // Ejemplo #1:
    std::forward_list fwd_lst = {1, 3, 4, 5, 6, 7};
    auto r3 = filter(fwd_lst, 3, 2, 1); // r3 == {5, 4, 3}.
#endif
}