static union {
  char c[4];
  int i;
}endian_test{{'l','?','?','b'}};

#define ENDIANTYPE ((char)endian_test.i)
