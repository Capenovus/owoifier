# coding=utf-8
import random
import re


def owoify(String: str):
    """
        owoify a given string

        :param String: String to owoify
        :return: owoified string
        """
    _String = String
    prefix = [
        "OWO", "OwO", "0w0", "< 3", "UwU", "HIIII!", "H - hewwo??", "Huohhhh."
    ]
    suffix = [
        "..,", "fwendo", "Huoh.", "._.", ";-;", ";_;", "(；ω；)", "ÙωÙ", "UwU", "(人◕ω◕)", "(●´ω｀●)", "(✿ ♡‿♡)",
        "(◠‿◠✿)", "^ - ^", "^ _ ^", "> _ <", "> _ >", ":P", ":3" ";3", "x3", ":D", "xD", "XDDD", "（＾ｖ＾）",
        "ㅇㅅㅇ", "(• o •)", "ʕ•̫͡•ʔ", "ʕʘ‿ʘʔ", "(　'◟ ')"
    ]

    def repl(m):
        return 'n' + 'u' * (len(m.group()) - 1)

    _String = _String.replace('r', 'w').replace('l', 'w').replace('R', 'W').replace('L', 'W')
    _String = re.sub(r'n[o]+', repl, _String, flags=re.I)
    _String = re.sub(r'ha(ve|s)', 'haz', _String, flags=re.I)
    _String = re.sub('the', 'da', _String, flags=re.I)
    _String = re.sub('with', 'wif', _String, flags=re.I)
    _String = re.sub('this', 'dis', _String, flags=re.I)
    _String = re.sub(':D', 'UwU', _String, flags=re.I)
    _String = re.sub(':o', 'owo', _String, flags=re.I)
    _String = re.sub(':O', 'OwO', _String, flags=re.I)
    _String = re.sub(r':\\', ':3', _String, flags=re.I)
    _String = f"{random.choice(prefix)} {_String} {random.choice(suffix)}"

    return _String
