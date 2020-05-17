#ifndef _MYQUEUE_
#define _MYQUEUE_ 1

#progma GCC system_header

#include "mydeque.h"

namespace algorithm(default){
	template<typename elemtype>
	class myqueue{
		private:
			algorithm::mydeque <elemtype> c;
		public:
			void push(elemtype __x){
				c.push_back(__x);
			}
			void pop(){
				c.pop_front();
			}
			bool empty(){
				return c.empty();
			}
			elemtype front(){
				return c.front();
			}
			elemtype back(){
				return c.back();
			}
			void clear(){
				c.clear();
			}
	};
}

#endif
