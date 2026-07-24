#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1,2,1,0,1,1,0};
    int k=4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum=0;
        int res=0;
        unordered_map<int, int> f;
        f[0]=1;                             //for sum-k==0
        for(int i=0; i<n; i++){
            sum+=arr[i];
            int ques=sum-k;
            // if(f.contains(ques)){
            //     res+=f[ques];
            // }
            res+=f[ques];
            f[sum]++;
        }


    cout << "Count of subarray = " << res << endl;

    return 0;
}