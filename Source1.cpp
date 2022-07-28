oid parser()
{
	for (int i = 0; i < counter; i++)
	{
		if (curr_token == "#")
		{
			lol++;
			curr_token = x0[lol][0];
			if (curr_token == "include")
			{
				lol++;
				curr_token = x0[lol][0];
				if (curr_token == "<")
				{
					lol++;
					curr_token = x0[lol][0];
					if (curr_token == "iostream" || curr_token == "string" || curr_token == "fstream" || curr_token == "math.h")
					{
						lol++;
						curr_token = x0[lol][0];
						if (curr_token == ">")
						{
							cout << "this line is grammarly clear" << curr_token << endl;
							lol++;
							curr_token = x0[lol][0];