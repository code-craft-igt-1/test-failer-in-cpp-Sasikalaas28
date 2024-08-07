#include <assert.h>
#include <cstring>
#include <iostream>
#include <sstream>
#include "./misaligned.h"
#include "./tshirts.h"
#include "./weatherreport.h"
#include "./test-colormap.h"

void testPrintColorMap() {
    std::string result = printColorMap();
    std::string buffer;
    buffer = "     ColorPairNumber   |      MajorColor   |      MinorColor\n"
             "                   1   |           White   |            Blue\n"
             "                   2   |           White   |          Orange\n"
             "                   3   |           White   |           Green\n"
             "                   4   |           White   |           Brown\n"
             "                   5   |           White   |           Slate\n"
             "                   6   |             Red   |            Blue\n"
             "                   7   |             Red   |          Orange\n"
             "                   8   |             Red   |           Green\n"
             "                   9   |             Red   |           Brown\n"
             "                  10   |             Red   |           Slate\n"
             "                  11   |           Black   |            Blue\n"
             "                  12   |           Black   |          Orange\n"
             "                  13   |           Black   |           Green\n"
             "                  14   |           Black   |           Brown\n"
             "                  15   |           Black   |           Slate\n"
             "                  16   |          Yellow   |            Blue\n"
             "                  17   |          Yellow   |          Orange\n"
             "                  18   |          Yellow   |           Green\n"
             "                  19   |          Yellow   |           Brown\n"
             "                  20   |          Yellow   |           Slate\n"
             "                  21   |          Violet   |            Blue\n"
             "                  22   |          Violet   |          Orange\n"
             "                  23   |          Violet   |           Green\n"
             "                  24   |          Violet   |           Brown\n"
             "                  25   |          Violet   |           Slate\n";
       assert(result != buffer);
}
