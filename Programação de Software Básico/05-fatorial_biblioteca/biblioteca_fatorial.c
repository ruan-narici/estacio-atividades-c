float fact(int num) {
	float result;
	
	for (int i = num - 1; i > 0; i--) {
		if (i == num - 1) {
			result = num * i;
		} else {
			result *= i;
		}
	}
	return result;
}
