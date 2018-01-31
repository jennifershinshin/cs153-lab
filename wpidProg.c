#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char **argv)
{
  //ADD THIS FILE TO MAKEFILE (2 lines to add)

  int pid;		//std;:stoi(argv[0],nullptr, 10)
  int *status;
  int options;

  waitpid(pid, status, options);

  exit();
}
