#include "../thirdparty/ctest.h"

CTEST(suite1, test1) {
    int result = chooseSrok(241);
    int expected = 4;
    ASSERT_EQUAL(expected, result);
    cout<<"Vvedeno dney vklada 241, vibran 4 paket uslug";
}

CTEST(suite1, test2) {
    int result = chooseSrok(157);
    int expected = 3;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite1, test3) {
    int result = chooseSrok(25);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(suite1, test4) {
    int result = chooseSrok(69);
    int expected = 2;
    ASSERT_EQUAL(expected, result);
}
