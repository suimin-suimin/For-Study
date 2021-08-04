#include<stdio.h>

int main(){
  char buf[80],block[10][10]={};
	int i,j,h,w=0;
  
	 //入出力用のコード h行w列の入力を想定
	fgets(buf,sizeof(buf),stdin);
	sscanf(buf,"%d %d\n",&h,&w);

	for(i=0;i<h;i++){
		fgets(buf,sizeof(buf),stdin);
		sscanf(buf,"%s\n",block[i]);
  //printf("%s\n",block[i]);
	}
  //デバッグPrint用
  /*
  printf("h:%d w:%d\n",h,w);
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      printf("%c",block[i][j]);
    }
    puts("");
  }
  */

	return 0;
}
