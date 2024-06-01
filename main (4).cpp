#include <iostream>
#include <cmath>
#include <tuple>

// Структура для определения вектора
struct Vector {
    double x, y, z;
};

// Функция нахождения длины вектора
double vectorLength(Vector v) {
    return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

// Функция нахождения угла между двумя векторами
double angleBetweenVectors(Vector v1, Vector v2) {
    double dotProduct = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    double lengthsProduct = vectorLength(v1) * vectorLength(v2);
    return std::acos(dotProduct / lengthsProduct) * 180.0 / M_PI;
}

// Функция нахождения суммы векторов
Vector addVectors(Vector v1, Vector v2) {
    return {v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
}

// Функция нахождения разности векторов
Vector subtractVectors(Vector v1, Vector v2) {
    return {v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};
}

// Функция нахождения векторного произведения векторов
Vector crossProduct(Vector v1, Vector v2) {
    return {
        v1.y * v2.z - v1.z * v2.y,
        v1.z * v2.x - v1.x * v2.z,
        v1.x * v2.y - v1.y * v2.x
    };
}

int main() {
    Vector v1 = {1, 2, 3}; // Пример параметров первого вектора
    Vector v2 = {4, 5, 6}; // Пример параметров второго вектора

    // Длины векторов
    double length1 = vectorLength(v1);
    double length2 = vectorLength(v2);
    std::cout << "Длина первого вектора: " << length1 << std::endl;
    std::cout << "Длина второго вектора: " << length2 << std::endl;

    // Угол между векторами
    double angle = angleBetweenVectors(v1, v2);
    std::cout << "Угол между векторами: " << angle << " градусов" << std::endl;

    // Сумма векторов
    Vector sum = addVectors(v1, v2);
    std::cout << "Сумма векторов: (" << sum.x << ", " << sum.y << ", " << sum.z << ")" << std::endl;

    // Разность векторов
    Vector diff = subtractVectors(v1, v2);
    std::cout << "Разность векторов: (" << diff.x << ", " << diff.y << ", " << diff.z << ")" << std::endl;

    // Векторное произведение векторов
    Vector cross = crossProduct(v1, v2);
    std::cout << "Векторное произведение векторов: (" << cross.x << ", " << cross.y << ", " << cross.z << ")" << std::endl;

    return 0;
}
