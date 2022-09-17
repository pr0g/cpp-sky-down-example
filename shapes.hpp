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

void poly_extend(Draw, const Triangle& tri) {
    std::cout << "other triangle\n";
}

struct Entity {
    void update() {
        health_--;
    }
    void draw() const {
        std::cout << "entity (health " << health_ << ")\n";
    }
    int health_ = 100;
};
