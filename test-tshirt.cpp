#include <assert.h>
#include <iostream>
#include "./tshirts.h"
#include "./test-tshirt.h"
void testTshirt() {
  assert(size(37) == 'S');
  assert(size(40) == 'M');
  assert(size(43) == 'L');
  assert(size(38) == 'M');
  assert(size(42) == 'L');
  std::cout << "All is well (maybe!)\n";
}
