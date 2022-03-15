#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int x = left - right;
    x = x * x;
    return x;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    return 0;
  }

  // Task 3
  int max3(int left, int middle, int right) {
      int x = right;
        if (x < middle) {
          x = middle;
      }
      if (x < left) {
        x = left;
      }
    return x;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    return ;
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (length <= 0) {
      return 0;
    }if (arr == nullptr) {
      return 0;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum = sum + arr[i];
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
