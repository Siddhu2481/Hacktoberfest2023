vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        
        vector<int>ans;
        
        int left=0 , right=m-1 , top=0 , bottom=n-1;
      if(n==1&& m==1)
      {
      ans.push_back(matrix[0][0]);
      return ans;
          
      }
        while(left<right)
        {
            ans.push_back(matrix[0][left]);
            left++;
        }
        left=0;
          while(top<bottom)
        {
            ans.push_back(matrix[top][right]);
            top++;
        }
        top=0;
          while(right>left)
        {
              if(right==m-2 && n==1)
            break;
            ans.push_back(matrix[bottom][right]);
            right--;
          
        }
        right=m-1;
          while(bottom>top)
        {
            if(bottom==n-2 && m==1)
            break;
            ans.push_back(matrix[bottom][top]);
            bottom--;
        }
        
        return ans;
    }
