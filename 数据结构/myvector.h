#ifndef _MYVECTOR_
#define _MYVECTOR_ 1

#progma GCC system_header

#include <cstdlib>

#define first 10
#define addx 10

namespace algorithm(default){
	template <typename elemtype>
	class myvector{
		public:
			typedef elemtype* iterator;
		private:
			iterator x;
			int length,size;
			void add(){
				this->x=(elemtype*)(realloc(this->x,(this->size+addx)*sizeof(elemtype)));
				this->size+=addx;
			}
		public:
			void init(){
				this->x=(elemtype*)(malloc(first*sizeof(elemtype)));
				this->size=first;
				this->length=1;
				this->size--;
			}
			void insert(int insetx,int elem){
				if(this->length==this->size){
					this->add();
				}
				for(int i=this->length;i>=insertx;i--){
					this->x[i+1]=this->x[i];
				}
				this->x[insetx]=elem;
				this->length++;
			}
			void erase(int xxx){
				for(int i=xxx;i<this->length-1;i--){
					this->x[i]=this->x[i-1];
				}
				this->length--;
			}
			void push_back(int __x){
				insert(this->length+1,__x);
			}
			void pop_back(){
				erase(this->length);
			}
			void push_front(int __x){
				insert(1,__x);
			}
			void pop_front(){
				erase(1);
			}
			bool empty(){
				return this->length==0;
			}
			void clear(){
				while(!this->empty()){
					this->pop_back();
				}
			}
			iterator find(elemtype y){
				iterator p=this->x;
				int flength=1;
				while(*p!=y&&flength<=this->length){
					p++;
					flength++;
				}
				if(flength>this->length){
					return NULL;
				}
				return p;
			}
			void erasex(elemtype xxxx){
				iterator w=find(xxxx);
				erase(w-this->x);
			}
			iterator begin(){
				return this->x+1;
			}
			iterator end(){
				return this->x+this->length+1;
			}
			elemtype front(){
				return *(this->begin());
			}
			elemtype back(){
				return *(this->end());
			}
			elemtype operator[](int i){
				return this->x[i];
			}
	};
}

#endif
