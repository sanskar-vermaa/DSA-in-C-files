#include<iostream>
 using namespace std;

 void printsumdig(int matrix[][3],int row,int col){
   
   int first=0;
   int second=0;
  
  // first diogonal sum
  int i=0;
   while(i<row){
    first+=matrix[i][i];
     i++;
   }
   // soecond diagonal sum; 

   i=0;  
   int j=col-1;
   while(j>=0){
    second+=matrix[i][j];
    i++,j--;
   }

   cout<<" first diagonal "<<first<<endl;
   cout<<"second:  "<<second<<endl;

 }
 int main(){
   
   int matrix[3][3]={1,2,3,4,5,8,10,8,50};

   printsumdig(matrix, 3 ,3);

}