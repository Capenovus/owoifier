def owoify(String: str):
    """
        owoify a given string

        :param String: String to owoify
        :return: owoified string
        """
    _String = String
    if 'r' or 'l' in _String.lower():
        if 'r' in _String: _String = _String.replace('r', 'w')
        if 'l' in _String: _String = _String.replace('l', 'w')
        if 'R' in _String: _String = _String.replace('R', 'W')
        if 'L' in _String: _String = _String.replace('L', 'W')
    return _String
