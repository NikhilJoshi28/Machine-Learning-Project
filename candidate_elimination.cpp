#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

/*struct generic_hypothesis{
	string animal_name;
	bool hair,feathers,eggs,milk,airborne,aqatic,predator,toothhed,backbone,breathes,venomous,fins,tail,domestic,catsize;
	int legs,type;
};

struct specific_hypothesis{
	string animal_name;
	bool hair,feathers,eggs,milk,airborne,aqatic,predator,toothhed,backbone,breathes,venomous,fins,tail,domestic,catsize;
	int legs,type; 
};*/

int main(int argc, char const *argv[]){
	/*struct generic_hypothesis gh0;
	struct specific_hypothesis sh;
	*/
	int nodataset = 101;
	FILE *fp,*gp;
	fp = fopen("zoo.csv","r");
	gp = fopen("zoo.csv","r");
	if(fp==NULL || gp==NULL){
		cout<<"File not Found"<<endl;
	}
	else{
		char a1,a2;
		int count=0;
		while(a1!=EOF){
			a1=fgetc(fp);
			//cout<<a1;
			count++;
		}
		char arr[count];
		//fflush(fp);
		int p=0;
		while(p<count-1){
			a2=fgetc(gp);
			//printf("%c",a2);
			arr[p++]=a2;
		}
		vector<vector <char> > matrix(101);
		p=0;
		for(int i=0;i<count;i++){
			if(arr[i]!=',' && arr[i]!='\n' && arr[i]>=48 && arr[i]<=58){
				int a= arr[i];
				//cout<<a<<" ";
				matrix[p].push_back(a);
			}
			else if(arr[i]=='\n'){
				p++;
			}
		}
		/*
		for(int i=0;i<101;i++){
			for(int j=0;j<matrix[i].size();j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<"\n";
		}*/
		
		/*for(int i=0;i<16;i++){
			generic_boundary[0].push_back('A');
		}*/
		/*calculating generic and specific boundary for class 1*/
		char mrr1[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary1(mrr1,mrr1+16); 
		vector<vector<char> >generic_boundary1(100);
		int no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='1'){
				for(int j=0;j<16;j++){
					if(specific_boundary1[j]=='N'){
						specific_boundary1[j]=matrix[i][j];
					}
					else if(specific_boundary1[j]!='A' && matrix[i][j]!=specific_boundary1[j]){
						specific_boundary1[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary1[i]<<" ";
		}
		cout<<"\n";
		/*Class 2 -----------------------
		



		*/
		char mrr2[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary2(mrr2,mrr2+16); 
		vector<vector<char> >generic_boundary2(100);
		no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='2'){
				for(int j=0;j<16;j++){
					if(specific_boundary2[j]=='N'){
						specific_boundary2[j]=matrix[i][j];
					}
					else if(specific_boundary2[j]!='A' && matrix[i][j]!=specific_boundary2[j]){
						specific_boundary2[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary2[i]<<" ";
		}
		cout<<"\n";
		/*Class 3 -----------------------
		



		*/
		char mrr3[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary3(mrr3,mrr3+16); 
		vector<vector<char> >generic_boundary3(100);
		no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='3'){
				for(int j=0;j<16;j++){
					if(specific_boundary3[j]=='N'){
						specific_boundary3[j]=matrix[i][j];
					}
					else if(specific_boundary3[j]!='A' && matrix[i][j]!=specific_boundary3[j]){
						specific_boundary3[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary3[i]<<" ";
		}
		cout<<"\n";
		/*Class 4 -----------------------
		



		*/
		char mrr4[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary4(mrr4,mrr4+16); 
		vector<vector<char> >generic_boundary4(100);
		no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='4'){
				for(int j=0;j<16;j++){
					if(specific_boundary4[j]=='N'){
						specific_boundary4[j]=matrix[i][j];
					}
					else if(specific_boundary4[j]!='A' && matrix[i][j]!=specific_boundary4[j]){
						specific_boundary4[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary4[i]<<" ";
		}
		cout<<"\n";
		/*Class 5 -----------------------
		



		*/
		char mrr5[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary5(mrr5,mrr5+16); 
		vector<vector<char> >generic_boundary5(100);
		no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='5'){
				for(int j=0;j<16;j++){
					if(specific_boundary5[j]=='N'){
						specific_boundary5[j]=matrix[i][j];
					}
					else if(specific_boundary5[j]!='A' && matrix[i][j]!=specific_boundary5[j]){
						specific_boundary5[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary5[i]<<" ";
		}
		cout<<"\n";
		/*Class 6 -----------------------
		



		*/
		char mrr6[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary6(mrr6,mrr6+16); 
		vector<vector<char> >generic_boundary6(100);
		no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='6'){
				for(int j=0;j<16;j++){
					if(specific_boundary6[j]=='N'){
						specific_boundary6[j]=matrix[i][j];
					}
					else if(specific_boundary6[j]!='A' && matrix[i][j]!=specific_boundary6[j]){
						specific_boundary6[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary6[i]<<" ";
		}
		cout<<"\n";
		/*Class 7 -----------------------
		



		*/
		char mrr7[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
		vector< char >specific_boundary7(mrr7,mrr7+16); 
		vector<vector<char> >generic_boundary7(100);
		no_of_generic_b=1;
		for(int i=0;i<nodataset;i++){
			if(matrix[i][16]=='7'){
				for(int j=0;j<16;j++){
					if(specific_boundary7[j]=='N'){
						specific_boundary7[j]=matrix[i][j];
					}
					else if(specific_boundary7[j]!='A' && matrix[i][j]!=specific_boundary7[j]){
						specific_boundary7[j]='A';
					}
				}
			}
			/*else{
				for(int k=0;k<no_of_generic_b;k++){

				}
			}*/
		}
		for(int i=0;i<16;i++){
			cout<<specific_boundary7[i]<<" ";
		}
		cout<<endl;
	}	/*end*/
	return 0;
}