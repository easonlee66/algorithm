#ifndef _GLIBCXX_read
#define _GLIBCXX_read 1

#progma GCC system_header

#include <cstdio>
#include <string>

namespace std _GLIBCXX_VISIBILITY(default){
	_GLIBCXX_BEGIN_NAMESPACE_VERSION
	void pushint(int &index,int pushindex){
		index*=10;
		index+=pushindex;
	}
	template<typename intype>
	intype readint(){
		char c;
		bool fs=false;
		c=getchar();
		intype finally=0;
		if(c=='-'){
			fs=true;
		}
		else{
			if(c<'0'||c>'9'){
				return finally;
			}
			else{
				push(finally,c-'0');
			}
		}
		while(1){
			c=getchar();
			if(c<'0'||c>'9'){
				break;
			}
			else{
				push(finally,c-'0');
			}
		}
		return (fs?(0-finally):finally);
	}
    char readchar(){
        char x;
        do{
            x=getchar();
        }while(x==' '||x=='\n'||x=='\t');//忽略为空格、回车、tab
    }
	_GLIBCXX_END_NAMESPACE_VERSION
}

#endif
