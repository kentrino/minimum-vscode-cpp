#include <iostream>
#include <vector>

typedef struct Point {
  int x;
  int y;
} Point;

typedef struct Vector {
  Point start;
  Point end;
} Vector;

int main(int argc, const char *argv[]) {
  int s = 0;
  for (int i = 0; i < 100; i++) {
    s += i;
  }

  Point *p = new Point();
  p->x = 3;
  p->y = 4;

  Vector *v = new Vector();
  v->start = *p;

  std::vector<Vector> vec;
  auto it = vec.begin();
  vec.insert(it, *v);

  std::cout << "Hello Visual Studio Code!" << '\n';
  return 0;
}
