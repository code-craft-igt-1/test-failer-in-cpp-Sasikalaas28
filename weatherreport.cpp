#include <assert.h>
#include <string>
#include <iostream>
#include "./weatherreport.h"
#include "./test-weather.h"
using std::cout;
using std::endl;
using std::string;

int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindspeed();
    TestPartlyCloudy();
    return 0;
}
