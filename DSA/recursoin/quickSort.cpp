#include<bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
int partation(vector<int>& nums ,int s , int e){
        // element to be set
        int pivot = nums[s];
        int c = 0 ;
        for(int i = s+1 ; i <= e ;i++){
            if(nums[i] <= pivot){
                c++;
            }
        }
        int pivotIndex = s+c;
        // swaping the pivot to its position
        swap(nums[pivotIndex],nums[s]);
        
        // arranginng the left and right part condition
        int i=s,j=e;
        while(i < pivotIndex && j > pivotIndex){
            while(nums[i] <= pivot){
                i++;
            }
            while(nums[j] > pivot){
                j--;
            }
            if(i < pivotIndex && j > pivotIndex){
                swap(nums[i++],nums[j--]);
            }     
            
        }
        return pivotIndex;
    }
private:
    void quickSort(vector<int>& nums ,int s , int e){
        // base case
        if( s >= e){
            return;
        }
        int p = partation(nums,s,e);
        quickSort(nums,s,p-1);
        quickSort(nums,p+1,e);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};