#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char matrix[101][17];
char specific_boundary[] = {'N','N','N','N','N','N','N','N','N','N','N','N','N','N','N','N'};
char generic_boundary[100000][200]; 

int check_consistancy(char *sb,char* gb){
	for(int i=0;i<16;i++){
		if(gb[i]!='A' && gb[i]!=sb[i]){
			return 0;
		}
	}
	return 1;
}
void candidate_elimination(char x,int nodataset){	
	for(int i=0;i<16;i++){
		specific_boundary[i]='N';
		generic_boundary[0][i]='A';
	}
	int no_of_generic_b=1,top_generic_b=0;
	for(int i=0;i<3;i++){
		if(matrix[i][16]==x){
			//Checking if all generic boundaries are consistant wrt to specific boundary
			for(int j=top_generic_b;j<no_of_generic_b;j++){
				int x=check_consistancy(specific_boundary,generic_boundary[j]);
				if(x==0 && no_of_generic_b==1){	
					no_of_generic_b--;
				}
				else if(x==0 && no_of_generic_b>1){
					for(int k=0;k<16;k++){
						generic_boundary[j][k]=generic_boundary[no_of_generic_b-1][k];
					}
					no_of_generic_b--;
				}
			}
			for(int j=0;j<16;j++){
				if(specific_boundary[j]=='N'){
					specific_boundary[j]=matrix[i][j];
				}
				else if(specific_boundary[j]!='A' && matrix[i][j]!=specific_boundary[j]){
					specific_boundary[j]='A';
				}
			}
		}
		else{
			int xx=no_of_generic_b;
			//top_generic_b=xx;
			for(int j=top_generic_b;j<xx;j++){
				top_generic_b=xx;
				//xx=no_of_generic_b;
				for(int k=0;k<16;k++){
					if(generic_boundary[j][k]=='A'){
						if(k==12){
							//matrix[i][k]=0;
							if(matrix[i][k]=='0'){								
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='2';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='4';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='5';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='6';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='8';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
							}
							if(matrix[i][k]=='2'){
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='0';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='4';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='5';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='6';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='8';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
							}

							if(matrix[i][k]=='4'){
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='2';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='0';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='5';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='6';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='8';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
							}

							if(matrix[i][k]=='5'){
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='2';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='4';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='0';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='6';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='8';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
							}
							if(matrix[i][k]=='6'){
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='2';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='4';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='5';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='0';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='8';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
							}
							if(matrix[i][k]=='8'){
								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='2';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='4';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='5';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='6';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;

								for(int l=0;l<16;l++){
									if(l==12){
										generic_boundary[no_of_generic_b][l]='0';
									}
									else{
										generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];	
									}
								}
								no_of_generic_b++;
							}
						}
						else{									
							for(int l=0;l<16;l++){
								if(l!=k){
									generic_boundary[no_of_generic_b][l]=generic_boundary[j][l];
								}
								else if(l==k && k!=12){
									if(matrix[i][l]=='1'){
										generic_boundary[no_of_generic_b][l]='0';
									}
									else{
										generic_boundary[no_of_generic_b][l]='1';
									}
								}
							}
							no_of_generic_b++;
						}
					}
				}

				//printf("%d %d**",top_generic_b,no_of_generic_b);
				//xx=no_of_generic_b;
			}	
		}
	}
	printf("%d %d\n",top_generic_b,no_of_generic_b);
	for(int i=top_generic_b;i<no_of_generic_b;i++){
		printf("%s\n",generic_boundary[i] );
	}
} 
int main(int argc, char const *argv[])
{
	/* code */
	int nodataset = 101;
	FILE *fp,*gp;
	fp = fopen("zoo.csv","r");
	gp = fopen("zoo.csv","r");
	if(fp==NULL || gp==NULL){
		printf("File not Found\n"); 
		///cout<<"File not Found"<<endl;
	}
	else{
		char a1,a2;
		int count=0;
		while(a1!=EOF){
			a1=fgetc(fp);
			count++;
		}
		char arr[count];
		int p=0;
		while(p<count-1){
			a2=fgetc(gp);
			arr[p++]=a2;
		}
		p=0;
		int m=0;
		for(int i=0;i<count;i++){
			if(arr[i]!=',' && arr[i]!='\n' && arr[i]>=48 && arr[i]<=58){
				char a= arr[i];
				//printf("%c\n",a);
				//cout<<a<<" ";
				matrix[p][m]=a;
				m++;
			}
			else if(arr[i]=='\n'){
				p++;
				m=0;
			}
		}
		/*for(int i=0;i<101;i++){
			for(int j=0;j<17;j++){
				printf("%c ",matrix[i][j]);
			}
			printf("\n");
		}*/
		char x;
		scanf(" %c",&x);
		candidate_elimination(x,101);
		for(int i=0;i<16;i++){
			printf("%c ",specific_boundary[i]);
		}
	}
	return 0;
}