#include <gtest/gtest.h>
#include "RETEK.h"

TEST(RETEK_check, test_RETEK){
    EXPECT_EQ(getRadish(), "Retek");
}
