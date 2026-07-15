class DynamicArray {
    std::vector<int> DA;
public:

    DynamicArray(int capacity) {
        DA.reserve(capacity);
    }

    int get(int i) {
        return (DA[i]);
    }

    void set(int i, int n) {
        DA[i] = n;
    }

    void pushback(int n) {
        DA.push_back(n);
    }

    int popback() {
        int back = DA.back();
        DA.erase(DA.end() - 1);
        // std::cout << "back : " << DA.back() << std::endl;
        return  back;
    }
    void resize() {
        DA.resize(DA.capacity() - 1);
    }


    int getSize() {
        return DA.size();
    }

    int getCapacity() {
        return DA.capacity();
    }
};
