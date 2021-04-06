#include <gtest/gtest.h>
#include <string>

using namespace std;

class SensorFilter {
public:
    double        data_;
    static double filter(double);  // this must be a static function
};

double SensorFilter::filter(double in) {
    if (in < -5) {
        return -1.0;
    }
    if (in > 5) {
        return 1.0;
    }
    return in / 5.0;
}

TEST(SensorFilter, filter) {
    // ------------
    double in  = 7;
    double out = SensorFilter::filter(in);
    EXPECT_DOUBLE_EQ(out, 1);
    // ------------
    EXPECT_DOUBLE_EQ(SensorFilter::filter(3), 0.6);
    // EXPECT_NEAR(SensorFilter::filter(3), 0.6, 0.001);
}
