#include <iostream>
#include <random>
#include <regex>


std::wstring regexReplace(std::wstring str, std::wregex regex, std::wstring search, std::wstring replace) {
	std::wsmatch m;
	std::wstring out;
	std::wstring in = str;
	while (std::regex_search(in, m, regex)) {
		out += m.prefix();
		std::wregex re(search);
		out += std::regex_replace(m[0].str(), re, replace);
		in = m.suffix();
	}
	return out += in;
}

//Very bad code
std::wstring owoify(std::wstring STR) {
	std::wstring RSTR = STR;
	std::random_device rd;
	std::default_random_engine e1(rd());
	const wchar_t *prefix[] = {
			L"OWO", L"OwO", L"0w0", L"< 3", L"UwU", L"HIIII!", L"H - hewwo??", L"Huohhhh."
	};
	std::uniform_int_distribution<int> pr(0, 7);
	std::wstring px = prefix[pr(e1)];

	const wchar_t *suffix[] = {
			L"..,", L"fwendo", L"Huoh.", L"._.", L";-;", L";_;", L"(；ω；)", L"ÙωÙ", L"UwU", L"(人◕ω◕)", L"(●´ω｀●)", L"(✿ ♡‿♡)",
			L"(◠‿◠✿)", L"^ - ^", L"^ _ ^", L"> _ <", L"> _ >", L":P", L":3", L";3", L"x3", L":D", L"xD", L"XDDD", L"（＾ｖ＾）",
			L"ㅇㅅㅇ", L"(• o •)", L"ʕ•̫͡•ʔ", L"ʕʘ‿ʘʔ", L"(　'◟ ')"
	};
	std::uniform_int_distribution<int> sr(0, 29);
	std::wstring sx = suffix[sr(e1)];

	RSTR = std::regex_replace(RSTR, std::wregex(L"r"), L"w");
	RSTR = std::regex_replace(RSTR, std::wregex(L"l"), L"w");
	RSTR = std::regex_replace(RSTR, std::wregex(L"R"), L"W");
	RSTR = std::regex_replace(RSTR, std::wregex(L"L"), L"W");
	RSTR = std::regex_replace(RSTR, std::wregex(L"ha(ve|s)", std::regex_constants::icase), L"haz");
	RSTR = regexReplace(RSTR, std::wregex(L"n[o]+", std::regex_constants::icase), L"o", L"u");
	RSTR = std::regex_replace(RSTR, std::wregex(L"your", std::regex_constants::icase), L"ur");
	RSTR = std::regex_replace(RSTR, std::wregex(L"you", std::regex_constants::icase), L"uu");
	RSTR = std::regex_replace(RSTR, std::wregex(L"the", std::regex_constants::icase), L"da");
	RSTR = std::regex_replace(RSTR, std::wregex(L"with", std::regex_constants::icase), L"wif");
	RSTR = std::regex_replace(RSTR, std::wregex(L":D", std::regex_constants::icase), L"UwU");
	RSTR = std::regex_replace(RSTR, std::wregex(L":o", std::regex_constants::icase), L"owo");
	RSTR = std::regex_replace(RSTR, std::wregex(L":O", std::regex_constants::icase), L"OwO");
	RSTR = std::regex_replace(RSTR, std::wregex(L":\\\\", std::regex_constants::icase), L":3");
	
	std::wstring space = L" ";
	return px + space + RSTR + space + sx;
}

using namespace std;
int wmain()
{
	const wchar_t string[] = L"String to owoify";
	wcout << owoify(string);
}

