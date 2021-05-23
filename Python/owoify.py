# coding=utf-8
import random


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

    _String = _String.replace('r', 'w').replace('l', 'w').replace('R', 'W').replace('L', 'W').replace('no', 'nu').replace('have', 'haz').replace('has', 'haz').replace('you', 'uu').replace('the', 'da')

    _String = f"{random.choice(prefix)} {_String} {random.choice(suffix)}"

    return _String
