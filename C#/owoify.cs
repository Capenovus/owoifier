using System;

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

            str = str
                .Replace("l", "w")
                .Replace("r", "w")
                .Replace("L", "W")
                .Replace("R", "W")
                .Replace("no", "nu")
                .Replace("have", "haz")
                .Replace("has", "haz")
                .Replace("you", "uu")
                .Replace("the", "da");

            str = prefix[rnd.Next(0, prefix.Length)] + " " + str + " " + suffix[rnd.Next(0, suffix.Length)];

            return str;
        }
    }
}