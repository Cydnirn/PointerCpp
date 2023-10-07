#include <string.h>
#include <stdio.h>
#include <iostream>
#include "pointerLib.h"

using namespace std;

int main(int argc, char *argv[])
{
    int numberAwal = 10;
    int sum = 5;
    int *numberPointer = &numberAwal;
    /*
     */
    printf("With no pointer: %i %i \n", SumNoPointer(numberAwal, sum), numberAwal);
    SumPointer(numberAwal, sum);
    printf("With pointer: %i %i \n", numberAwal, numberAwal);
    printf("Return memory address: %p \n", ReturnMemAddr(numberAwal));
    return 0;
}