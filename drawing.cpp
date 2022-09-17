#include "drawing.hpp"

void draw(DrawableRef drawable) {
    drawable.call<Draw>();
}

void update(UpdatableRef updatable) {
    updatable.call<Update>();
}
