class Solution {
public:
    int myAtoi(string s) {

        bool nf=false;
        bool tz=false;
        bool sf=false;

        string str;

        for(char ch:s){
            if(ch==' '&&nf==false&&sf==false&&tz==false){
                continue;
            }else if(ch==' '&&(nf==true||sf==true||tz==true)){
                break;
            }
            if(ch=='+'||ch=='-'){
                if(sf==true||nf==true||tz==true){
                    break;
                }else{
                    sf=true;
                    if(ch=='+'){
                        continue;
                    }else{
                        str.push_back(ch);
                        continue;
                    }
                }
            }
            if(!(ch>='0'&&ch<='9')&&nf==false){
                return 0;
            }else if(!(ch>='0'&&ch<='9')&&nf==true){
                break;
            }
            if(ch=='0'&&nf==false){
                if(tz==false)tz=true;
                continue;
            }
            if(ch>='0'&&ch<='9'){
                str.push_back(ch);
                if(nf==false){
                    nf=true; 
                }else{
                    continue;
                }
            }
        }

        string s1="-2147483647";
        string s2="2147483647";

        if(nf==false){
            cout<<str;
            return 0;
        }
        if(str[0]!='-'){
            if(str.length()>s2.length()||(str.length()==s2.length()&&str>s2)){
                return INT_MAX;
            }
        }else{
            if((str.length()>s1.length())||(str.length()==s1.length()&&str>s1))
            return INT_MIN;
        }
        return stoi(str);



        
        
    }
};