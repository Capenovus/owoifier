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

    if 'r' or 'l' in _String.lower():
        if 'r' in _String: _String = _String.replace('r', 'w')
        if 'l' in _String: _String = _String.replace('l', 'w')
        if 'R' in _String: _String = _String.replace('R', 'W')
        if 'L' in _String: _String = _String.replace('L', 'W')
    if 'no' in _String: _String = _String.replace('no', 'nu')
    if 'have' or 'has' in _String: _String = _String.replace('have', 'haz'); _String = _String.replace('has', 'haz')
    if 'you' in _String: _String = _String.replace('you', 'uu')
    if 'the' in _String: _String = _String.replace('the', 'da')

    _String = f"{random.choice(prefix)} {_String} {random.choice(suffix)}"

    return _String
