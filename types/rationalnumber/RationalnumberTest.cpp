/**
 * @author  : kriita (thordask@gmail.com)
 * @file    : RationalNumberTest.cpp
 */

#include "gtest/gtest.h"
#include "rationalnumber.h"

TEST(RationalNumberTest, Constructor) {
    RationalNumber rn;
    EXPECT_EQ(rn.getNumerator(), 0);
    EXPECT_EQ(rn.getDenominator(), 1);
}

TEST(RationalNumberTest, ConstructorWithValues) {
    RationalNumber rn(1, 2);
    EXPECT_EQ(rn.getNumerator(), 1);
    EXPECT_EQ(rn.getDenominator(), 2);
}

TEST(RationalNumberTest, Addition) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    RationalNumber result = rn1 + rn2;
    EXPECT_EQ(result.getNumerator(), 5);
    EXPECT_EQ(result.getDenominator(), 6);
}

TEST(RationalNumberTest, Subtraction) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    RationalNumber result = rn1 - rn2;
    EXPECT_EQ(result.getNumerator(), 1);
    EXPECT_EQ(result.getDenominator(), 6);
}

TEST(RationalNumberTest, Multiplication) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    RationalNumber result = rn1 * rn2;
    EXPECT_EQ(result.getNumerator(), 1);
    EXPECT_EQ(result.getDenominator(), 6);
}

TEST(RationalNumberTest, Division) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    RationalNumber result = rn1 / rn2;
    EXPECT_EQ(result.getNumerator(), 3);
    EXPECT_EQ(result.getDenominator(), 2);
}

TEST(RationalNumberTest, GreaterThan) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    EXPECT_TRUE(rn1 > rn2);
}

TEST(RationalNumberTest, LessThan) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    EXPECT_FALSE(rn1 < rn2);
}

TEST(RationalNumberTest, GreaterThanOrEqual) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    EXPECT_TRUE(rn1 >= rn2);
}

TEST(RationalNumberTest, LessThanOrEqual) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    EXPECT_FALSE(rn1 <= rn2);
}

TEST(RationalNumberTest, Equal) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    EXPECT_FALSE(rn1 == rn2);
}

TEST(RationalNumberTest, NotEqual) {
    RationalNumber rn1(1, 2);
    RationalNumber rn2(1, 3);
    EXPECT_TRUE(rn1 != rn2);
}

TEST(RationalNumberTest, Simplify) {
    RationalNumber rn(2, 4);
    EXPECT_EQ(rn.getNumerator(), 1);
    EXPECT_EQ(rn.getDenominator(), 2);
}

TEST(RationalNumberTest, SimplifyNegative) {
    RationalNumber rn(-2, 4);
    EXPECT_EQ(rn.getNumerator(), -1);
    EXPECT_EQ(rn.getDenominator(), 2);
}

TEST(RationalNumberTest, SimplifyNegativeDenominator) {
    RationalNumber rn(2, -4);
    EXPECT_EQ(rn.getNumerator(), -1);
    EXPECT_EQ(rn.getDenominator(), 2);
}

TEST(RationalNumberTest, SimplifyNegativeBoth) {
    RationalNumber rn(-2, -4);
    EXPECT_EQ(rn.getNumerator(), 1);
    EXPECT_EQ(rn.getDenominator(), 2);
}

TEST(RationalNumberTest, Output) {
    RationalNumber rn(1, 2);
    std::stringstream ss;
    ss << rn;
    EXPECT_EQ(ss.str(), "1 / 2");
}

TEST(RationalNumberTest, Input) {
    RationalNumber rn;
    std::stringstream ss("1 2");
    ss >> rn;
    EXPECT_EQ(rn.getNumerator(), 1);
    EXPECT_EQ(rn.getDenominator(), 2);
}

