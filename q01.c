// Wap to convert a sparse matrix into its triplet form.

#include <stdio.h>

// Convert Triplet Matrix Function
void triplet_matrix(int sparse[][10], int triplet[][3], int r, int c)
{
    int i, j, k = 1;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (sparse[i][j] != 0)
            {
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = sparse[i][j];
                k++;
            }
        }
    }
    triplet[0][0] = r;
    triplet[0][1] = c;
    triplet[0][2] = k - 1;
}

// Main Program Start...
int main()
{
    int sparse[10][10], triplet[20][3], i, j, r, c;
    printf("Enter The Row & Col Of The Sparse Matrix: ");
    scanf("%d%d", &r, &c);
    printf("Enter The Elements Of The Sparse Matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &sparse[i][j]);
        }
    }
    triplet_matrix(sparse, triplet, r, c);
    printf("\nThe Triplate Matrix Is This\n");
    for (i = 0; i <= triplet[0][2]; i++)
    {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }
}
