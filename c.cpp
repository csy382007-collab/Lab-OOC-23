
#include <iostream>
int main() {
    int length = 5;
    int width = 10;
    int area = length * width;
    int perimeter = 2 * (length + width);
    std::cout << "The area of the rectangle is " << area << std::endl;
    std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;
    return 0;
}