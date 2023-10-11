#include <iostream>
using namespace std;
int main()
{
   int m1 [10] [10] , m2 [10] [10] , res [10] [10];
   int row , column, i, j;
   cout<<"Enter number of rows and column:"<<endl;
   cin>>row>>column;
   cout<<"Enter elements for first matrix :"<<endl;
   for(i = 0 ; i < row; i++)
   {
       for(j = 0 ; j < column; j++)
       {
           cin>>m1 [i] [j];
       }
   }
   cout<<"Enter elements for second matrix:"<<endl;
   for(i = 0 ; i < row; i++)
   {
       for(j = 0 ; j < column; j++)
       {
           cin>>m2 [i] [j];
       }
   }
   cout<<"Sum of  matrix:"<<endl;
   for(i = 0 ; i < row; i++)
   {
       for(j = 0 ; j < column; j++)
       {
           res [i] [j]= m1 [i] [j] +m2 [i] [j];
           cout<< res [i] [j] <<" ";
       }
   }

    return 0;
}
