#include "md5.h"

int main()
{
  MD5 md5 ;
  // print the digest for a binary file on disk.
  puts( md5.digestFile( "main" ) ) ;

  return 0;
}
