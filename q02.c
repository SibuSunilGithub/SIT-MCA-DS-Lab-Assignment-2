// Wap to convert triplet form of a sparse matrix into triplet from of its transpose matrix

#include <stdio.h>

// Function Initializations
void input(int trip[][3]);
void transpose(int trip[][3], int trans[][3]);
void display(int trip[][3]);

// Main Function
int main()
{
  int tripmat[50][3], transmat[50][3];
  input(tripmat);
  transpose(tripmat, transmat);
  printf("\nThe Triplet Matrix\n");
  display(tripmat);
  printf("\nThe Transpose Matrix\n\n");
  display(transmat);
  return 0;
}

// Triplate Matrix Input Function
void input(int trip[][3])
{
  int i, j, r;
  printf("\nEnter No Of Rows Of The Triplet Matrix: ");
  scanf("%d", &r);
  printf("Enter %d Element In The Matrix\n", 3 * r);
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &trip[i][j]);
    }
  }
}

// Transpose Function.
void transpose(int trip[][3], int trans[][3])
{
  int i, j, k = 1;

  trans[0][0] = trip[0][1];
  trans[0][1] = trip[0][0];
  trans[0][2] = trip[0][2];

  for (i = 0; i < trans[0][0]; i++)
  {
    for (j = 1; j <= trans[0][2]; j++)
    {
      if (trip[j][1] == i)
      {
        trans[k][0] = trip[j][1];
        trans[k][1] = trip[j][0];
        trans[k][2] = trip[j][2];
        k++;
      }
    }
  }
}

// Display Function
void display(int trip[][3])
{
  int i;
  for (i = 0; i <= trip[0][2]; i++)
  {
    printf("%d\t%d\t%d\n", trip[i][0], trip[i][1], trip[i][2]);
  }
}