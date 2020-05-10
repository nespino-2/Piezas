/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"

class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(PiezasTest, NumberOfRows)
{
  Piezas game = Piezas();
  int actualRow = (int)game.board.size();
	ASSERT_EQ(3, actualRows);
}

TEST(PiezasTest, NumberOfColumsRow1)
{
  Piezas game = Piezas();
  int actualColsR1 = (int)game.board[0].size();
	ASSERT_EQ(4, actualColsR1);
}

TEST(PiezasTest, NumberOfColumsRow2)
{
  Piezas game = Piezas();
  int actualColsR2 = (int)game.board[1].size();
	ASSERT_EQ(4, actualColsR2);
}


TEST(PiezasTest, NumberOfColumsRow2)
{
  Piezas game = Piezas();
  int actualColsR3 = (int)game.board[2].size();
	ASSERT_EQ(4, actualColsR3);
}
