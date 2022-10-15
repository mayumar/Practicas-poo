# CMake generated Testfile for 
# Source directory: /home/mayumar/Escritorio/practicaspoo/marketplace/tests
# Build directory: /home/mayumar/Escritorio/practicaspoo/marketplace/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(person_gtests "person_test")
set_tests_properties(person_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;20;add_test;/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;0;")
add_test(product_gtests "product_test")
set_tests_properties(product_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;26;add_test;/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;0;")
add_test(tv_gtests "tv_test")
set_tests_properties(tv_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;32;add_test;/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;0;")
add_test(computer_gtests "computer_test")
set_tests_properties(computer_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;38;add_test;/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;0;")
add_test(basket_gtests "basket_test")
set_tests_properties(basket_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;44;add_test;/home/mayumar/Escritorio/practicaspoo/marketplace/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
