#include <iostream>
int width, height, row, col;

int main() {

    setlocale(LC_ALL, "Russian");

    std::cout << "Ширина и Высота рамки: ";  std::cin >> width >> height;

    for (row = 1; row <= height; row++) {
        for (col = 1; col <= width; col++) {
            if (col == 1 or col == width)
                std::cout << " | ";
            else if (row == 1 or row == height)
                std::cout << " - ";
            else
                std::cout << "   ";
        }
        std::cout << "\n";
    }
}