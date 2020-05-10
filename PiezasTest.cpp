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

TEST(PiezasTest, FrstTurnXatZeroZero)
{
  Piezas game = Piezas();
  game.dropPiece(0);
  Piece current = game.pieceAt(0,0);
	ASSERT_EQ(current,'X');
}

TEST(PiezasTest, MaxFillColumn1)
{
  Piezas game = Piezas();
  game.dropPiece(0);
  game.dropPiece(0);
  game.dropPiece(0);
  Piece current = game.pieceAt(1,0);
	ASSERT_EQ(current,'X');
}

TEST(PiezasTest, OverFillColumn1)
{
  Piezas game = Piezas();
  game.dropPiece(0);
  game.dropPiece(0);
  game.dropPiece(0);
  game.dropPiece(0);
  Piece current = game.dropPiece(0);
	ASSERT_EQ(current,' ');
}
