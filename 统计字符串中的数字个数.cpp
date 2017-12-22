#include <stdio.h>
#include <string.h>
char a[2333];
char b[2333];
int main() {
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	int lena = 0;
	int lenb = 0;
	while((a[lena++]=getchar())!='\n');lena--;
//	while((b[lenb++]=getchar())!='\n');lenb--;
	int ans = 0;
	for(int i = 0 ; i < lena ; ++i) {
		if(a[i]>='0' && a[i]<='9') {
			ans++;
			while(a[i+1]>='0' && a[i+1]<='9' )i++;
		}
	}
	printf("%d\n",ans);
}
