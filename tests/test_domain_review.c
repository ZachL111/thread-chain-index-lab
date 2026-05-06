#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {68, 49, 31, 79};
    assert(domain_review_score(item) == 171);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
