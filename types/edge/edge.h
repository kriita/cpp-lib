#ifndef EDGE_H
#define EDGE_H
#include<iostream>
#include<vector>

#include "types/point/point.h"

class Edge
{
public:
  Edge(Point _u = Point(), Point _v = Point(), long double _weight = 0);
  Edge(const Edge& e) = default;
  ~Edge() = default;

  Point u, v;
  long double weight;
  long double length() const;
  
  int ccw(const Point& p) const;
  bool contains(const Point& p) const;
  bool singlePointIntersect(const Edge& e) const;
  bool overlap(const Edge& e) const;

  long double distanceTo(const Point& p) const;
  long double distanceTo(const Edge& e) const;
  std::vector<Point> intersection(const Edge& e) const;

  bool operator<(const Edge& e) const;
  bool operator==(const Edge& e) const;
  friend std::istream& operator>>(std::istream& is, Edge& e);
};

#endif
