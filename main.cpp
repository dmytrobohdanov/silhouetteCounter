#include <QImage>
#include <iostream>
#include <QColor>
#include <main.h>

using namespace std;

//set number of 1st silhouette
const int FIRST_ELEMENT_NUMBER = 9;
int counter = FIRST_ELEMENT_NUMBER;

int main ()
{
    string nameOfImage;
    cout<<"Let's start"<<endl;
    cout<<"enter image name"<<endl;
    cin>>nameOfImage; //file have to be in build folder


    int *pixels = new int[][]; //array of pixels
    int *sizeOfArray = new int[2]; // 1st element - lenght, 2nd element - height of array of pixels


    getArrayOfPixels(nameOfImage, &pixels, &sizeOfArray); // get array of pixels from image
                                                //which is consist of
                                                //1 (in case of white pixel)
                                                //and 0 (in case of black pixel)

    int numberOfSilhouettes = countSilhouettes(&pixels, &sizeOfArray); //count sillouettes on image

    delete[] pixels; //delete array from the heap

    cout<< "There are "<< numberOfSilhouettes << " silhouettes on this image"<< endl;

    return 0;
}


int countSilhouettes(int* pixels, int* sizeOfArray){
    int length = sizeOfArray[0];
    int height = sizeOfArray[1];

    for(int i=0; i<length; i++){
        for(int j=0; j<height; j++){
            if(pixels[i][j] == 0){
                pixelsScaner(i,j, &pixels);
                counter ++; //1st silhouette is named "10"
            }
        }
    }
    return counter - FIRST_ELEMENT_NUMBER;
}


void pixelsScaner(int i, int j, int* pixels){
    if((pixels[i][j] != 0) || (i <= 0 || j <= 0)){
        return;
    }
    else{
        pixels[i][j] = counter;

        //please, cheak out all cells around this one (i,j)
        pixelsScaner(i - 1, j - 1, pixels);
        pixelsScaner(i - 1, j, pixels);
        pixelsScaner(i - 1, j + 1, pixels);

        pixelsScaner(i, j - 1, pixels);
        pixelsScaner(i, j + 1, pixels);

        pixelsScaner(i + 1, j - 1, pixels);
        pixelsScaner(i + 1, j, pixels);
        pixelsScaner(i + 1, j + 1, pixels);
    }


}


