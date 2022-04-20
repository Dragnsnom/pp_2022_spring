// Copyright 2022 Zaitseva Ksenia
#ifndef MODULES_TASK_1_ZAITSEVA_K_JARVIS_JARVIS_H_
#define MODULES_TASK_1_ZAITSEVA_K_JARVIS_JARVIS_H_

#include <iostream>
#include <vector>
#include <fstream>
#include <random>
#include <limits>
#include <utility>

struct Point {
  explicit Point() : x(0), y(0) {}
  Point(double x_, double y_) : x(x_), y(y_){}
  double x;
  double y;
  bool operator<(const Point& other) const;
  bool operator==(const Point& other) const;
  bool operator!=(const Point& other) const;
  Point operator-(const Point& other) const;
};

double cross(const Point& a, const Point& b);

bool turn(const Point& a, const Point& b,
          const Point& c);

std::vector<Point> Jarvis(std::vector<Point> points);

std::vector<Point> Generate(int n);

#endif  // MODULES_TASK_1_ZAITSEVA_K_JARVIS_JARVIS_H_
