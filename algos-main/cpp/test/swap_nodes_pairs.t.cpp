/*
algos by Alfonso Gonzalez
https://github.com/alfonsogonzalez/algos
https://www.youtube.com/c/AlfonsoGonzalezSpaceEngineering

Tests of swap_nodes_pairs function
*/
#include "../swap_nodes_pairs.hpp"

// Google testing library
#include <gtest/gtest.h>

TEST( SwapNodesPairs, FunctionBasicUsage ) {
  ListNode node4( 4 );
  ListNode node3( 3, &node4 );
  ListNode node2( 2, &node3 );
  ListNode node1( 1, &node2 );

  swap_nodes_pairs( &node1 );

  EXPECT_EQ( node1.val, 2 );
  EXPECT_EQ( node2.val, 1 );
  EXPECT_EQ( node3.val, 4 );
  EXPECT_EQ( node4.val, 3 );
  EXPECT_EQ( node4.next, nullptr );
}

int main( int argc, char **argv ) {
  ::testing::InitGoogleTest( &argc, argv );
  return RUN_ALL_TESTS();
}