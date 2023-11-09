class Solution{
    public:
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int A=0,B=0;
        for(int i=0;i<N;i++){
                if(arr[i][0]==0) 
                A++;
                }
        for(int j=1;j<N;j++){  
            int count=0;
            for(int i=0;i<N;i++){
                if(arr[i][j]==0)
                count++;
                }
        if(A<count){
            A=count; 
            B=j;  
        }
    }   
    if(A==0){ 
        return -1;
    }
    else {
        return B;
    }    
    }
};
