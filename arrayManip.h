class arrayManip
{
public:
    void setSize(int size);
    int getSize();
    
    // Users can simply call each method function with no input, 
    // all user input will be through the console
    void findInteger();
    void modifyInteger();
    void searchTheArray();
    void addInteger();
    void displayArray();
    void deleteInteger();
    
    //Initializes arrayManip object
    arrayManip();
private:
    //Variables used throughout the program
    int found;
    int number;
    int sum;
    int find;
    int result;
    int array[200];
    int i = 0;
    int newArray;
};