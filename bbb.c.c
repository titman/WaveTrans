#include <stdio.h>

float data[32*20] = {0.1768,0.2165,0.4507,0.5863,0.4146,0.0,0.0,0.4146,0.6374,0.5,0.375,0.5154,0.5728,0.5,0.559,0.4146,0.4841,0.0,0.125,0.0,0.0,0.0,0.3062,0.4677,0.0,0.0,0.0,0.7906,0.696,0.4507,0.433,0.5303,0.4507,0.4507,0.5449,0.559,0.2795,0.0,0.4507,0.4507,0.0,0.2165,0.433,0.0,0.0,0.0,0.0,0.375,0.5995,0.4677,0.25,0.3307,0.4146,0.3953,0.0,0.0,0.3062,0.125,0.7603,0.7906,0.0,0.0,0.3062,0.0,0.0,0.2165,0.0,0.375,0.5995,0.375,0.3536,0.0,0.1768,0.3307,0.5,0.4507,0.125,0.2795,0.125,0.4677,0.4146,0.2165,0.6847,0.6847,0.0,0.125,0.0,0.433,0.2165,0.0,0.3953,0.5303,0.5,0.4841,0.4677,0.5154,0.3536,0.3307,0.3307,0.375,0.3062,0.5303,0.1768,0.1768,0.0,0.0,0.375,0.3307,0.5449,0.25,0.125,0.0,0.5449,0.125,0.4146,0.433,0.3062,0.0,0.4841,0.125,0.0,0.0,0.0,0.125,0.0,0.0,0.2795,0.433,0.433,0.2795,0.4146,0.125,0.3307,0.0,0.0,0.0,0.1768,0.3062,0.2165,0.2795,0.375,0.125,0.2165,0.0,0.0,0.0,0.3536,0.4841,0.4507,0.0,0.25,0.0,0.0,0.375,0.3536,0.25,0.625,0.6614,0.3307,0.0,0.0,0.0,0.0,0.0,0.0,0.3953,0.5449,0.3953,0.125,0.2795,0.0,0.0,0.0,0.375,0.1768,0.125,0.0,0.0,0.125,0.0,0.0,0.0,0.3062,0.2165,0.0,0.3536,0.5,0.25,0.375,0.0,0.0,0.0,0.0,0.2165,0.0,0.0,0.25,0.0,0.2165,0.0,0.0,0.0,0.2795,0.0,0.0,0.0,0.0,0.25,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.3307,0.2165,0.0,0.25,0.0,0.0,0.0,0.0,0.0,0.5995,0.696,0.0,0.0,0.2795,0.0,0.0,0.3062,0.0,0.0,0.0,0.0,0.3953,0.25,0.3536,0.0,0.3953,0.0,0.1768,0.0,0.0,0.5303,0.559,0.0,0.125,0.0,0.2795,0.0,0.25,0.0,0.0,0.2795,0.3307,0.3062,0.0,0.0,0.3536,0.0,0.3062,0.0,0.0,0.125,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5303,0.2795,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2165,0.0,0.0,0.0,0.0,0.0,0.25,0.3062,0.0,0.3062,0.4146,0.2795,0.0,0.0,0.0,0.6124,0.3062,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.559,0.3062,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.5995,0.6614,0.1768,0.0,0.0,0.5154,0.3307,0.375,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2795,0.25,0.2165,0.0,0.0,0.3307,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.559,0.5863,0.0,0.0,0.125,0.433,0.125,0.0,0.0,0.3536,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.3062,0.5449,0.3953,0.125,0.0,0.0,0.0,0.2165,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2795,0.0,0.0,0.0,0.0,0.0,0.3062,0.3062,0.0,0.0,0.2795,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.3062,0.5995,0.125,0.0,0.0,0.4507,0.0,0.0,0.4146,0.5995,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.3062,0.5449,0.3953,0.0,0.0,0.3062,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.125,0.0,0.25,0.0,0.0,0.4841,0.4507,0.3062,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2795,0.3307,0.5728,0.6124,0.4677,0.1768,0.5863,0.4677,0.0,0.0,0.3062,0.5728,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2165,0.0,0.0,0.6495,0.5728,0.3062,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.5449,0.6124,0.4841,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.25,0.1768,0.0,0.3953,0.4146,0.2795,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.4146,0.375,0.0,0.0,0.0,0.375,0.0,0.0,0.4146,0.4146,0.0,0.0,0.6124,0.4507,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.3536,0.0,0.0,0.1768,0.433,0.0,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.1768,0.0,0.0,0.0,0.0,0.2165,0.0,0.25,0.4677,0.5,0.4146,0.3062,0.0,0.0,0.0,0.0,0.0,0.4677,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

int main(int argc, char *argv[]) {
	
	float dataa[32][20] = {0};

	for (int i=0; i<32; i++) {
		
		for (int j=0; j<20; j++) {
		
			dataa[i][j] = data[i*20 + j];
		}
	}
	
	int sortData[20][4];
	float sortValue[20][4];	
	
	for (int i=0; i<4; i++) {
		
		for (int j=0; j<20; j++) {
		
			sortData[j][i] = -1;
			sortValue[j][i] = -1;
		}
	}
	
	for (int i=0; i<20; i++) {	
		
		for (int k=0; k<4; k++) {
			
			int tmp = -1;
			float tmpData = 0;
			int aa = 0;
			
			for (int j=0; j<32; j++) {
							
				if (dataa[j][i] > tmpData && dataa[j][i] != 0) {
					tmp = j;
					tmpData = dataa[j][i];
					aa = 1;
				}
			}
			
			if	(aa == 1) {
				
				sortValue[i][k] = dataa[tmp][i];
				dataa[tmp][i] = 0;
				sortData[i][k] = tmp;
				aa = 0;
			}
		}
	}
	
	////////////////////////////
	
	printf("$json_value = '[");
		
	for (int i=0; i<4; i++) {
		
		printf("[");
		
		for (int j=0; j<20; j++) {
			printf("%f", sortValue[j][i]);
			if (j<19) {
						
				printf(",");
			}
		}
		
		
		printf("]");
		if (i<3) {
			
			printf(",");
		}
	}
	
	printf("]';\n\n");
	
	
	
	
	
	printf("$json = '[");
	
	
	for (int i=0; i<4; i++) {
		
		printf("[");
		
		for (int j=0; j<20; j++) {
			printf("%d", sortData[j][i]);
			if (j<19) {
						
				printf(",");
			}
		}
		
		
		printf("]");
		if (i<3) {
			
			printf(",");
		}
	}
	
	printf("]';");
}