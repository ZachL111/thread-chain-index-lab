#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {79, 82, 15, 16, 13};
    assert(score_signal(signal_case_1) == 142);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {63, 81, 20, 23, 7};
    assert(score_signal(signal_case_2) == 49);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {104, 97, 17, 7, 5};
    assert(score_signal(signal_case_3) == 219);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
