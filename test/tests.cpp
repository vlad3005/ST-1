// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, checkPrime1) {
  EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime2) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime3) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime4) {
  EXPECT_TRUE(checkPrime(13));
}

TEST(st1, checkPrime5) {
  EXPECT_FALSE(checkPrime(15));
}

TEST(st1, nPrime1) {
  EXPECT_EQ(nPrime(1), 2);
}

TEST(st1, nPrime2) {
  EXPECT_EQ(nPrime(2), 3);
}

TEST(st1, nPrime3) {
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st1, nPrime4) {
  EXPECT_EQ(nPrime(10), 29);
}

TEST(st1, nextPrime1) {
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(st1, nextPrime2) {
  EXPECT_EQ(nextPrime(4), 5);
}

TEST(st1, nextPrime3) {
  EXPECT_EQ(nextPrime(17), 19);
}

TEST(st1, sumPrime1) {
  EXPECT_EQ(sumPrime(2), 0);
}

TEST(st1, sumPrime2) {
  EXPECT_EQ(sumPrime(3), 2);
}

TEST(st1, sumPrime3) {
  EXPECT_EQ(sumPrime(5), 5);
}

TEST(st1, sumPrime4) {
  EXPECT_EQ(sumPrime(10), 17);
}
