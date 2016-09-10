#include "inverseMatrix.h"
#include <stdio.h>

int main ()
{
  int dimension;
  QMatrix matrix;
  QMatrix rMatrix;
  
  printf("Input the dimension of the matrix:\n");
  scanf("%d", &dimension);
  initQMatrix(&matrix, dimension);

  printf("Now input matrix values:\n");
  qMatrixScanf(&matrix);

  rMatrix = reverseMatrix(matrix);
  printf("Here is the reverse matrix:\n");
  qMatrixPrintf(rMatrix);
  printf("Done\nNow exiting\n");

  return 0;
}

//TODO: create kinda 'QMatrix' destructor-thing
//TODO: same for the constructor-thing
