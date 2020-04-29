#ifndef _MYDEQUE_
#define _MYDEQUE_ 1

#progma GCC system_header

#include "myvector.h"

namespace std _GLIBCXX_VISIBILITY(default){
	_GLIBCXX_BEGIN_NAMESPACE_VERSION
	template<typename elemtype>
	class mydeque{
		private:
			myvector <elemtype> c;
		public:
			void init(){
				c.init();
			}
			void push_back(elemtype __x){
				c.push_back(__x);
			}
			void pop_back(){
				c.pop_back();
			}
			void push_front(int __x){
				c.push_front(__x);
			}
			void pop_front(){
				c.pop_front();
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
			bool empty(){
				return c.empty();
			}
	};
	_GLIBCXX_END_NAMESPACE_VERSION
}

#endif
