#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i = 1;i<=n;i++) {
	    for(int j = 1;j<=i;j++) {
	        cout << j << " "; 
	    }
	    cout << "\n"; 
	}
	
	int k = 1; 
	
	for(int i = 1;i<=n;i++) {
	    for(int j = 1;j<=k;j++){
	        cout << j << " ";
	    }
	    cout << "\n"; 
	    
	    if(i<(n/2 + 1)) k++;
	    else k--; 
	}
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++) {
	    cin >> a[i]; 
	}
	
	
	int l = , r = n-1; 
	
	while(l<r) {
	    swap(a[l], a[r]); 
	    l++;
	    r--; 
	}
	
	// linear search 
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++) {
	    cin >> a[i]; 
	}
	
	int x;
	cin >> x; 
	int flag = -1; 
	for(int i = 0;i<n;i++) {
	    if(a[i] == x) {
	        flag  = i; 
	        break; 
	    }
	}
	
	cout << flag; 
	
	// count 
	int cnt = 0; 
	for(int i = 0;i<n;i++) {
	    if(a[i]==x) cnt++; 
	}
	cout << cnt; 
	
	
	// query question 
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0;i<n;i++){
	    cin >> a[i]; 
	}
	
	int prefix[n]; 
	
	// Pre computation 
	for(int i = 0;i<n;i++){
	    if(i==0) pre[i] = a[i]; 
	    else pre[i] = pre[i-1] + a[i]; 
	}
	
	int q;
	cin >> q; 
	// tle 
	while(q--){
	    int l, r;
	    cin >> l >> r; 
	    
	    // took help of pre-computation 
	    int s = pre[r]; 
	    
	    if(l>0) s = s - pre[l-1]; 
	    
	    cout << s << "\n"; 
	}
	
	
	
	
	for(int i = 0;i<n;i++) {
	    for(int j = i;j<n;j++){
	        for(int k = i;k<=j;k++){
	            cout << a[k] << " "; 
	        }
	        cout << endl; 
	    }
	}
	
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++) cin >> a[i]; 
	int prefix[n]; 
	for(int i = 0;i<n;i++) {
	    if(i==0) prefix[i] = a[i]; 
	    else prefix[i] = prefix[i-1] + a[i]; 
	}
	
	int maxi = 0; 
	
	for(int i = 0;i<=n-k;i++) {
	    int r = i + k - 1;
	    int l = i; 
	    
	    int sum = prefix[r]; 
	    
	    if(l>0) sum -= prefix[l-1]; 
	    
	    if(sum > maxi) maxi = sum; // first way
	    maxi = max(maxi, sum); // second way
	}
	cout << maxi; 
	
	
	
	
	int sum = 0;
	for(int i = 0;i<k;i++) sum += a[i]; 
	
	int l = 0, r = k - 1; 
	int maxi = sum; 
	while(r < n-1) {
	    r++; 
	    sum += a[r]; 
	    
	    sum -= a[l]; 
	    l++; 
	    
	    maxi = max(maxi, sum); 
	}
	cout << maxi << endl; 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}