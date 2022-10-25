// basket_test.cc: Juan A. Romero
// Testing class Basket

#include "gtest/gtest.h"
#include "basket.h"
#include "product.h"
#include "tv.h"
#include "computer.h"

TEST(Basket, ZeroProducts) {
  Basket b("B1");
  EXPECT_EQ(0, b.get_size());
}

TEST(Basket, AddProduct) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  Product *p= new Product("XX1");
  b.add_product(*p);
  delete p;
  EXPECT_EQ(4, b.get_size());
}

TEST(Basket, AddMoreProducts) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  Tv t1("Tv1");
  Computer c1("C1", ComputerType::Server);
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  b.add_product(t1);
  b.add_product(c1);
  b.add_product(p2);
  b.add_product(p3);
  Product *p= new Product("XX1");
  b.add_product(*p);
  delete p;
  EXPECT_EQ(6, b.get_size());
}

TEST(Basket, DeleteProductsP) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  Tv t1("Tv1");
  Computer c1("C1", ComputerType::Server);
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  b.add_product(t1);
  b.add_product(c1);
  b.add_product(p2);
  b.add_product(p3);
  Product *p= new Product("XX1");
  b.add_product(*p);
  delete p;
  EXPECT_EQ(6, b.get_size());
  b.delete_product(p3); // decrementa en 1 catidad de p3 (queda 1)
  EXPECT_EQ(6, b.get_size());
  b.delete_product(p3); // Ahora p3 ya sale de la cesta
  EXPECT_EQ(5, b.get_size());
  b.delete_product(t1); 
  EXPECT_EQ(4, b.get_size());
}

TEST(Basket, DeleteProductsId) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  Tv t1("Tv1");
  Computer c1("C1", ComputerType::Server);
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  b.add_product(t1);
  b.add_product(c1);
  b.add_product(p2);
  b.add_product(p3);
  Product *p= new Product("XX1");
  b.add_product(*p);
  delete p;
  EXPECT_EQ(6, b.get_size());
  b.delete_product("P3"); // decrementa en 1 catidad de p3 (queda 1)
  EXPECT_EQ(6, b.get_size());
  b.delete_product("P3"); // Ahora p3 ya sale de la cesta
  EXPECT_EQ(5, b.get_size());
  b.delete_product("Tv1"); 
  EXPECT_EQ(4, b.get_size());
}

TEST(Basket, DeleteProductsNoId) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  b.add_product(p1);
  b.add_product(p2);
  EXPECT_EQ(2, b.get_size());
  EXPECT_FALSE(b.delete_product(p3));
  EXPECT_EQ(2, b.get_size());
  EXPECT_FALSE(b.delete_product("P5"));
  EXPECT_EQ(2, b.get_size());
  EXPECT_FALSE(b.delete_product("XX"));
  EXPECT_EQ(2, b.get_size());  
  EXPECT_TRUE(b.delete_product("P1"));
  EXPECT_EQ(1, b.get_size());  
  EXPECT_TRUE(b.delete_product("P2"));
  EXPECT_EQ(0, b.get_size()); 
}

TEST(Basket, AddAndDeleteProducts) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  Tv t1("Tv1");
  Computer c1("C1", ComputerType::Server);
  std::vector<std::string> v;
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_EQ(3, b.get_size());
  b.delete_product(p3);
  EXPECT_EQ(2, b.get_size());
  b.add_product(t1);
  b.add_product(c1);
  EXPECT_EQ(4, b.get_size());
  b.delete_product(t1);
  b.delete_product(c1);
  EXPECT_EQ(2, b.get_size());
  b.delete_product(p1);
  b.delete_product(p2);
  EXPECT_EQ(0, b.get_size());
}

TEST(Basket, BasketTotalZero) {
  Basket b("B1");
  Product p1("P1"), p2("P2"), p3("P3");
  EXPECT_FLOAT_EQ(0.0,b.get_total());
}

TEST(Basket, BasketTotal) {
  Basket b("B1");
  Product p1("P1", "Product 1", 100.5);
  Product p2("P2", "Product 2", 200.5);
  Product p3("P3", "Product 3", 300.5);
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_FLOAT_EQ(601.5,b.get_total());
}

TEST(Basket, BasketTotalDelete) {
  Basket b("B1");
  Product p1("P1", "Product 1", 100.5);
  Product p2("P2", "Product 2", 200.5);
  Product p3("P3", "Product 3", 300.5);
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_FLOAT_EQ(601.5,b.get_total());
  b.delete_product(p3);
  EXPECT_FLOAT_EQ(301.0,b.get_total());
  b.delete_product(p2);
  EXPECT_FLOAT_EQ(100.5,b.get_total());
  b.delete_product(p1);
  EXPECT_FLOAT_EQ(0.0,b.get_total());
}

TEST(Basket, BasketTotalDeleteQuantities) {
  Basket b("B1");
  Product p1("P1", "Product 1", 100.5);
  Product p2("P2", "Product 2", 200.5);
  Product p3("P3", "Product 3", 300.5);
  b.add_product(p1);
  b.add_product(p2);
  b.add_product(p3);
  EXPECT_FLOAT_EQ(601.5,b.get_total());

  b.add_product(p1);
  EXPECT_FLOAT_EQ(702.0,b.get_total());
  b.add_product(p1);
  EXPECT_FLOAT_EQ(802.5,b.get_total());


  b.delete_product(p1);
  EXPECT_FLOAT_EQ(702.0,b.get_total());
  b.delete_product(p1);
  EXPECT_FLOAT_EQ(601.5,b.get_total());
  b.delete_product(p1);
  EXPECT_FLOAT_EQ(501.0,b.get_total());
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}