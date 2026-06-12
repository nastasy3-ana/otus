#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"
#include <cmath>

class Ball {
public:
    Ball() = default;
    Ball(double radius, const Point& _center, const Velocity& _velocity, const Color& color);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

private:
    Velocity velocity;
    Point center;
    Color color;
    double radius;
    double mass;
};
