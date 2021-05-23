#include <iostream>

std::string owoify(std::string STR) {
	if (STR.empty()) return STR;
	std::string RSTR = STR;

	//Very bad code
	if (RSTR.find("r") != std::string::npos) { size_t pos; while ((pos = RSTR.find("r")) != std::string::npos) { RSTR.replace(pos, 1, "w"); } }
	if (RSTR.find("l") != std::string::npos) { size_t pos; while ((pos = RSTR.find("l")) != std::string::npos) { RSTR.replace(pos, 1, "w"); } }
	if (RSTR.find("R") != std::string::npos) { size_t pos; while ((pos = RSTR.find("R")) != std::string::npos) { RSTR.replace(pos, 1, "W"); } }
	if (RSTR.find("L") != std::string::npos) { size_t pos; while ((pos = RSTR.find("L")) != std::string::npos) { RSTR.replace(pos, 1, "W"); } }

	return RSTR;
}

using namespace std;
int main()
{
	cout << owoify("String to owoify");
}


