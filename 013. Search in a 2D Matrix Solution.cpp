 bool find(vector<vector<int>>& v , int a , int b, int c, int d , int n , int m,int& val){
        if(a<c || (a==c && b<=d)){
            int dis = ((c-a)*m + d - b)/2;
            int z = b+1+dis;
            int x , y , w;
            if(z%m == 0){
                x = v[z/m -1 + a][(z-1)%m]; 
                y = z/m -1 + a;
                w = (z-1)%m;
            }
            else{
                x = v[z/m + a][z%m - 1];
                y = z/m + a;
                w = z%m - 1;
            }
            if(x == val)return true;
            else if(x>val){
                if(w == 0){
                    return find(v,a,b,y-1,m-1,n,m,val);
                }
                else{
                    return find(v,a,b,y,w-1,n,m,val);
                }
            }
            else{
                if(w == m-1){
                    return find(v,y+1,0,c,d,n,m,val);
                }
                else{
                    return find(v,y,w+1,c,d,n,m,val);
                }
            }
        }
        else{
            return false;
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        return find(matrix,0,0,n-1,m-1, n , m,target);
    }
