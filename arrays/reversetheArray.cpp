/*
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.
*/

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int i = m+1;// starting index
    int e = arr.size()-1;// ending index
    while(i<e){
        int temp = arr[i];
        arr[i]=arr[e];
        arr[e]=temp;
        i++;
        e--;
    }

}
