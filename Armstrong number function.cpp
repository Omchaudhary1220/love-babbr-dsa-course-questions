string armstrongNumber(int n){
       int temp=n;
       int val=0,digit;
       string s=to_string(n);
       int count=s.length();
       while(temp){
           digit=temp%10;
           val=val+pow(digit,count);
           temp/=10;
       }
       if(n==val){
           s="Yes";
       }
       else{
           s="No";
       }
       return s;
    }
