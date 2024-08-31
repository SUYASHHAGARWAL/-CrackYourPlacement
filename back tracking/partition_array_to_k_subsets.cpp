/*

day45


bool isKPartitionPossible(int a[], int n, int k)
    {
         //Your code here
         stack<int> st;
         int sum = 0;
         for(int i=0;i<n;i++) {
             sum += a[i];
         }
         if(sum % k) {
             return 0;
         }
         sum /= k;
         sort(a, a + n);
         for(int i=0;i<n;i++) {
             st.push(a[i]);
         }
         if(k >= n) return 0;
         while(!st.empty()){
             stack<int> s;
             int cur = 0;
             while(cur < sum && !st.empty()) {
                 int x = st.top();
                 st.pop();
                 if(cur + x <= sum) {
                     cur += x;
                 } else {
                     s.push(x);
                 }
             }
             if(cur != sum) {
                 return 0;
             }
             while(!s.empty()) {
                 int x = s.top();
                 s.pop();
                 st.push(x);
             }
         }
         return 1;
    }
    
    
    */