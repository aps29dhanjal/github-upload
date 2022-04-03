#include "../unity/unity.h"
#include "../unity/unity.c"
#include "../unity/unity_internals.h"

#include "../src/win.c"
#include"../inc/functions.h"
#include<stdio.h>


#define PROJECT_NAME    "Tic_tac_toe"

/* Prototypes for all the test functions */
void test_win(void);
void test_draw(void);
void test_move_pending(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_win);
  RUN_TEST(test_draw);
  RUN_TEST(test_move_pending);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_win(void) {
char square[10]={'o','X','X','X'
                    ,'O','O','X',
                     'X','O','O'};
                     //win check
  TEST_ASSERT_EQUAL(1, checkWin(square));
}
void test_draw(void){
char square1[10]={'o','X','X','O'
                    ,'O','O','X',
                     'X','O','O'};
                     //draw check
TEST_ASSERT_EQUAL(0, checkWin(square1));
}
void test_move_pending(void){
char square2[10]={'o','X','X','O'
                    ,'O','5','X',
                     'X','O','O'};
                     //move pending check
 TEST_ASSERT_EQUAL(-1, checkWin(square2));
}
