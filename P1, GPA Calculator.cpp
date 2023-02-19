#include<iostream>
using namespace std;
 int main()
 {
 	int sub1, sub2, sub3, avg;
 	float GPA;
 	
	cout<<"	*#*#*#*#*#*#*#*#";
 	cout<<"\n	GPA CALCULATOR";
 	cout<<"\n	*#*#*#*#*#*#*#*#";
 	
 	cout<<"\n\nEnter marks of subject 1 out of 100: ";
 	cin>>sub1;
 	
 	cout<<"Enter marks of subject 2 out of 100: ";
 	cin>>sub2;
 	
 	cout<<"Enter marks of subject 3 out of 100: ";
 	cin>>sub3;
 	
 	avg=(sub1+sub2+sub3)/3;
 	cout<<"\nYour average is = "<<avg;
 	
 	if(avg>85)
	GPA=4;
	else if(avg>80 && avg<= 85)
		 GPA= 3.5;
		 else if(avg>75 && avg<= 80)
		      GPA= 3.0;
			  else if(avg>65 && avg<= 75)
			  	   GPA= 2.5;
			  	   else if(avg>50 && avg<= 65)
						GPA= 2.0;
						else if(avg>40 && avg<= 50)
							 GPA= 1.5;
							 else if(avg>30 && avg<= 40)
								  GPA= 1.0;
								  else if(avg <= 30)
									   GPA= 0;
	cout<<"\n\nYour GPA is = "<<GPA;
 }
