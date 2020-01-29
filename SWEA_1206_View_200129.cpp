/* 1206. [S/W �����ذ� �⺻] 1���� - View D3
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV134DPqAA8CFAYh&categoryId=AV134DPqAA8CFAYh&categoryType=CODE

��� ������ ���� �ݺ�:
	������ �¿� 4ĭ �� ���� ������ ������ Ȯ��
		-> ������ ���� ���信 ������
		-> ���� 2ĭ�� Ȯ�� �Ұ� => �ٷ� 3ĭ �ǳʶٱ�
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, map[1000]; //���� ���̴� �׻� 1000 ����
	int answer;
	for (int testCase = 1; testCase <= 10; testCase++) {
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> map[i];
		}//end of input

		//solve
		answer = 0;
		int around;
		for (int i = 2; i < N - 2; i++) {
			around = max({ map[i - 2], map[i - 1], map[i + 1], map[i + 2] }); //�¿� 4ĭ �� ���� ���� ������ ����
			if (map[i] > around) { //������ Ȯ��
				answer += map[i] - around;
				i += 2; //���� �� ĭ�� ������ Ȯ�� �Ұ�
			}
		}

		//answer
		cout << "#" << testCase << " " << answer << '\n';
	}
} //end of main