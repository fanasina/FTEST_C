#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "src/test_t/test_t.h"

//#include "src/permutation_t/permutation_t.h"
TEST(size_permutation2){
  printf("another size_permutation2 again\n");
  ASSERT_TRUE(false);
}

TEST(size_permutation)
{
/*
  PERMUTATION_TYPE_CHAR *p = CREATE_PERMUTATION_TYPE_CHAR(3);
  
  printf(" size = %u \n",p->size);
  if(p->size == 3) print_OK_with_msg_endl(" FF yeah GOOD test size passed ");
  else  print_KO_with_msg_endl("NOT GOOD test size not passed ");
*/
  printf("test size_permutation2\n");
}
TEST(size_permutation2){
  printf("another size_permutation2 again false\n");
  bool val_bool = false;
  ASSERT_TRUE(val_bool);
}
TEST(size_permutation2)
{
  printf("test size_permutation2\n");
  bool val_bool = true;
  ASSERT_FALSE(val_bool);
/*
  PERMUTATION_TYPE_CHAR *p = CREATE_PERMUTATION_TYPE_CHAR(3);
  
  printf(" size = %u \n",p->size);
  if(p->size == 3) print_OK_with_msg_endl(" FF yeah GOOD test size passed ");
  else  print_KO_with_msg_endl("NOT GOOD test size not passed ");
*/
}
TEST(size_permutation2){
  printf("another size_permutation2 float\n");
  ASSERT_TRUE(true);
  float a = 1.1;
  float b = 1.1;
  ASSERT_EQ_TYPE_FLOAT(a,b);
  b=1.10001;
  ASSERT_EQ_TYPE_FLOAT(a,b);
  ASSERT_EQ_TYPE_FLOAT(1.2,b);
}
TEST(){
  unsigned char c = 'a';

  printf("another size_permutation2, a = %c\n",c);
  ASSERT_FALSE(true);
  ASSERT_TRUE(true);
  ASSERT_TRUE(true);
}

//END_TEST(size_permutation)

//INIT()


int main(){
  //p_fonction_l=malloc(sizeof(p_fonction_l));
  //init_test();
  
  run_all_tests();

  //run_some_tests(8, 1, 2, 2, 3, 3, 0, 4, 1);
  //run_some_tests(8, 5, 7, 1, 1, 1, 1, 1, 1);
  //run_some_tests_one_by_one(3, 1, 2, 2);
  //run_all_tests_exept(2, 1, 3);
  return 0;
}
