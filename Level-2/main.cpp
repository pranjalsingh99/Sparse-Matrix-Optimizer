#include<iostream>
using namespace std;

class SparseMatrix
{
private:
    int matrix[10][10];
    int rows;
    int cols;

public:

    SparseMatrix()
    {
        rows = 0;
        cols = 0;
    }

    void input()
    {
        cout << "Enter The Rows And Columns Of The Matrix: ";
        cin >> rows >> cols;

        if(rows <= 0 || rows > 10 || cols <= 0 || cols > 10)
        {
            cout << "Invalid matrix size!" << endl;
            rows = 0;
            cols = 0;
            return;
        }

        cout << "Enter The Values Inside Matrix:" << endl;

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cin >> matrix[i][j];
            }
        }
    }

    void display()
    {
        cout << "\nThe Matrix Is:" << endl;

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cout << matrix[i][j] << "\t";
            }

            cout << endl;
        }
    }

    int countNonZero()
    {
        int nonzero = 0;

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] != 0)
                {
                    nonzero++;
                }
            }
        }

        return nonzero;
    }

    void checkSparse()
    {
        int nonzero = countNonZero();
        int total = rows * cols;
        int zero = total - nonzero;

        cout << "\nZero Elements     : " << zero << endl;
        cout << "Non-Zero Elements : " << nonzero << endl;

        if(zero >= nonzero)
        {
            cout << "The Matrix Is A Sparse Matrix" << endl;
        }
        else
        {
            cout << "The Matrix Is Not Sparse" << endl;
        }
    }

    void displayTriplet()
    {
        int nonzero = countNonZero();

        cout << "\nRow\tCol\tValue" << endl;

        cout << rows << "\t"
             << cols << "\t"
             << nonzero << endl;

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] != 0)
                {
                    cout << i << "\t"
                         << j << "\t"
                         << matrix[i][j] << endl;
                }
            }
        }
    }

    void sparsityPercentage()
    {
        int nonzero = countNonZero();
        int total = rows * cols;
        int zero = total - nonzero;

        float percentage = ((float)zero / total) * 100;

        cout << "\nSparsity Percentage: "
             << percentage << "%" << endl;
    }

    void memoryComparison()
    {
        int nonzero = countNonZero();

        int normalMemory = rows * cols * sizeof(int);

        int tupleMemory = (nonzero + 1) * 3 * sizeof(int);

        cout << "\nNormal Matrix Memory : "
             << normalMemory << " bytes" << endl;

        cout << "3-Tuple Memory       : "
             << tupleMemory << " bytes" << endl;

        if(tupleMemory < normalMemory)
        {
            cout << "Memory Saved         : "
                 << normalMemory - tupleMemory
                 << " bytes" << endl;
        }
        else
        {
            cout << "No Memory Saved" << endl;
        }
    }


};


int main()
{
    SparseMatrix matrix;

    int choice;

    do
    {
        cout << "\n====== SPARSE MATRIX OPTIMIZER ======" << endl;

        cout << "1. Enter Matrix" << endl;
        cout << "2. Display Matrix" << endl;
        cout << "3. Check Sparse" << endl;
        cout << "4. Convert to 3-Tuple" << endl;
        cout << "5. Sparsity Percentage" << endl;
        cout << "6. Memory Comparison" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                matrix.input();
                break;

            case 2:
                matrix.display();
                break;

            case 3:
                matrix.checkSparse();
                break;

            case 4:
                matrix.displayTriplet();
                break;

            case 5:
                matrix.sparsityPercentage();
                break;

            case 6:
                matrix.memoryComparison();
                break;


            case 7:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 7);

    return 0;
}