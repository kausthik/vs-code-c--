   int tar=1;
   int low=0;
   int high=n-1;
   while(high>=low){
      int p=low+(high-low)/2;
      if(a[p]==tar){
        if(a[p]==a[p+1]) low=p+1;
        else {
            cout<<"the upper bound is "<<p;
            break;
        }
      }
      else if(a[p]>tar) high=p+1;
      else low=p-1;
   }