#include "drawing.hpp"

void draw(DrawableRef drawable) {
    drawable.call<Draw>();
}
