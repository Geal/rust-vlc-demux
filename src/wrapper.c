#include <stdarg.h>

int es_out_Control( int (*pf_control)(void *, int, va_list ), void * out, int i_query, ... ) {
  va_list args;
  int     i_result;
  va_start( args, i_query );
  i_result = pf_control( out, i_query, args );
  va_end( args );
  return i_result;
}
