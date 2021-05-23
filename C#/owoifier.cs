using System;

namespace owoifier
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

            if (!str.ToLower().Contains("l") && !str.ToLower().Contains("r")) return str;
            if (str.Contains("l")) str = str.Replace("l", "w");
            if (str.Contains("r")) str = str.Replace("r", "w");
            if (str.Contains("L")) str = str.Replace("L", "W");
            if (str.Contains("R")) str = str.Replace("R", "W");

            return str;
        }
    } 
}
