#pragma once

#include "polymorphic.hpp"

#include <vector>

struct Draw {};
using DrawSignature = void(Draw) const;

struct Update {};
using UpdateSignature = void(Update);

using Drawable = polymorphic::object<DrawSignature>;
using DrawableRef = polymorphic::ref<DrawSignature>;

using Updatable = polymorphic::object<UpdateSignature>;
using UpdatableRef = polymorphic::ref<UpdateSignature>;

void draw(DrawableRef drawable);
void update(UpdatableRef updatable);

template<typename T>
void poly_extend(Draw, const T& t) {
    t.draw();
}

template<typename T>
void poly_extend(Update, T& t) {
    t.update();
}
