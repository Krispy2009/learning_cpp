/*
Rewrite this using a loop:


begin:
    int sz = get_size();
    if (sz <= 0) {
          goto begin;
    }

*/


int main()
{

	int sz = get_size();
	while(sz<=0)
	{
		//Do things with sz
		//maybe  sz = get_size(), or sz--;
	}

	return 0;
}
