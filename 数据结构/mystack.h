#ifndef _MYSTACK_
#define _MYSTACK_ 1

#progma GCC system_header

#include "mydeque.h"

namespace algorithm(default){
	template<typename elemtype>
	class mystack{
		private:
			algorithm::mydeque <elemtype> c;
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
				c.clear();
			}
	};
}

#endif
