/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** letterCombinations(char * digits, int* returnSize) {
	char letterDictionary[8][5] = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	char **letterResult;
	int i, pos, tempSize;
    //特殊情况处理
    if(strlen(digits)==0){
        *returnSize=0;
        return NULL;
    }
	//空间大小获取与初始化
	*returnSize = 1;
	for (i = 0; digits[i] != '\0'; i++) {
		*returnSize *= (digits[i] == '7' || digits[i] == '9') ? 4 : 3;
	}
	letterResult = (char**)malloc((*returnSize)*sizeof(char*));
	for (i = 0; i < (*returnSize); i++) {
		*(letterResult + i) = (char*)malloc((strlen(digits) + 1)*sizeof(char));
		letterResult[i][strlen(digits)] = '\0';
	}
	//字符串合成
	tempSize = (*returnSize);
	for (i = 0; digits[i] != '\0'; i++) {
		for (pos = 0; pos < *returnSize; pos++) {
			letterResult[pos][i] = letterDictionary[digits[i] - '2'][(pos) % tempSize / (tempSize / ((digits[i] == '7' || digits[i] == '9') ? 4 : 3))];
		}
		tempSize /= ((digits[i] == '7' || digits[i] == '9') ? 4 : 3);
	}
	return letterResult;
}
