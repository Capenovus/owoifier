using System;
using System.Text.RegularExpressions;

namespace owoify
{
    public class owo
    {
        /// <summary>
        /// owoify a given string
        /// </summary>
        /// <param name="String">String to owoify</param>
        /// <returns>
        /// owoified String
        /// </returns>
        public static string owoify(string String)
        {
            if (String == null) throw new ArgumentNullException(nameof(String));

            var str = String;
            Random rnd = new Random();
            string[] prefix =  {
            "OWO", "OwO", "0w0", "< 3", "UwU", "HIIII!", "H - hewwo??", "Huohhhh."
            };
            string[] suffix =
            {
                "..,", "fwendo", "Huoh.", "._.", ";-;", ";_;", "(；ω；)", "ÙωÙ", "UwU", "(人◕ω◕)", "(●´ω｀●)", "(✿ ♡‿♡)",
                "(◠‿◠✿)", "^ - ^", "^ _ ^", "> _ <", "> _ >", ":P", ":3", ";3", "x3", ":D", "xD", "XDDD", "（＾ｖ＾）",
                "ㅇㅅㅇ", "(• o •)", "ʕ•̫͡•ʔ", "ʕʘ‿ʘʔ", "(　'◟ ')"
            };

            str = str.Replace("l", "w")
                .Replace("r", "w")
                .Replace("L", "W")
                .Replace("R", "W");
            str = Regex.Replace(str, "ha(ve|s)", "haz", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, "n[o]+", 
                m => string.Format(m.Groups[0].Value.Replace("o", "u")), RegexOptions.IgnoreCase);
            str = Regex.Replace(str, "your", "ur", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, "you", "uu", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, "the", "da", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, "with", "wif", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, "this", "dis", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, ":D", "UwU", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, ":o", "owo", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, ":O", "OwO", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, @":\\", ":3", RegexOptions.IgnoreCase);
            str = Regex.Replace(str, ":o", "owo", RegexOptions.IgnoreCase);

            str = prefix[rnd.Next(0, prefix.Length)] + " " + str + " " + suffix[rnd.Next(0, suffix.Length)];

            return str;
        }
    }
}