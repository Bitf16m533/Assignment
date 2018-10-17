#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
		int arr1[2];
		int arr2[2];
		int arr3[2];
		int arr4[2];
		int arr5[2];
		int arr6[2];
		int arr7[2];
		int arr8[2];
		int arr8[2];
	    int arr9[2];
		int arr10[2];
		pipe(arr1);
		pipe(arr2);
		pipe(arr3);
		pipe(arr4);
		pipe(arr5);
		pipe(arr6);
		pipe(arr6);
		pipe(arr7);
		pipe(arr8);
		pipe(arr9);
		pipe(arr10);
		int a[1000];
		for(int i=0;i<size;i++)
			a[i]=i+1;
		int cpid=fork();
		int s=0;
		if(cpid==0)
		{	
		for(int x=0;x<100;x++)	

	{
	s=s+a[x];
	}
	write(arr1[1],&s,sizeof(s));
	printf("s from 1st pipe is=%d\n",s);

}
else
{
	int cpid1=fork();
	if(cpid1==0)
	{
		int x=100;
		int e=200;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr2[1],&s,sizeof(s));
	printf("s from 2nd pipe is=%d\n",s);
	}
else
{
	int cpid2=fork();
	if(cpid2==0)
	{
		int x=200;
		int e=300;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr3[1],&s,sizeof(s));
	printf("s from 3rd pipe is=%d\n",s);
	}
else
{
	int cpid3=fork();
	if(cpid3==0)
	{
		int x=300;
		int e=400;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr4[1],&s,sizeof(s));
	printf("s from 4th pipe is=%d\n",s);
	}
else
{
	int cpid4=fork();
	if(cpid4==0)
	{
		int x=400;
		int e=500;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr5[1],&s,sizeof(s));
	printf("s from 5th pipe is=%d\n",s);
	}
else
{
	int cpid5=fork();
	if(cpid5==0)
	{
		int x=500;
		int e=600;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr6[1],&s,sizeof(s));
	printf("s from 6th pipe is=%d\n",s);
	}
else
{
	int cpid6=fork();
	if(cpid6==0)
	{
		int x=600;
		int e=700;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr7[1],&s,sizeof(s));
	printf("s from 7th pipe is=%d\n",s);
	}
else
{
	int cpid7=fork();
	if(cpid7==0)
	{
		int x=700;
		int e=800;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr8[1],&s,sizeof(s));
	printf("s from 8th pipe is=%d\n",s);
	}
else

{
	int cpid8=fork();
	if(cpid8==0)
	{
		int x=800;
		int e=900;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr9[1],&s,sizeof(s));
	printf("s from 9th pipe is=%d\n",s);
	}
else

{
	int cpid9=fork();
	if(cpid9==0)
	{
		int x=900;
		int e=1000;
		for(;x<e;x++)	
	{
	s=s+a[x];
	}
		write(arr10[1],&s,sizeof(s));
	printf("s from 10th pipe is=%d\n",s);
	}

else
{

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);

wait(NULL);



int s,s_1,s_2,ss_3,s_4,s_5,s_6,s_7,s_8,s_9;

// now reading values from 10 pipes

read(arr1[0],&s,sizeof(s));

read(arr2[0],&s_1,sizeof(s_1));

read(arr3[0],&s_2,sizeof(s_2));

read(arr4[0],&s_3,sizeof(s_3));

read(arr5[0],&s_4,sizeof(s_4));

read(arr6[0],&s_5,sizeof(s_5));

read(arr7[0],&s_6,sizeof(s_6));

read(arr8[0],&s_7,sizeof(s_7));

read(arr9[0],&s_8,sizeof(s_8));

read(arr10[0],&s_9,sizeof(s_9));



//total_size variable will add the ss of 10 pipes



int total_s=0;





total_s=s+s_1+s_2+s_3+s_4+s_5+s_6+s_7+s_8+s_9;

printf("total_s is=%d\n",total_s);


}

}

}

}

}

}

}

}

}

}

}

															

}

