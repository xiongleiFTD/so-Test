#include <dlfcn.h>
#include "so_xl.h"
using namespace std;
int main(int argc, char* argv[])
{
  void* handle = dlopen("./soxl.so",RTLD_LAZY);

  soxl* (*create)();
  void (*FreeDl)(soxl*);
  create = (soxl* (*)())dlsym(handle,"create_object");
  FreeDl = (void (*)(soxl*))dlsym(handle,"delet_ob");
  soxl* sl = (soxl*)create();
  sl->pt();
 // FreeDl( sl);
  delete sl;
  return 0;
}
