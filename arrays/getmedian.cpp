#include<bits/stdc++.h>
using namespace std;
void getmedian(vector<int>&arr){
    sort(arr.begin(),arr.end());
     int n = arr.size();
;
    if(n  %2==0){
        int ind1= n/2;
        int ind2=(n/2)-1;
        cout<<(arr[ind1]+arr[ind2])/2<<endl;

    }
    else{
        cout<<arr[(n/2)];
    }
}
int main(){
    vector<int> arr1={88,99,77,65};
    cout<<"median is :"<<endl;
    getmedian(arr1);
}