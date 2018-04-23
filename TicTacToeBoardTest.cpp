/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
*/
TEST(TicTacToeBoardTest, SmokeTest)
{
	TicTacToeBoard obj;
	ASSERT_TRUE( true );
}

TEST(TicTacToeBoardTest, ToggleTurnTest)
{
	TicTacToeBoard obj;
	ASSERT_TRUE( obj.toggleTurn() == 'O');
	ASSERT_TRUE( obj.toggleTurn() == 'X');
}

TEST(TicTacToeBoardTest, ValidPLacement)
{
	TicTacToeBoard obj;
	ASSERT_TRUE( obj.placePiece(0,0) == 'X' );
	ASSERT_TRUE( obj.placePiece(2,2) == 'O' );
}

TEST(TicTacToeBoardTest, InvalidPlacement)
{
	TicTacToeBoard obj;
	ASSERT_TRUE( obj.placePiece(3,3) == '?' );
}

TEST(TicTacToeBoardTest, InvalidGetPiece)
{
	TicTacToeBoard obj;
	ASSERT_TRUE( obj.getPiece(3,3) == '?' );
}

TEST(TicTacToeBoardTest, ValidGetPiece)
{
	TicTacToeBoard obj;
	ASSERT_TRUE( obj.placePiece(0,0) == 'X');
	ASSERT_TRUE( obj.getPiece(0,0) == 'X');
}