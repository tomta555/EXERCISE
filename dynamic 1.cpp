#include<iostream>
#include<iomanip>
using namespace std;



void myMatrix(int ***p, int N){
	*p=new int*[N];
	for(int i=0;i<N;i++){
		*p[i]=new int[N];
	}
	for(int i=0;i<N;i++){
		for(int j=0,k=i;j<N;j++,k++){
			*p[i][j]=k;
		}
	}
}

void freeSpace(int **p,int N){
	for(int i=0;i<N;i++){
		delete [] p[i];
	}
	delete [] p;	
}



int main(){
int **p;
int N;
cout << "N = ";
cin >> N;
myMatrix(&p,N);
for(int i=0;i < N; i++){
for(int j=0;j < N; j++){
cout << setw(4) << p[i][j];
}
cout << "\n";
}
freeSpace(p,N);
return 0;
}
