#include <stdio.h>
#ifndef ALGORITHM_PREPROCESSOR_H
#define ALGORITHM_PREPROCESSOR_H

#define row 3
#define col 3

#endif //ALGORITHM_PREPROCESSOR_H

// 定义矩阵
double matrix_1[row][col];
double matrix_2[row][col];
double matrix_result_1[row][row];

//赋值矩阵
void set_matrix_A()
{
    for(int i = 0 ; row > i ; i++)
    {
        for(int j = 0; col > j; j++)
        {
            scanf("%lf",&matrix_1[i][j]);
        }
    }
}
void set_matrix_B()
{
    for(int i = 0 ; row > i ; i++)
    {
        for(int j = 0; col > j; j++)
        {
            scanf("%lf",&matrix_2[i][j]);
        }
    }
}
//打印矩阵
void print_matrix_A()
{
    for(int i = 0 ; row > i ; i++)
    {
        for(int j = 0; col > j; j++)
        {
            printf("%lf\t",matrix_1[i][j]);
        }
        printf("\n");
    }
}
void print_matrix_B()
{
    for(int i = 0 ; row > i ; i++)
    {
        for(int j = 0; col > j; j++)
        {
            printf("%lf\t",matrix_2[i][j]);
        }
        printf("\n");
    }
}
//矩阵相乘
void dot_matrix()
{
    for(int i = 0 ; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            double temp = 0;
            for(int k = 0; k < col; k++)
            {
                temp += matrix_1[i][k] * matrix_2[k][j];
            }
            matrix_result_1[i][j] = temp;
        }
    }
}
void print_matrix_result()
{
    for(int i = 0 ; row > i ; i++)
    {
        for(int j = 0; col > j; j++)
        {
            printf("%lf\t",matrix_result_1[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("给矩阵A(矩阵的行为%d列为%d)赋值\n", row,col);
    set_matrix_A();
    printf("给矩阵B(矩阵的行为%d列为%d)赋值\n", row,col);
    set_matrix_B();
    printf("矩阵A的数据为\n");
    print_matrix_A();
    printf("矩阵B的数据为\n");
    print_matrix_B();

    //矩阵相乘的结果为
    dot_matrix();
    printf("相乘的结果为\n");
    print_matrix_result();
    return 0;
}
