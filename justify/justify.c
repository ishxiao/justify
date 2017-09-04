/* justify.c */
/* Formats a file of text */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
  char word[MAX_WORD_LEN+2];
  int word_len;
  FILE *fp, *new_fp;

  /* Read source file and create destination file */
  if (argc != 3) {
    fprintf(stderr, "usage: justify source dest\n");
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  
  if ((new_fp = fopen(argv[2], "w")) == NULL) {
    fprintf(stderr, "%s can't be opened\n", argv[2]);
    exit(EXIT_FAILURE);
  } 
  
  /* Processing text */
  clear_line();
  for (;;) {
    word_len = read_word(word, MAX_WORD_LEN+1, fp);
    if (word_len == 0) {
      flush_line(new_fp);
      return 0;
    }
    if (word_len > MAX_WORD_LEN)
      word[MAX_WORD_LEN] = '*';
    if (word_len + 1 > space_remaining()) {
      write_line(new_fp);
      clear_line();
    }
    add_word(word);
  }
  
  fclose(fp);
  fclose(new_fp);
  
  return 0;
}
