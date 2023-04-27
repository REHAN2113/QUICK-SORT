    int partition(int a[],int lb,int ub)
    {
    	  int j,t;
    	  int pivot=a[ub];
    	  int i=(lb-1);
    	  for(j=lb;j<=ub-1;j++)
    	  {
    	  	if(a[j]<=pivot)
    	  	{
    	  		i++;
    	  		t=a[i];
    	  		a[i]=a[j];
    	  		a[j]=t;
			  }
    	  	
    	  	
		  }
		       t=a[i+1];
		       a[i+1]=a[j];
		       a[j]=t;
		       
		       return(i+1);
	}
	void quicksort(int a[],int lb,int ub)
    {
	if(lb<ub)
    {
            int j;
			j=partition(a,lb,ub);
			quicksort(a,lb,j-1);
			quicksort(a,j+1,ub);	
    	
	}
    	
    	
	}



      void main()
      {
      	int a[100],i,n;
		  printf("\n nenter limit:");
		  scanf("%d",&n);
		  printf("\nENTER the nos:");
		   for(i=0;i<n;i++)
		   {
		   	scanf("%d",&a[i]);
		   	
		   }
		   quicksort(a,0,n-1);
		   printf("\nSorted array=");
		   for(i=0;i<n;i++)
		   {
		   	printf("%d\t",a[i]);
		   	
		   }
	  }
