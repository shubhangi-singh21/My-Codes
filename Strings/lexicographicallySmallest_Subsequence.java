/* Given a string S of length N, the task is to find the lexicographically smallest K-length subsequence from the string S (where K < N). */

public class Main{
  public static int[] smallest(int[] nums, int k){
    
    Stack<Integer> st = new Stack<>();
    int n = nums.length;
    
    for( int i=0; i<n; i++){
      int val = nums[i];
      
      while( st.size() >0 && nums[i] < st.peek() && n-i-1 >= k-st.size()){
        st.pop();
      }
    }
    
    int ans[] = new int[k];
    int i = k-1;
    while( i>=0) ans[i--] = st.pop();
    
    return ans;
  }
