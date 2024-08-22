#include <assert.h>
#include <iostream>
#include "./tshirts.h"
#include "./test-tshirt.h"
void testTshirtSize() {
  assert(tshirtSize(37) == 'S');
  assert(tshirtSize(40) == 'M');
  assert(tshirtSize(43) == 'L');
  assert(tshirtSize(38) == 'M');
  assert(tshirtSize(42) == 'L');
  std::cout << "All is well (maybe!)\n";
}
