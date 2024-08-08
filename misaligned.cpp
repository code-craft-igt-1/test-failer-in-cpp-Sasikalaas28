#include <iostream>
#include <sstream>
#include <iomanip>
#include "./misaligned.h"
#include "./test-colormap.h"
std::string printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    std::stringstream buffer;
    buffer << std::setw(20) << "ColorPairNumber";
    buffer << std::setw(5) << " | ";
    buffer << std::setw(15) << "MajorColor";
    buffer << std::setw(5) << " | ";
    buffer << std::setw(15) << "MinorColor";
    buffer << "\n";
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            buffer << std::setw(20) << i * 5 + j + 1 << std::setw(5) << " | ";
            buffer << std::setw(15) << majorColor[i] << std::setw(5) << " | ";
            buffer << std::setw(15) << minorColor[j] << "\n";
        }
    }
    std::cout << buffer.str() << std::endl;
    return buffer.str();
}

int main() {
    testPrintColorMap();
    return 0;
}
