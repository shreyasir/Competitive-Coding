using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharp._1_String_Reversal
{
    public static class StringReversal
    {
      public static string StringReversal_Solution1(string actual_value)
        {
            var char_value = actual_value.ToCharArray();
            for (int i = 0, j = actual_value.Length - 1; i < j; i++,j--){
                char_value[i]=actual_value[j];
                char_value[j] = actual_value[i];
            }
            return new String(char_value);
        }
    }
}
