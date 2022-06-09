template <typename T>
int FunctieComparare(T a[100], int i1, int i2) {
	return a[i1] - a[i2];
}
template <typename T>
int Egalitate(T a,T b) {
	return a == b;
}

template <class T>
class MyVector {
	T list[100];
	int count;
public:
	MyVector() : count{ 0 } {};
	~MyVector() {};
	void Push(const T &value) { list[count++] = value; };
	void Pop() { this->count--; };
	void Remove(int index) {
		for (int i = index;i < count - 1;i++)
		{	
			list[i] = list[i + 1];
		}
	count--;
	};
	int decizie(int (*callback)(T[100], int, int), int i1, int i2) {
		if (callback != nullptr)
			return callback(this->list, i1, i2);
		return this->list[i1] > this->list[i2];
	}
	int egal(int (*callback)(T a, T b), T val1, T val2) {
		if (callback != nullptr)
			return callback(val1,val2);
		return val1==val2;
	}
	void insert(T value, int index) { count++; for (int i = count;i > index;i--) { list[i] = list[i-1]; } list[index] = value; };
	void Set(T value, int index) { list[index] = value; };
	void Sort() 
	{
		T aux;
		for(int i=0;i<count-1;i++)
			for (int j = 0; j < count -i -1; j++)				
				if(decizie((FunctieComparare),j,j+1)>0 || strcmp(list[j], list[j + 1])>0)
				{
					aux = list[j];
					list[j] = list[j + 1];
					list[j + 1] = aux;
				}
	};
	void Print() { for (int i = 0;i < count;i++) cout << list[i] << " "; }
	T get(int index) { return list[index]; }
	
	int FirsIndexOf(T value) {
		for (int i = 0;i < count;i++)
			if (egal((Egalitate),list[i], value) == 1) return i;
				return -1;
		}
	int Count() { return this->count; }
	
};
