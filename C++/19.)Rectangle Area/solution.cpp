
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    public:
    int width,height;
    void display()
    {
        cout<<width<<" "<<height;
    }
};
class RectangleArea: public Rectangle
{
    public:
    void read_input()
    {
        cin>>width>>height;
    }
    void display()
    {
        cout<<endl<<width*height;
    }
};
