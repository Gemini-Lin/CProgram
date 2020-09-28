#include<stdio.h>
#include<string.h>

int main()
{
	char smallest_word[20],largest_word[20],word[20];
	int len;
	printf("Enter word: ");
	scanf("%s",word);
	strcpy(smallest_word,word);
	strcpy(largest_word,word);
    for(;;)
    {
    	printf("Enter word: ");
		scanf("%s",word);
    	len=strlen(word);
    	if(strcmp(word,smallest_word)<0)
    	strcpy(smallest_word,word);
    	if(strcmp(word,largest_word)>0)
    	strcpy(largest_word,word);
    	if(len==4)
    	break;
    }
    printf("\nSmallest word: %s\n",smallest_word);
    printf("Largest word: %s\n",largest_word);
    return 0;
}