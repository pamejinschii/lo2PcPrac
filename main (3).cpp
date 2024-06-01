#include <iostream>
#include <cmath>
#include <tuple>

// Структура для определения точки
struct Point {
    double x, y;
};

// Структура для определения прямой y = kx + b
struct Line {
    double k, b;
};

// Функция нахождения расстояния от точки до прямой
double distancePointToLine(Point p, Line l) {
    return std::abs(l.k * p.x - p.y + l.b) / std::sqrt(l.k * l.k + 1);
}

// Функция нахождения точки пересечения двух прямых
Point intersectionPoint(Line l1, Line l2) {
    Point p;
    p.x = (l2.b - l1.b) / (l1.k - l2.k);
    p.y = l1.k * p.x + l1.b;
    return p;
}

// Функция нахождения расстояния между двумя точками
double distanceBetweenPoints(Point p1, Point p2) {
    return std::sqrt((p1.x - p2.x) * (p1.y - p2.y));
}

// Функция нахождения угла между двумя прямыми
double angleBetweenLines(Line l1, Line l2) {
    return std::atan(std::abs((l1.k - l2.k) / (1 + l1.k * l2.k))) * 180.0 / M_PI;
}

int main() {
    Line l1 = {1, 2}; // Пример параметров первой прямой
    Line l2 = {2, -1}; // Пример параметров второй прямой
    Point p = {3, 4}; // Пример точки

    // Расстояние от точки до каждой прямой
    double d1 = distancePointToLine(p, l1);
    double d2 = distancePointToLine(p, l2);
    std::cout << "Расстояние от точки до первой прямой: " << d1 << std::endl;
    std::cout << "Расстояние от точки до второй прямой: " << d2 << std::endl;

    // Точка пересечения прямых
    Point intersection = intersectionPoint(l1, l2);
    std::cout << "Точка пересечения прямых: (" << intersection.x << ", " << intersection.y << ")" << std::endl;

    // Расстояние от заданной точки до точки пересечения прямых
    double distance = distanceBetweenPoints(p, intersection);
    std::cout << "Расстояние от точки до точки пересечения прямых: " << distance << std::endl;

    // Угол между прямыми
    double angle = angleBetweenLines(l1, l2);
    std::cout << "Угол между прямыми: " << angle << " градусов" << std::endl;

    return 0;
}
