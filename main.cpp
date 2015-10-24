#include <QImage>
#include <iostream>
#include <QColor>
#include <main.h>

using namespace std;



int main ()
{
    string nameOfImage;
    cout<<"Let's start"<<endl;
    cout<<"enter image name"<<endl;
    cin>>nameOfImage; //file have to be in build folder


    int *pixels = new int[][];
    int sizeOfArray[];

     //get array of pixels of image

    int  = getArrayOfPixels(nameOfImage, &pixels); // get array of pixels from image
                                                //which is consist of
                                                //1 (in case of white pixel)
                                                //and 0 (in case of black pixel)

    int numberOfSilhouettes = countSilhouettes(pixels); //count sillouettes on image

    delete[] pixels; //delete array from the heap

    cout<< "There are "<< numberOfSilhouettes << " silhouettes on this image"<< endl;

    return 0;
}


int countSilhouettes(int* pixels){
   //get array size
   //loop
   pixelsScaner(i,j, &pixels);
}

pixelsScaner(int i, int j, int* pixels){
    if(pixels[i][j] != 0)

}


