#include <iostream.h>
using namespace std;

int main(void){

	long long int dom[10000], brian[10000], d[10000], b[10000];
	long int n;
	long int dom1, brian1, max_dom, max_brian;
	int i;

	cin>>n;
	for(i=0;i<n;i++){
		cin>>dom[i];
	}
	for(i=0;i<n;i++){
		cin>>brian[i];
	}

	for(int i=0;i<n-1;i++){
		dom1 = dom[i]-dom[i+1];
		d[i] = abs(dom1);
		brian1 = brian[i]-brian[i+1];
		b[i] = abs(brian1);
	}

	max_brian = b[0];
	max_dom = d[0];

	for(i=1;i<n-1;i++){
		if(d[i]>max_dom)
			max_dom = d[i];
		if(b[i]>max_brian)
			max_brian = b[i];
	}

	if(max_dom > max_brian)
		cout<<"Dom"<<"\n"<<max_dom;
	else if(max_dom < max_brian)
		cout<<"Brian"<<"\n"<<max_brian;
	else
		cout<<"Tie"<<endl;
	return 0;
}