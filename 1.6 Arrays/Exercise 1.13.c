#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXSIZE 1000

int main(){

  int c,j,letter,word,state;
  letter=j=word=state=OUT;
  int word_sizes[MAXSIZE-1]={0};
  int ordered_frequencies[15]={0};
  int frequency=0;

  while((c=getchar())!=EOF){

    if (c==' '||c=='\t'||c=='\n'){

	if(state==IN){

	state=OUT;
        word_sizes[word]=letter;
        word++;
        letter=0;
    	}
    }

    else{

      state=IN;
      ++letter;
      }
  }

  if (state==IN){
	word_sizes[word]=letter;
	word++;
  }
  /*printing of asterisks per element's length in order of placement in the array
  for(int i=0;i<word;++i){
    printf("\n");
	for(int j=0;j<word_sizes[i];j++)
      printf("*\t");
  }
  */
  for (int size=0;size<15;++size){
	for(int i=0;i<word;++i){
	   if (size==word_sizes[i]){
		   ++frequency;
	   }
	}
    ordered_frequencies[j]=frequency;
	frequency=0;
	++j;
  }
  for(int k=0;k<15;++k){
      printf("%d",k);
    for (int l=0;l<ordered_frequencies[k];++l){
        printf("*",k+1);
    }
      printf("\n",k);
  }
    return 0;
}

