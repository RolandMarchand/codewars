/* 
 * Write a function that takes in a string of one or more words, and
 * returns the same string, but with all five or more letter words
 * reversed (Just like the name of this Kata). Strings passed in will
 * consist of only letters and spaces. Spaces will be included only
 * when more than one word is present.
 * 
 * Examples: spinWords( "Hey fellow warriors" ) => returns "Hey wollef
 * sroirraw" spinWords( "This is a test") => returns "This is a test"
 * spinWords( "This is another test" )=> returns "This is rehtona
 * test"
 */

/* 
 * Do not allocate memory for return string.
 * Assign the value to the pointer "result".
 */

void spin_words(const char *sentence, char *result)
{
	int i = 0;
	while (sentence[i] != '\0') {
		int look_ahead = 0;
		while (sentence[i + look_ahead] != ' '  \
		       && sentence[i + look_ahead] != '\0')
			look_ahead++;

		if (look_ahead < 5) {
			while (look_ahead-- >= 0) {
				result[i] = sentence[i];
				i++;
			}
			continue;
		}

		int anchor = i;
		while (look_ahead-- > 0) {
			result[i] = sentence[anchor + look_ahead];
			i++;
		}
	}
  
	result[i] = '\0';
}
