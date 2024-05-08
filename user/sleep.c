#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int time;
  if (argc < 1) return -1;
  time = atoi(argv[1]);
  sleep(time);
  return 0;
}
