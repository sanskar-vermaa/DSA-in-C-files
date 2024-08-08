#include<iostream>
#include<vector>
 using namespace std;


void print(int arr[], int index, int n, int sum, vector<int>&ans,vector<int>&temp){


  if(index==n){
   // .push_back(temp);
    ans.push_back(sum);
    return ;
  }

// no
   print (arr, index+1, n, sum,ans, temp);

   // yes
   print (arr, index+1, n, sum +arr[index],ans, temp);
}

 int main(){
int arr[]={ 3,4,5};

vector<int>ans;
vector<int > temp;



print(arr, 0,3,0,ans,temp);

for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

return 0 ;
}