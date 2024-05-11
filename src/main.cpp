#include <iostream>
#include "Matrix.h"

int main() {
    Matrix mat1(3, 3);

    mat1.set(0, 0, 1);
    mat1.set(1, 1, 2);
    mat1.set(2, 2, 3);

    for (int i = 0; i < mat1.getRows(); i++) {
        for (int j = 0; j < mat1.getCols(); j++) {
            std::cout <<mat1.at(i, j) << " ";
        }
        std::cout <<std::endl;
    }

    Matrix mat2(3, 3, 1);
    Matrix sum = mat1 + mat2;
    Matrix transposed = sum.transpose();

    std::cout << "Sum of matrices:" << std::endl;
    for (int i = 0; i < sum.getRows(); i++) {
        for (int j = 0; j < sum.getCols(); j++) {
            std::cout << sum.at(i, j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Transpose of the matrix: " << std::endl;
    for (int i = 0; i < transposed.getRows(); i++) {
        for (int j = 0; j < transposed.getCols(); j++) {
            std::cout << transposed.at(i, j) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}