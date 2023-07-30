void doit(vector<vector<int>> &v, int i , int j , int color , int cell){
        if(i < 0 || j<0 || i>=v.size() || j>=v[0].size() || v[i][j] != cell){
            return ;
        }
        v[i][j] = color;
        doit(v,i-1,j,color,cell);
        doit(v,i,j-1,color,cell);
        doit(v,i+1,j,color,cell);
        doit(v,i,j+1,color,cell);
    }
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    // Write your code here.
    if(image[sr][sc] != color){
            doit(image,sr,sc,color,image[sr][sc]);
        }
        return image;
}