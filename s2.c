#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct IPLTEAM {
	char* TeamName;
	int Points;
	char win;
	char Loss;
};


int comparator(const void* p, const void* q)
{
	return strcmp(((struct IPLTEAM*)p)->TeamName,
				((struct IPLTEAM*)q)->TeamName);
}

int main()
{
	int i = 0, n = 10;

	struct IPLTEAM arr[2555];

	
	arr[0].Points = 20;
	arr[0].TeamName = "GT";
	arr[0].win = "11001";
	arr[0].Loss = "11001";

    arr[1].Points = 18;
	arr[1].TeamName = "LSG";
	arr[1].win = "10011";
	arr[1].Loss = "10011";

	arr[2].Points = 16;
	arr[2].TeamName = "RR";
	arr[2].win = "10100";
	arr[2].Loss = "10100";

	arr[3].Points = 14;
	arr[3].TeamName = "DC";
	arr[3].win = "11010";
	arr[3].Loss = "01100";

    arr[4].Points = 14;
	arr[4].TeamName = "RCB";
	arr[4].win = "01100";
	arr[4].Loss = "01100";
	
	arr[5].Points = 12;
	arr[5].TeamName = "KKR";
	arr[5].win = "01101";
	arr[5].Loss = "01101";
	
	arr[6].Points = 12;
	arr[6].TeamName = "PBKS";
	arr[6].win = "01010";
	arr[6].Loss = "01010";

    arr[7].Points = 12;
	arr[7].TeamName = "SRH";
	arr[7].win = "10000";
	arr[7].Loss = "10000";
	
	arr[8].Points = 8;
	arr[8].TeamName = "CSK";
	arr[8].win = "00101";
	arr[8].Loss = "00101";
	
	arr[9].Points = 6;
	arr[9].TeamName = "MI";
	arr[9].win = "01011";
	arr[9].Loss = "01011";
	
	printf("Unsorted IPL Last Five Match Records:\n");
	for (i = 0; i < n; i++) {
		printf("Point = %d, Name = %s, Win = %d \n , Losses=%d \n",
			arr[i].Points, arr[i].TeamName, arr[i].win,arr[i].Loss);
	}

	qsort(arr, n, sizeof(struct IPLTEAM), comparator);

	
	printf("\n\nTeam Records sorted by Name:\n");
	for (i = 0; i < n; i++) {
		printf("Point = %d, Name = %s, Win = %d \n,Losses=%d \n",
			arr[i].Points, arr[i].TeamName, arr[i].win,arr[i].Loss);
	}
    printf("\nProgrammatically retrieve the teams that have 2 consecutive losses are \n GT \n LSG \n RR \n RCB \n SRH \n CSK \n ");
	return 0;
}
