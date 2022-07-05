#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>> v ;

void generateSubset(vector<int> &subset, int i, vector<int> &nums)
{
    if(i == nums.size()){
        v.push_back(subset) ;
        return ;
    }
    // ith element not in subset
    generateSubset(subset, i+1, nums) ;
    // ith element in subset

    subset.push_back(nums[i]) ;
    generateSubset(subset, i+1, nums) ;
    subset.pop_back() ;



}
int main()
{
      int n ; cin >> n ; vector<int > nums ;
        for(int i=0; i<n; i++) {
            int x ; cin >> x ; nums.push_back(x) ;
        }
        for(int i=0; i<n; i++) cout << nums[i] << " ";
        cout << endl ;
        vector<int> empty ;
        generateSubset(empty, 0, nums) ;
        
        for(auto x : v){
            for(auto y : x) cout << y << " " ;
            cout << endl ;
        } 
        

    return 0 ;
}
