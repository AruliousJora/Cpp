#include "../Example.h"
#include "gtest/gtest.h"

TEST(ExampleTests, MAC) { 
    int x = 1;
    int y = 2;
    int sum = 0;
    int oldsum = sum ; // oldsum = sum is the original value;
    EXPECT_EQ(  // check if olsum = sum
        oldsum,
        sum
    );
    int expectedNewSum = oldsum + x * y; // expectedNewSum = oldsum + x*y
    EXPECT_EQ(    // check if the MAC function provides proper output
        expectedNewSum,
        MAC(x, y, sum)
    );
}

TEST(ExampleTests, Square) {
    int a = 5; // a = i
   /* EXPECT_EQ(   // check if a = i
        a, 
        5
    );*/
    int expectedSquare = a * a; //expectedSquare = a*a
    EXPECT_EQ(     // check if the square function works as expected
        expectedSquare,
        Square(a)
    );
}

TEST(ExampleTests, Even) {
    int p = 5;
    int q = p%2;
    int expectedValue = 0;
    if (q == 0){
        EXPECT_EQ(  // check if the number is exevn
            p%2,
            0
        );
        expectedValue = 0;   
    }
    else{
        EXPECT_EQ( // check if the number is odd
            p%2,
            1     // q, 1 in this case
        );
        expectedValue = 1; // expectedValue = 1
    }

    EXPECT_EQ(  // Check if the Even function works properly
        expectedValue,
        Even(p)
    );
}
