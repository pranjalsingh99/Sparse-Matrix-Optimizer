#include<iostream>
using namespace std;

void input(int arr[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void display(int arr[10][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}


int non(int arr[10][10],int row,int col)
{
    int i,j;
     int nonzero=0;
   for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
    {
        if(arr[i][j]!=0)
        {
            nonzero++;
        }
    }
   }
   return nonzero;
}

void sparse(int arr[][10],int row,int col,int nonzero)
{
    int i,j;
    //int sparse[nonzero][3];
    cout<<"Row\t Col\t Value"<<endl;
    cout<<row<<"\t"<<col<<"\t"<<nonzero<<"\t"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]!=0)
            {
            cout<<i<<"\t";
            cout<<j<<"\t";
            cout<<arr[i][j]<<endl;
            }
        }
     
    }
}


int main()
{
    int matrix[10][10];
    int row,col;
    int nonzero,choice=0;
       

    do
    {
        cout<<"====== SPARSE MATRIX OPTIMIZER ======\n";
        cout<<"1. Enter Matrix\n";
        cout<<"2. Display Matrix\n";
        cout<<"3. Check Sparse\n";
        cout<<"4. Convert to 3-Tuple\n";
        cout<<"5. Exit\n";

        cout<<"Enter your choice:" ;
        cin>>choice;

        switch(choice)
        {
        case 1:
         cout<<"Enter The Rows And Columns Of The Matrix: ";
        cin>>row>>col;
        cout<<"Now, Enter The Values Inside Array: "<<endl;
          input(matrix,row,col);
          break;

        case 2:
        cout<<"The Matrix Is:  "<<endl;
        display(matrix,row,col);
        break;

        case 3:
        {
        nonzero=non(matrix,row,col);
        int zero=row*col-nonzero;

        if(zero>=nonzero)
        {
            cout<<"The Matrix Is A Sparse Matrix"<<endl;
        }
        else
    {cout<<"The Matrix Is Not Sparse"<<endl;}
        break;
        }
    case 4:
        nonzero=non(matrix,row,col);
        sparse(matrix,row ,col , nonzero);
        break;

    case 5:
            cout << "Exiting program...";
            break;

   default:
   cout<<"Invalid Choice";
   break;
   }

    }
while(choice!=5);

   
    
   


   
    return 0;
}

