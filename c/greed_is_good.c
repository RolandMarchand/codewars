int score(const int dice[5]) {
	int result[] = {0, 0, 0, 0, 0, 0};
	int score = 0;
	for (int i = 0; i < 5; i++) {
		result[dice[i] - 1]++;
	}
	if (result[0] > 2) {
		score += 1000;
		result[0] -= 3;
	}
	for (int i = 5; i > 0; i--) {
		if (result[i] > 2) {
			score += (i + 1) * 100;
			result[i] -= 3;
		}
	}
	score += result[0] * 100;
	score += result[4] * 50;
	return score;
}
