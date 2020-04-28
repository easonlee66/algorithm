#ifndef _GLIBCXX_UNION_CHECKING_SET
#define _GLIBCXX_UNION_CHECKING SET 1

#progma GCC system_header

#include <vector>

namespace std _GLIBCXX_VISIBILITY(default){
	_GLIBCXX_BEGIN_NAMESPACE_VERSION
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
/*	template<typename weighttype>
	class has_weight_ucs{
		private:
			union_checking_set c;
		public:
	};*///以上代码未开发完毕，因此注释掉
	_GLIBCXX_END_NAMESPACE_VERSION
}

#endif
