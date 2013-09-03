#include "so_xl.h"
#include <iostream>
using namespace std;
soxl::soxl()
{
  m_test = 100;
}
void soxl::pt()
{
  cout<<m_test<<endl;
}
extern "C" soxl* create_object()
{
  return new soxl;
}
extern "C" void delet_ob( soxl* psoxl)
{
  delete psoxl; 
}

