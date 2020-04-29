#ifndef _MYSTACK_
#define _MYSTACK_ 1

#progma GCC system_header

#include "mydeque.h"

namespace std _GLIBCXX_VISIBILITY(default){
	_GLIBCXX_BEGIN_NAMESPACE_VERSION
	template<typename elemtype>
	class mystack{
		private:
			mydeque <elemtype> c;
		public:
			void push(elemtype __x){
				c.push_back(__x);
			}
			void pop(){
				c.pop_back();
			}
			bool empty(){
				return c.empty();
			}
			elemtype top(){
				return c.back();
			}
			void clear(){
				return c.clear();
			}
	};
	_GLIBCXX_END_NAMESPACE_VERSION
}

#endif
