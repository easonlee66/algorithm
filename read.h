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
	#define readchar getchar//以后再升级吧—_ —
/*	struct String{
		string s;
		char *c_s;
		void init_es(){
			this->es=(this->s).c_str();
		}
		void tostring(){
			char *cmp=this->c_s;
			int i=0;
			while(*cmp!='\0'){
				(this->s)[i]=*cmp;
				i++;
			}
		}
	};
	char *to_c_string(string s){
	}*///以上代码未开发完毕，因此注释掉
	_GLIBCXX_END_NAMESPACE_VERSION
}

#endif
