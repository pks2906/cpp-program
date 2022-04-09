#include <iostream>

using namespace std;

class Matrix
{

    int row, column;
    int **matrix;

public:
    Matrix()
    {
        row = 4;
        column = 4;

        matrix = (int **)new int[row];
        for (int i = 0; i < row; i++)
            matrix[i] = new int[row];

        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                matrix[i][j] = 0;
    }

    void getRow();
    void getColumn();
    void setValue(int, int);
    void add(Matrix);
    void multiply(Matrix);
};

void Matrix::getRow()
{
    cout << "The number of rows are : " << row << endl;
}

void Matrix::getColumn()
{
    cout << "The number of rows are : " << row << endl;
}

void Matrix::setValue(int i, int j)
{

    int value;
    cout << "Enter the value to be set in the cell (" << i << ", " << j << ") :";
    cin >> value;
    matrix[i - 1][j - 1] = value;
}

void Matrix::add(Matrix m1)
{ // to add two matrices
    Matrix temp;

    for (int i = 0; i < m1.row; i++)
    { // adding the matrices
        for (int j = 0; j < m1.column; j++)
            temp.matrix[i][j] = matrix[i][j] + m1.matrix[i][j];
    }

    cout << "Result of addition" << endl;

    for (int i = 0; i < m1.row; i++)
    { // displaying the matrix
        for (int j = 0; j < m1.column; j++)
            cout << temp.matrix[i][j] << " ";
        cout << endl;
    }
}

void Matrix::multiply(Matrix m1)
{ // to multiply two matrices
    Matrix temp;

    for (int i = 0; i < row; i++) // multiplying the matrices
        for (int j = 0; j < column; j++)
            for (int k = 0; k < column; k++)
            {
                temp.matrix[i][j] += (m1.matrix[i][k] * matrix[k][j]);
            }

    cout << "Result of multiplication" << endl;

    for (int i = 0; i < m1.row; i++)
    { // displaying the matrix
        for (int j = 0; j < m1.column; j++)
            cout << temp.matrix[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    Matrix m1, m2; // two matrix objects are defined.

    m1.getColumn();
    m2.getRow();

    cout << "Start setting the values of matrix m1 according to the index value.\n";

    m1.setValue(3, 3); // the value of the elements are set by the function setValue()
    m1.setValue(4, 1);
    m1.setValue(1, 1);
    m1.setValue(2, 1);
    m1.setValue(3, 1);
    m1.setValue(1, 4);

    cout << "Start setting the values of matrix m1 according to the index value.\n";

    m2.setValue(2, 3); // the value of the elements are set by the function setValue()
    m2.setValue(3, 1);
    m2.setValue(2, 4);
    m2.setValue(1, 1);
    m2.setValue(4, 1);
    m2.setValue(3, 3);

    m1.add(m2); // the two matrices are added

    m1.multiply(m2); // the two matrices are multiplied

    return 0;
}