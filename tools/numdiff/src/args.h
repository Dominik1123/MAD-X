#ifndef ARGS_H
#define ARGS_H

#include <stdio.h>

struct option {
  int check, debug, serie, list, blank, utest, keep;
  const char *suite, *test;
  const char *fmt;
  const char *out_e, *ref_e, *cfg_e;
  char indexed_filename[FILENAME_MAX+100];
  int argi;
};

extern struct option option;

void usage(void);
void invalid_file(const char*);
void invalid_option(const char*);
void parse_args(int argc, const char *argv[]);

#endif