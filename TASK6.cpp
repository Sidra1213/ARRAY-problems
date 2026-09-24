#include<iostream>
using namespace std;
int main(){
	
	int daily_study_hours;
	string assignment_status;
	string upcoming_prepation;
		cout<<"Enter the study hours : ";
	cin>>daily_study_hours;
	for(int i=0; i<=24; i++){
		if(daily_study_hours!=i){
		cout<<"Invlid comand ::you cant use special chracters or alphabets or you also cant use numer abouve 24 "<<endl;
		return 0;
		
}
		
	}

//	 if(daily_study_hours<6){
//		cout<<"YOU HAVE TO FOCUS MORE ON YOUR STUDY ";
//		return 0;
//	}
	
	
	
	
	cout<<"Enter the assignment status : ";
	cin>>assignment_status;
	
	
	
	if(assignment_status=="pending"){
		cout<<"PLEASE COMPLETE YOUR PAST TASK :";
	}
	else if(assignment_status=="done"){
		cout<<"CONGRATS YOUR PAST TASK IS COMPLETE SO YOU CAN ADD YOUR UMPCOMING PREPATION TASK :"; 
		cout<<endl;
		cout<<"Enter the upcoming prepation : ";
	cin>>upcoming_prepation;
	}
	cout<<endl;
	
	
	cout<<"=====DEAR DIARY========"<<endl;
	cout<<"Your daily study hours : "<<daily_study_hours<<endl;
	cout<<"Your task status : "<<assignment_status<<endl;
	if (assignment_status=="done"){
		cout<<"Your upcoming task list : "<<upcoming_prepation<<endl;
	}
	else{
		
		cout<<"You have to complete your past task frist : "<<endl;
		cout<<"Upcoming task list :NONE TASK "<<endl;
	}
	
	cout<<"==========================";
}


