#include "printer.h"

void Letter::print(std::string text) const
{
    std::string txt[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < text.length(); j++)
        {
            if(text[j] == ' ')
            {
                txt[i] += "    ";
                continue;
            }
            for (int k = 0; k < 26; k++)
            {
                if ((int)text[j] == 97 + k){
                    txt[i] += alphabet[k][i];
                }
            }
        }
        std::cout<<txt[i]<<std::endl;
    }
}