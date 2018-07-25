#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nums[]={0,1,2,3,4,5,6,7,8,9};

bool prob(int n){                                                                                                                    
  ll num=nums[0]*10000+nums[1]*1000+nums[2]*100+nums[3]*10+nums[4];  
  ll den=nums[5]*10000+nums[6]*1000+nums[7]*100+nums[8]*10+nums[9];
if(num/den==(ll)n)return true;

num=nums[9]*10000+nums[8]*1000+nums[7]*100+nums[6]*10+nums[5];  
den=nums[4]*10000+nums[3]*1000+nums[2]*100+nums[1]*10+nums[0];
if(num/den==(ll)n)return true;

num=nums[9]*10000+nums[8]*1000+nums[7]*100+nums[6]*10+nums[5];  
den=nums[0]*10000+nums[1]*1000+nums[2]*100+nums[3]*10+nums[4];
if(num/den==(ll)n)return true;

return false;


}
void show(int n){
	printf("%d%d%d%d%d / %d%d%d%d%d = %d\n",nums[0],nums[1],nums[2],nums[3],nums[4],nums[5],nums[6],nums[7],nums[8],nums[9],n);
}
int main(){   
int n;
while(scanf("%d",&n) && n!=0){                                                                        
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			next_permutation(nums,nums+10);
			printf("%d%d%d%d%d%d%d%d%d%d\n",nums[0],nums[1],nums[2],nums[3],nums[4],nums[5],nums[6],nums[7],nums[8],nums[9]);
	       }
	}
}


return 0;
}                                   