// You are given an array ‘Arr’ consisting of ‘N’ distinct integers and a positive integer ‘K’. Find out Kth smallest and Kth largest element of the array. It is guaranteed that K is not greater than the size of the array.
// Example:
// Let ‘N’ = 4,  ‘Arr’ be [1, 2, 5, 4] and ‘K’ = 3.  
// then the elements of this array in ascending order is [1, 2, 4, 5].  Clearly, the 3rd smallest and largest element of this array is 4 and 2 respectively.

// O(n) approach 
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    vector<int> v;
    sort(arr.begin(),arr.end());
    v.push_back(arr[k-1]);
    v.push_back(arr[n-k]);
    return v;
}

// using priority_queue --- O(logn) approach

vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>,greater<int>> minHeap; // correct way to create min priority queue (inbuilt max heap hoti h) 
    for(int i =0;i<n;i++){
        maxHeap.push(arr[i]);
        minHeap.push(arr[i]);
    }
    for(int i =0;i<k-1;i++){
        maxHeap.pop();
        minHeap.pop();
    }
    vector<int> v;
    v.push_back(minHeap.top());
    v.push_back(maxHeap.top());
    
    return v;
    
  
    
}
