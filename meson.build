project('gtest-demo', ['cpp'],
    version: '0.1.0',
    meson_version: '>=0.56',
    default_options: [
        'c_std=gnu18',
        'cpp_std=gnu++2a',
        'werror=true',
        'optimization=g',
        'warning_level=2',
        'b_sanitize=address,undefined',
    ]
)

libgtest = dependency('gtest', main : true, required : false)

# ----------------------------
test_simple = executable(
    'test-simple',
    'test/test-simple.cpp',
    dependencies: libgtest,
)
test('a simple test', test_simple)

# ----------------------------
test_class1 = executable(
    'test-class1',
    'test/test-class1.cpp',
    dependencies: libgtest,
)
test('a simple test with class 1', test_class1)

# ----------------------------
test_class2 = executable(
    'test-class2',
    'test/test-class2.cpp',
    dependencies: libgtest,
)
test('a simple test with class 2', test_class2)
