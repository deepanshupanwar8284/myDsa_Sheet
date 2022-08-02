// basic approch is think each element as ncr solutin become easy

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>Pascal(numRows);
      for(int i=0 ;i<numRows;++i)
      {
          Pascal[i].resize(i+1);
          Pascal[i][0]=1; /// First element.
          Pascal[i][i]=1; /// Last element.
          
          /// Sum every two numbers.
          for(int j=1;j<i;++j)
          {
            ///Curent cell = cell in last row and last column + cell in last row and same column.
              Pascal[i][j] = Pascal[i-1][j-1] + Pascal[i-1][j];
          }
      }
    
    return Pascal;
    }
};
