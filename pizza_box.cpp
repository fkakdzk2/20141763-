#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>


using namespace std;



typedef struct pos {

	long long data;

	int check;

}pos;

int t, row, col;

long long num;

pos arr[1100][1100];



int main(void) {



	scanf("%d", &t);

	for (int test = 0; test < t;test++)

	{

		scanf("%d %d", &row, &col);



		for (int j = 0; j < row;j++)

		{

			for (int k = 0; k < col;k++)

			{


				scanf("%lld", &num);

				arr[j][k].data = num;

				arr[j][k].check = 0;



			}

		}



		long long max = -1;

		long long sum = 0;



		int max_j, max_k;



		for (int j = 0;j < row;j++) //side check

		{

			max = -1;

			for (int k = 0;k < col;k++) {

				if (max < arr[j][k].data) {

					max = arr[j][k].data;

					max_j = j;

					max_k = k;

				}

			}

			arr[max_j][max_k].check++;



		}



		for (int j = 0;j < col;j++) // front check

		{

			max = -1;

			for (int k = 0;k < row;k++) {

				if (max < arr[k][j].data) {

					max = arr[k][j].data;

					max_j = j;

					max_k = k;

				}

			}

			arr[max_k][max_j].check++;

		}



		for (int j = 0;j < row;j++)

		{

			for (int k = 0;k < col;k++) {

				if (arr[j][k].check == 0) {

					sum += arr[j][k].data;

				}

			}

		}
		printf("%lld",sum);

	}

	return 0;





}