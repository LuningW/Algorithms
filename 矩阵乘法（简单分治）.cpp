#include <stdio.h>
#ifndef ALGORITHM_PREPROCESSOR_H
#define ALGORITHM_PREPROCESSOR_H

#define row 3
#define col 3

#endif //ALGORITHM_PREPROCESSOR_H

// �������
double matrix_1[row][col];
double matrix_2[row][col];
double matrix_result_1[row][row];

//��ֵ����
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
//��ӡ����
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
//�������
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
    printf("������A(�������Ϊ%d��Ϊ%d)��ֵ\n", row,col);
    set_matrix_A();
    printf("������B(�������Ϊ%d��Ϊ%d)��ֵ\n", row,col);
    set_matrix_B();
    printf("����A������Ϊ\n");
    print_matrix_A();
    printf("����B������Ϊ\n");
    print_matrix_B();

    //������˵Ľ��Ϊ
    dot_matrix();
    printf("��˵Ľ��Ϊ\n");
    print_matrix_result();
    return 0;
}
