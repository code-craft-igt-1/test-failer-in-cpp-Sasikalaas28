#include <assert.h>
#include <iostream>
#include "./tshirts.h"
#include "./test-tshirt.h"

char tshirtSize(int cms) {
    char sizeName = '\0';
    if (cms < 38) {
        sizeName = 'S';
    } else if (cms >= 38 && cms < 42) {
        sizeName = 'M';
    } else if (cms >= 42) {
        sizeName = 'L';
    }
    std::cout << "Your Tshirt Size is " << sizeName << std::endl;
    return sizeName;
}

int main() {
    testTshirtSize();
    return 0;
}
