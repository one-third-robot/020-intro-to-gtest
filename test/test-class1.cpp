#include <gtest/gtest.h>
#include <string>

using namespace std;

class TestMap : public testing::Test {
public:
    static void SetupTestCase() {
        cout << "SetupTestCase" << endl;
    }
    static void TearDownTestCase() {
        cout << "TearDownTestCase" << endl;
    }
    virtual void SetUp() {
        cout << "SetUp" << endl;
        test_map.insert(make_pair(1, 0));
        test_map.insert(make_pair(2, 1));
        test_map.insert(make_pair(3, 2));
        test_map.insert(make_pair(4, 3));
        test_map.insert(make_pair(5, 4));
    }
    virtual void TearDown() {
        cout << "TearDown" << endl;
        test_map.clear();
    }
    map<int, int> test_map;
};

TEST_F(TestMap, Find) {
    map<int, int>::iterator it = test_map.find(1);
    ASSERT_NE(it, test_map.end());
}

TEST_F(TestMap, Size) {
    ASSERT_EQ(test_map.size(), 5);
}
