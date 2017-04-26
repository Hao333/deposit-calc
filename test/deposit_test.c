#include "../thirdparty/ctest.h"

CTEST(suite2, test1) {
    float result = calc(5000, 3);
    float expected = 5300;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test2) {
    float result = calc(1790, 4);
    float expected = 2004.8;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test3) {
    float result = calc(6130, 1);
    float expected = 5517;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite2, test4) {
    float result = calc(2684, 2);
    float expected = 2737.68;
    ASSERT_EQUAL(expected, result);
}
