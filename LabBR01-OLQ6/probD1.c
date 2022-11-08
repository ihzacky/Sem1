#include <stdio.h>

int main() {
    
    int t;
    scanf("%d", &t);
    

    int result[t];
    

    for(int i=0; i<t; i++) {
      
        int n, a, b, c, d;
        scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
        
        
        int count = 0;
        
       
        for(int i=1; i<=n; i++) {
            
            if(i%a == 0 || i%b == 0 || i%c == 0 || i%d == 0) {
                count++;
            }
        }
        
        
        result[i] = count;
    }
    
    
    for(int i=0; i<t; i++) {
        printf("Case #%d: %d\n", i+1, result[i]);
    }
    
    return 0;
}