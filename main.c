#include <stdio.h>
#include <stdint.h>

extern long int control();

int maint(){

  long int return_code =99;

  printf("%s", "This is Assignment 4 programmbed by Justin Poblete \n");
  printf("%s", "“The author is an avid fan of multilingual program and assembly programming.” \n");
  return_code = control();
  rintf("%s%ld%s\n","The main driver received this number: ",return_code,".\nMain will now return 0 to the operating system.\nHave a nice day. Bye");

  return 0;
}
