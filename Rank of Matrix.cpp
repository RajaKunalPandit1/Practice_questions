Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/3.4
Your Accuracy:
100%
Attempts No.:
1
  
  #include<iostream>
using namespace std;
int main()
 {
     int t,ans;
     cin>>t;
     while(t--){
         int mat[3][3];
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 cin>>mat[i][j];
             }
         }
         
         ans = (mat[0][0] *((mat[1][1] * mat[2][2])- (mat[2][1]*mat[1][2])))
          - (mat[0][1] *((mat[1][0] * mat[2][2])- (mat[2][0]*mat[1][2])))
         +  (mat[0][2] *((mat[1][0] * mat[2][1])- (mat[2][0]*mat[1][1])));
         
         if(ans!=0){
             cout<< "3" << endl;
         }else{
             cout<< "2" << endl;
         }
     }
     
     
	cout<< "" << endl;
	return 0;
}

