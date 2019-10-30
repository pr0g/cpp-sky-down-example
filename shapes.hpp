#pragma once

#include <iostream>

struct Square {
    void draw() const {
        std::cout << "square\n";
    }
};

struct Circle {
    void draw() const {
        std::cout << "circle\n";
    }
};

struct Triangle {
    void draw() const {
        std::cout << "triangle\n";
    }
};