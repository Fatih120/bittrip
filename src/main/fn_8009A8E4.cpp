// FATE bp for adding score pluses(?)

extern "C" {

	void fn_8009A8E4(int param_1, int param_2) {
		// param2 seems to be the "new score"
		*(int *)(param_1 + 0x1cae8) = param_2;
		
		if (param_2 >= 0) {
			return; // check 8005dba4 and bl->0x8009A8D8
		}
		// guess this is just safety clamping to not be negative
		*(int *)(param_1 + 0x1cae8) = 0;
		return;
	}

}