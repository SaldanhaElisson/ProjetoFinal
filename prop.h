#ifndef __PROP_H
#define __PROP_H_

void filtrolbp(struct pgm *, struct pgm *);
void readPGMImage(struct pgm *, char *);
void histograma(unsigned char *, int , int , unsigned char *);
void writePGMImage(struct pgm *, char *);
void viewPGMImage(struct pgm *);
void histogramaCSV(const unsigned char *const , char *const, char *);

#endif // __INC_H_