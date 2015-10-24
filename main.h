#ifndef SILHOUETTE
#define SILHOUETTE

// input: string with name of file
//output: pointer to array of pixels with 1(in case of white pixel) and 0 (in case of black one)
int* getArrayOfPixels(string nameOfImage);

// input: pointer to arra of pixels;
//output: number of silouettes;
int countSilhouettes(int* pixels);

#endif // SILHOUETTE

