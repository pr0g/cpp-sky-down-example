#pragma once

#include "polymorphic.hpp"

#include <vector>

struct Draw {};
using DrawSignature = void(Draw) const;

using Drawable = polymorphic::object<DrawSignature>;
using DrawableRef = polymorphic::ref<DrawSignature>;

void draw(DrawableRef drawable);

template<typename T>
void poly_extend(Draw, const T& t) {
    t.draw();
}
