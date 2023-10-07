#ifndef POINTERLIB_H_
#define POINTERLIB_H_

int SumNoPointer(int def, int sum);
int SumPointer(int &def, int sum);
int *ReturnMemAddr(int &addr);

#endif