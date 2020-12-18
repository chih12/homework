#include <iostream>
#include <string>

std::string enter_character(std::string in)
{
	std::string out = in;
	int if_first = 1;
	for (int i = 0; i < out.size(); ++i)
	{
		if (((int)out[i] < 65) || (((int)out[i] > 90) && ((int)out[i] < 97)) || ((int)out[i] > 122))
		{
			out.insert(i + 1, "\n");
			++i;
			if (if_first == 0)
			{
				out.insert(i-1, "\n");
				++i;
			}
			if_first = 1;
		}
		else
		{
			if_first = 0;
		}
	}
	return out;
}

int main()
{
	std::string a = "hello,world!",b="";
	std::cin >> b;
	std::cout <<enter_character(a) <<enter_character(b)<< std::endl;
	return 0;
}