class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int Len);
       void setWidth(int wid);
       void setHeight(int hei);
       int getLength();
       int getWidth();
       int getHeight();
       int calcVolume();
};
