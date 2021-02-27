#include <stdio.h>
#include </usr/include/bits/types/FILE.h>
#include <emscripten/emscripten.h>

int main(int argc, char **argv)
{
  return 0;
}

#ifdef __cplusplus
extern "C"
{
#endif
 
void EMSCRIPTEN_KEEPALIVE PrintfToWeb(char *a)  
{
  printf("%s\n", a);
}

#ifdef __cplusplus
}
#endif
