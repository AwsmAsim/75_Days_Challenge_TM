// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    vector<int> NSER(vector<int>& arr){
        vector<int> answer;
        stack<int> s1;
        for(int i = arr.size()-1; i >= 0; i--){
            while(!s1.empty() && s1.top()>=arr[i]){
                s1.pop();
            }
            if(s1.empty()) answer.push_back(-1);
            else answer.push_back(s1.top());
            s1.push(arr[i]);
        }
        
        reverse(answer.begin(), answer.end());
        
        return answer;
    }
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> answer = NSER(arr);
        return answer;
    } 
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends