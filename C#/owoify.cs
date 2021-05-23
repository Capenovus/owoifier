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

            if (str.Contains("l")) str = str.Replace("l", "w");
            if (str.Contains("r")) str = str.Replace("r", "w");
            if (str.Contains("L")) str = str.Replace("L", "W");
            if (str.Contains("R")) str = str.Replace("R", "W");
            if (str.Contains("no")) str = str.Replace("no", "nu");
            if (str.Contains("have") || str.Contains("has")) str = str.Replace("have", "haz"); str = str.Replace("has", "haz");
            if (str.Contains("you")) str = str.Replace("you", "uu");
            if (str.Contains("the")) str = str.Replace("the", "da");

            str = prefix[rnd.Next(0, prefix.Length)] + " " + str + " " + suffix[rnd.Next(0, suffix.Length)];

            return str;
        }
    }
}