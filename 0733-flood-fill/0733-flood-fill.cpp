class Solution {
private: 
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int n= image.size();
       int m= image[0].size();

         int iniColor = image[sr][sc];
           if (iniColor == color) return image; //
        queue<pair<int, int>> q;
 q.push({sr,sc});
 image[sr][sc]=color;


    int delrow[] = {-1,0,1,0};
    int delcol[] = {0,1,0,-1};

 
 while(!q.empty()){
    int r =q.front().first;
    int c =q.front().second;
     q.pop();
    for(int i=0;i<4;i++){
        int nrow=r+delrow[i];
        int ncol=c+delcol[i];

if(nrow>=0 &&nrow<n && ncol>=0 &&ncol<m && image[nrow][ncol]==iniColor){
 image[nrow][ncol]=color;
 q.push({nrow,ncol});
}
    }
 }
         return image;

        
    }
};