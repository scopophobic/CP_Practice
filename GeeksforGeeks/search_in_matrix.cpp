//https://practice.geeksforgeeks.org/contest/challenge-2-searching-sorting/problems/#   --link!


class Solution{
  public:
   bool search(vector<vector<int>>& mat, int x)
    {
        int n = mat.size();
        int m = mat[0].size();
        if (n == 0){
            return false;
        }
        
        int smallest = mat[0][0], largest = mat[n - 1][m - 1];
        if (x < smallest || x > largest)
            return false;
       
        
        int i = 0, j = m - 1;
        while (i < n && j >= 0)
        {
            if (mat[i][j] == x)
            {
                return true;
            }
            if (mat[i][j] > x)
                j--;
           
            else
                i++;
        }
        return false;
    }
    vector<bool> matSearch(vector<vector<int>>& mat, int n, int m, int q, vector<vector<int>>& vec){
      
      vector<bool> ans;
      vector<vector<int>> arr;
      for(int i=0;i<q;i++){
          int key=vec[i][4];
          int x1=vec[i][0];
          int y1=vec[i] [1];
          int x2=vec [i] [2];
          int y2=vec [i] [3];
          
            for(int p = x1;p<=x2;p++){
                vector<int> temp;
                for(int q = y1; q<=y2; q++){
                    temp.push_back(mat[p][q]);
                }
                arr.push_back(temp);
            }
            bool ans1 = search(arr,key);
            ans.push_back(ans1);
      }
      return ans;
      
  }
};
