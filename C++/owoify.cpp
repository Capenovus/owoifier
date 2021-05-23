#include <iostream>
#include <random>

//Very bad code
std::wstring owoify(std::wstring STR) {
	std::wstring RSTR = STR;
	std::random_device rd;
	std::default_random_engine e1(rd());
	const wchar_t *prefix[] = {
			L"OWO", L"OwO", L"0w0", L"< 3", L"UwU", L"HIIII!", L"H - hewwo??", L"Huohhhh."
	};
	std::uniform_int_distribution<int> pr(0, 8);
	std::wstring px = prefix[pr(e1)];

	const wchar_t *suffix[] = {
			L"..,", L"fwendo", L"Huoh.", L"._.", L";-;", L";_;", L"(；ω；)", L"ÙωÙ", L"UwU", L"(人◕ω◕)", L"(●´ω｀●)", L"(✿ ♡‿♡)",
			L"(◠‿◠✿)", L"^ - ^", L"^ _ ^", L"> _ <", L"> _ >", L":P", L":3", L";3", L"x3", L":D", L"xD", L"XDDD", L"（＾ｖ＾）",
			L"ㅇㅅㅇ", L"(• o •)", L"ʕ•̫͡•ʔ", L"ʕʘ‿ʘʔ", L"(　'◟ ')"
	};
	std::uniform_int_distribution<int> sr(0, 30);
	std::wstring sx = suffix[sr(e1)];

	if (RSTR.find(L"r") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"r")) != std::string::npos) { RSTR.replace(pos, 1, L"w"); } }
	if (RSTR.find(L"l") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"l")) != std::string::npos) { RSTR.replace(pos, 1, L"w"); } }
	if (RSTR.find(L"R") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"R")) != std::string::npos) { RSTR.replace(pos, 1, L"W"); } }
	if (RSTR.find(L"L") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"L")) != std::string::npos) { RSTR.replace(pos, 1, L"W"); } }
	if (RSTR.find(L"no") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"no")) != std::string::npos) { RSTR.replace(pos, 2, L"nu"); } }
	if (RSTR.find(L"have") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"have")) != std::string::npos) { RSTR.replace(pos, 4, L"haz"); } }
	if (RSTR.find(L"has") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"has")) != std::string::npos) { RSTR.replace(pos, 3, L"haz"); } }
	if (RSTR.find(L"you") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"you")) != std::string::npos) { RSTR.replace(pos, 3, L"uu"); } }
	if (RSTR.find(L"the") != std::string::npos) { size_t pos; while ((pos = RSTR.find(L"the")) != std::string::npos) { RSTR.replace(pos, 3, L"da"); } }

	std::wstring space = L" ";
	return px + space + RSTR + space + sx;
}

using namespace std;
int main()
{
	const wchar_t string[] = L"String to owoify";
	wcout << owoify(string);
}

