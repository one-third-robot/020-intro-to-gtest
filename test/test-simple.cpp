
#include <gtest/gtest.h>

TEST(simple, test) {

    bool var1_bool = false;
    ASSERT_FALSE(var1_bool == true);
    bool var2_bool = true;
    ASSERT_TRUE(var2_bool == true);
    bool var3_bool = false;
    ASSERT_TRUE(var3_bool == true);
    bool var4_bool = true;
    ASSERT_TRUE(var4_bool == true);
}
