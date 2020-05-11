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

TEST(PiezasTest, CheckInvalid)
{
  Piezas game = Piezas();
  Piece chkInvalid = game.dropPiece(4);
	ASSERT_EQ(chkInvalid,'?');
}

TEST(PiezasTest, CheckColumn1)
{
  Piezas game = Piezas();
  game.dropPiece(0);
  game.dropPiece(0);
  game.dropPiece(0);
  Piece current = game.pieceAt(2,0);
	ASSERT_EQ(current,'X');
}

TEST(PiezasTest, CheckReset)
{
  Piezas game = Piezas();
  game.dropPiece(2);
  game.dropPiece(2);
  game.reset();
  Piece current = game.pieceAt(1,2);
	ASSERT_EQ(current,' ');
}
