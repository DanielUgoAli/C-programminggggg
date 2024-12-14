#define N 10

int main(void){
    double identity[N][N];
    int row, col;

    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (row == col)
                identity[row][col] = 1.0;
            else
                identity[row][col] = 0.0; 


    return 0;
}



