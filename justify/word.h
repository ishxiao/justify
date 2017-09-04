#ifndef WORD_H
#define WORD_H

/*********************************************************
 * read_word: Reads the next word from the input and     *
 *            stores it in word. Makes word empty if no  *
 *            word could be read because of end-of-file. *
 *            Trucates the word if its length exceeds    *
 *            len. Returns the number of characters      *
 *            strored.                                   *
 *********************************************************/
int read_word(char *word, int len, FILE *stream);

#endif
