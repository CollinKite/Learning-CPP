// Non Word wrap users hate me :)
//Game Over 3.0 - it clearly spells out those elements planned to use. plus, it doesn’t make local a bunch of other elements we have no intention of using. Okay, you’ve seen two ways to make elements from a namespace local to your program. but which is the best technique?a language purist would say you shouldn’t employ either version of using and that you should always prefix each and every element from a namespace with its identifier. in my opinion, that’s like calling your best friend by his first and last name all the time. it just seems a little too formal. if you hate typing, you can employ the using directive.

#include <iostream>
using std::endl;
using std::cout;

int main()
{
	cout << "Game Over 3.0" << endl;
	return 0;
}