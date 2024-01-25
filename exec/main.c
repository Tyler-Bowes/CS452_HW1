#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "deq.h"

int main() {
  // write tess that have different sequences of put, get, ith, and rem
  // test the functions put, get, ith, and rem in deq.c
  int total_tests = 0;
  int tests_passing = 0;
  int tests_failing = 0;
  Deq q=deq_new();

  
  // test 1 empty list length check
  total_tests++;
  if (deq_len(q) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  // test 2 add element length check
  total_tests++;
  deq_head_put(q, "Hello");
  if (deq_len(q) == 1) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  // test 3 get element check
  total_tests++;
  if (strcmp("Hello" , deq_head_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  // test 4 ith element check
  total_tests++;
  deq_head_put(q, "Hello"); //re-add element to the list
  if (strcmp("Hello" , deq_head_ith(q, 0)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  // test 5 rem element check
  total_tests++;
  if (strcmp("Hello" , deq_head_rem(q, "Hello")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  
  // test 6 len after rem check
  total_tests++;
  if (deq_len(q) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  // testing with tail
  // test 7 add element check
  total_tests++;
  deq_tail_put(q, "Hello");
  if (deq_len(q) == 1) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 8 get element check
  total_tests++;
  if (strcmp("Hello" , deq_tail_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 9 ith element check
  total_tests++;
  deq_tail_put(q, "Hello"); //re-add element to the list
  if (strcmp("Hello" , deq_tail_ith(q, 0)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 10 rem element check
  total_tests++;
  if (strcmp("Hello" , deq_tail_rem(q, "Hello")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  //testing with two elements
  // test 11 add element check
  total_tests++;
  deq_tail_put(q, "Hello");
  deq_tail_put(q, "Tail");
  if (deq_len(q) == 2) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 12 get element check
  total_tests++;
  if (strcmp("Tail" , deq_tail_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 13 ith element check index 0
  total_tests++;
  deq_tail_put(q, "Tail"); //re-add element to the list
  if (strcmp("Tail" , deq_tail_ith(q, 0)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 14 ith element check index 1
  total_tests++;
  if (strcmp("Hello" , deq_tail_ith(q, 1)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 15 rem element check
  total_tests++;
  if (strcmp("Tail" , deq_tail_rem(q, "Tail")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }

  //using head
  // test 16 add element check
  total_tests++;
  deq_head_put(q, "Head");
  if (deq_len(q) == 2) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 17 get element check
  total_tests++;
  if (strcmp("Head" , deq_head_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 18 ith element check index 0
  total_tests++;
  deq_head_put(q, "Head"); //re-add element to the list
  if (strcmp("Head" , deq_head_ith(q, 0)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 19 ith element check index 1
  total_tests++;
  if (strcmp("Hello" , deq_head_ith(q, 1)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 20 rem element check
  total_tests++;
  if (strcmp("Head" , deq_head_rem(q, "Head")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  //test 21 rem element check second element
  total_tests++;
  deq_head_put(q, "Head"); //re-add element to the list
  if (strcmp("Hello" , deq_head_rem(q, "Hello")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  
  //testing with three elements
  // test 22 3 element check
  total_tests++;
  deq_tail_put(q, "Hello");
  deq_tail_put(q, "Tail");
  if (deq_len(q) == 3) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 23 get tail check
  total_tests++;
  if (strcmp("Tail" , deq_tail_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 24 get tail after getting tail
  total_tests++;
  if (strcmp("Hello" , deq_tail_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 25 get head check
  total_tests++;
  deq_tail_put(q, "Hello"); //re-add element to the list
  deq_tail_put(q, "Tail");
  if (strcmp("Head" , deq_head_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 26 get head after getting head check
  total_tests++;
  if (strcmp("Hello" , deq_head_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 27 ith head index 0
  total_tests++;
  deq_head_put(q, "Hello"); //re-add element to the list
  deq_head_put(q, "Head");
  if (strcmp("Head" , deq_head_ith(q, 0)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 28 ith head index 1
  total_tests++;
  if (strcmp("Hello" , deq_head_ith(q, 1)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 29 ith head index 2
  total_tests++;
  if (strcmp("Tail" , deq_head_ith(q, 2)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 30 ith tail index 0
  total_tests++;
  if (strcmp("Tail" , deq_tail_ith(q, 0)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 31 ith tail index 1
  total_tests++;
  if (strcmp("Hello" , deq_tail_ith(q, 1)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 32 ith tail index 2
  total_tests++;
  if (strcmp("Head" , deq_tail_ith(q, 2)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 33 rem head on head 
  total_tests++;
  if (strcmp("Head" , deq_head_rem(q, "Head")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 34 get head after rem head on head
  total_tests++;
  if (strcmp("Hello" , deq_head_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 35 rem tail on tail 
  total_tests++;
  deq_head_put(q, "Hello"); //re-add element to the list
  deq_head_put(q, "Head");
  if (strcmp("Tail" , deq_tail_rem(q, "Tail")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 36 get tail after rem tail on tail
  total_tests++;
  if (strcmp("Hello" , deq_tail_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 37 rem tail on head
  total_tests++;
  deq_tail_put(q, "Hello");
  deq_tail_put(q, "Tail");
  if (strcmp("Head" , deq_tail_rem(q, "Head")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 38 get head after rem tail on head
  total_tests++;
  if (strcmp("Hello" , deq_head_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 39 rem head on tail 
  total_tests++;
  deq_head_put(q, "Hello");
  deq_head_put(q, "Head");
  if (strcmp("Tail" , deq_head_rem(q, "Tail")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 40 get tail after rem head on tail
  total_tests++;
  if (strcmp("Hello" , deq_tail_get(q)) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }
  // test 41 rem head on middle
  total_tests++;
  deq_head_put(q, "Hello");
  deq_head_put(q, "Tail");
  if (strcmp("Hello" , deq_head_rem(q, "Hello")) == 0) {
    tests_passing++;
  } else {
    tests_failing++;
  }



  



  char *s=deq_str(q,0);
  printf("%s\n---------------\nTotal tests=%d\nTests passing=%d\nTests failing=%d\n",s, total_tests, tests_passing, tests_failing);
  free(s);


  deq_del(q,0);
  return 0;
}
