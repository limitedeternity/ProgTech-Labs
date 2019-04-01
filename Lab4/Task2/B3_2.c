#include <stdio.h>
#include <stdlib.h>

void getch()
{
#ifdef WIN32
  system("pause");
#else
  system("read -n1 -p '' key");
#endif
}

int main(int argc, char const *argv[])
{
  /* 
  Разница в представлении между single precision (float) и double precision (double) 
  заключается в количестве занимаемой памяти. 
  Float занимает в памяти 32-битного компьютера одно машинное слово (32 бита/4 байта),
  тогда как double занимает два машинных слова (64 бита/8 байт).
  Соответственно, в памяти 64-битного компьютера float займет половину слова, а double - одно.

  Float выглядит так: 8 бит на порядок и 24 бита на мантиссу 
  (порядок - целая часть, мантисса - дробная).
  Double: 11 бит на порядок и 53 бита на мантиссу.
  */

  /*
  Каждая пара float-чисел находится на расстоянии ~0.0000001 друг от друга.
  Это расстояние называется единицей наименьшей точности (unit of least precision – ULP).
  Для оценки расстояния в количестве double-чисел написана программа на Java - DoubleCounter.
  Выполните команды из run.sh, чтобы запустить её.
  */

  getch();
  return 0;
}