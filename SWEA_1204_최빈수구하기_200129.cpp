/* 1204. [S/W �����ذ� �⺻] 1���� - �ֺ�� ���ϱ� D2
https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV13zo1KAAACFAYh&categoryId=AV13zo1KAAACFAYh&categoryType=CODE

���� �� �л� ���� ����ϴ� �迭 ����
	-> �Է¹��� ����(����)�� index�� �ؼ� �迭 �� 1�� ������Ű��
	=> ���� ���� ū index�� ����
*/
#include<iostream>
using namespace std;

int main()
{
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> test_case;
		int score[101] = {};
		int temp;
		for (int i = 0; i < 1000; i++) {
			cin >> temp;
			score[temp]++;
		}

		int ans = 0, num = 0; //ans: �ֺ��, num: �ֺ���� ������ Ƚ��
		for (int i = 0; i < 101; i++) {
			if (score[i] >= num) {
				num = score[i];
				ans = i;
			}
		}
		cout << "#" << test_case << " " << ans << '\n';
	}
}