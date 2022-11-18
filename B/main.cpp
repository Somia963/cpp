    using namespace std;
    int main() {

        long long e;
    	long  long  i, lowst, position;
    	cin>> e;

    	int v[e];

    	for(i = 0; i < e; i++) {
    			cin>> v[i];
    	}
    	lowst = v[0];
    	position = 1;
    	for(i = 0; i < e; i++) {
    		if(lowst > v[i]) {
    			lowst = v[i];
    			position =i+1;
    		}
    	}

    	cout<<" "<< position;

    	return 0;
    }
