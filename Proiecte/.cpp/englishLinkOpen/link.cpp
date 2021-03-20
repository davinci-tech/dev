#include <bits/stdc++.h>

int main(int argc, char **argv, char **env)
{
	std::string nume = argv[1], cmd = "start msedge ", tmp;
	std::vector<std::string> links;

	links.push_back("https://learnenglish.britishcouncil.org/english-grammar-reference/");
	links.push_back("https://7esl.com/");
	links.push_back("https://www.englishradar.com/english-grammar/"); 
	links.push_back("https://www.englishtenses.com/tenses/");
	links.push_back("https://www.ef.com/wwen/english-resources/english-grammar/"); // https://www.ef.com/wwen/english-resources/english-grammar/conditional/

	for (int i = 0; i < links.size(); i++)
	{
		if (i == 1)
			tmp = cmd + links[i] + nume + "-tense";
		else if (i == 4)
			tmp = cmd + links[i] + nume + "-tense";
		else
			tmp = cmd + links[i] + nume;

		system(tmp.c_str());
	}

	return 0;
}
