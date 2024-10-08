# GTest include code 
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)
# End GTest include code 

# Testing persona library
add_executable(person_test person_test.cc)
target_link_libraries(person_test
 PRIVATE
  GTest::GTest
  person)
add_test(person_gtests person_test)

# Testing product library
add_executable(product_test product_test.cc)
target_link_libraries(product_test
 PRIVATE GTest::GTest product)
add_test(product_gtests product_test)

# Testing tv library
add_executable(tv_test tv_test.cc)
target_link_libraries(tv_test
 PRIVATE GTest::GTest tv)
add_test(tv_gtests tv_test)

# Testing computer library
add_executable(computer_test computer_test.cc)
target_link_libraries(computer_test
 PRIVATE GTest::GTest computer)
add_test(computer_gtests computer_test)

# Testing basket library 1
add_executable(basket_test basket_test.cc)
target_link_libraries(basket_test
 PRIVATE GTest::GTest basket)
add_test(basket_gtests basket_test)

# Testing basket library 2
add_executable(basket_test2 basket_test2.cc)
target_link_libraries(basket_test2
 PRIVATE GTest::GTest basket product tv computer)
add_test(basket_gtests2 basket_test2)

# Testing client library
add_executable(client_test client_test.cc)
target_link_libraries(client_test
 PRIVATE GTest::GTest client person)
add_test(client_gtests client_test)

# Testing seller library
add_executable(seller_test seller_test.cc)
target_link_libraries(seller_test
 PRIVATE GTest::GTest seller person)
add_test(seller_gtests seller_test)

# Testing market library
add_executable(market_test market_test.cc)
target_link_libraries(market_test
 PRIVATE GTest::GTest market basket client market person product seller)
add_test(market_gtests market_test)