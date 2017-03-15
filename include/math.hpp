namespace Math {
unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number - 1) * number;
}
}

namespace Hoge {
int Fuga() {
   return 3;
}
}
