#ifndef _GLIBCXX_UNION_CHECKING_SET
#define _GLIBCXX_UNION_CHECKING SET 1

#progma GCC system_header

#include <vector>

namespace std _GLIBCXX_VISIBILITY(default){
	_GLIBCXX_BEGIN_NAMESPACE_VERSION
    template <typename x>
    struct ucs_base{
        vector <x> father;
    };
	class union_checking_set{
		private:
			vector <int> father;
		public:
			int find(int x){
				while(father[x]!=x){
					x=father[x];
				}
				return x;
			}
			void meghe(int x,int y){
				x=find(x);
				y=find(y);
				father[x]=y;
			}
			void init(int n){
				for(int i=1;i<=n;i++){
					father.push_back(i);
				}
			}
	};
    struct weith_base{
<<<<<<< HEAD
        int to;
		int weight;
		weith_base(int to,int weight):to(to),weight(weight){}
    };
	template<typename weighttype,int max_num,typename weight_enum>
	class has_weight_ucs{
		private:
            vector <weith_base> father;
		public:
			void init(int n){
				for(int i=1;i<=n;i++){
					father.push_back(weith_base(i,0));
				}
			}
			int find(int x){
				while(father[x].to!=x){
					x=father[x].to;
				}
				return x;
			}
			weight_enum find_weight(int x){
				int sum;
				while(father[x].to!=x){
					x=father[x].to;
					sum+=father[x].weith_base;
				}
				return sum%max_num;
			}
			void merge(int x,int y,int weight){
				int cx=this->find(x);
				int cy=this->find(y);
				for(int i=0;i<max_num;i++){
					if((i+find_weight(cx)+find_weight(cy))==weight){
						break;
					}
				}
				father[x].to=y;
				father[x].weight=i;
			}
=======
        int to,weight;
    };
	template<typename weighttype>
	class has_weight_ucs{
		private:
			union_checking_set c;
            weight_base father;
		public:
>>>>>>> 49ce5e3f4187a7ac67daf092794ce55617b3220a
	};
	_GLIBCXX_END_NAMESPACE_VERSION
}

#endif
