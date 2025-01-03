template<typename T>
class Vector {
	// variables for current size max size and pointer variable for array
	T *arr;
	int cs ;
	int ms;
public:
	Vector(int max_size = 1) {
		cs = 0;
		ms = max_size;
		arr = new T[cs];
	}
	void push_back(T d) {
		// two cases when cs == ms double the array, delete the old array insert elemetns
		if (cs == ms) {
			T *old_arr = arr;
			ms = ms * 2;
			arr = new T[ms];
			// insert elements
			for (int i = 0; i < cs; i++)
				arr[i] = old_arr[i];
			delete [] old_arr;
		}
		arr[cs] = d;
		cs++;
	}
	void pop_back() {
		if (cs >= 0)
			cs--;
	}
	T front() {
		return arr[0];
	}
	T back() {
		return arr[cs - 1];
	}
	T at(int i) {
		return arr[i];
	}
	int size() {
		return cs;
	}
	int Capacity() {
		return ms;
	}
	T operator[](int i) {
		return arr[i];
	}
};
