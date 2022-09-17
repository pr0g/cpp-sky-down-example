#include "drawing.hpp"
#include "shapes.hpp"

int main(int argc, char** argv) {
    Circle circle;
    Square square;
    Triangle triangle;

    draw(square);
    draw(circle);
    draw(triangle);

    Drawable drawable {circle};
    draw(drawable);

    std::vector<Drawable> drawables;
    drawables.emplace_back(Circle{});
    drawables.emplace_back(Square{});
    drawables.emplace_back(Triangle{});

    drawables.emplace_back(triangle);
    drawables.emplace_back(square);
    drawables.emplace_back(circle);

    for (const auto& s : drawables) {
        draw(s);
    }

    std::vector<Entity> entities;
    entities.push_back(Entity{});
    for (const auto& e : entities) {
        draw(e);
    }

    for (auto& e : entities) {
        update(e);
        draw(e);
    }

    return 0;
}
