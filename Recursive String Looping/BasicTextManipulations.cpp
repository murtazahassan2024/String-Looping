#include <iostream>
#include <string>

using namespace std;

string reverse(string in)
{   if (in.length() == 0)
{
	return in;
}
else
{
	return reverse(in.substr(1,in.length())) + in.at(0);
}
}

int count(string within, char find)
{
	int counter=0;
	if (within.length() == 0)
	{
		return 0;
	}
	else
	{
		if((within[0] == find))
		{
			counter++;
		}
	}
	return count(within.substr(1), find) + counter;
}

string onlyAlpha(string within, int index)
{
	int withinLength = within.size();
	string box="";
	if(index >= withinLength)
	{
		return box;
	}
	else
	{
		if((within[index]>64 && within[index]<90) || (within[index]>96 && within[index]<123))
		{
			box = within[index];
		}
	}
	return box + onlyAlpha(within, index+1);
}

string onlyAlpha(string within)
{
	string swap = onlyAlpha(within, 0);
	return swap;
}

int count(string within, string find)
{
	int counter=0;
	if (within.length() == 0)
	{
		return 0;
	}
	else
	{
		if(within.substr(0,find.length()) == find)
		{
			counter++;
		}
	}
	return count(within.substr(1), find) + counter;
}

string markDoubles(string within)
{
	if(within.size() < 2)
	{
	   return within;
	}
	else if (within[0] == within[1])
	{
        return within[0] + ("2" + markDoubles(within.substr(1)));
	}
	else
	{
     return within[0] + markDoubles(within.substr(1));
	}
}

bool isPalindrome(string within)
{
	if (within.size() <= 1)
	{
		return true;
	}
	else if (within[0] == within[within.length()-1] )
	{
		within=within.substr(1,(within.length()-2));
		isPalindrome(within);
		return true;
	}
	else
	{
		return false;
	}
}

string swapCase(string within,int index)
{
	string box="";
	if (index >= within.length())
	{
		return box;
	}
	else if (within[index]>65 && within[index]<90)
	{
		box = tolower(within[index]);
	}
	else
	{
		box = toupper(within[index]);
	}
	return box + swapCase(within, index + 1);
}

string swapCase(string within)
{
	string swap = swapCase(within, 0);
	return swap;

}

int countNs(string within)
{
	return count(within, 'n') ;
}
