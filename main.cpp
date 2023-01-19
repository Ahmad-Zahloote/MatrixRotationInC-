#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef bitset<8> Byte;
/*
class Pixel{
public:
    Pixel(Byte[] b){
        this->vectors = new Byte[4];
        for(int i=0;i<4;i++){
            this->vectors[i] = b[i];
        }
    }

    Byte[] get_pixel(){
        return this->vectors;
    }


private:
    Byte[] vectors;
    };

class Image{
private:
    int vol;
    Pixel[][] pixels;

public:
    Image(Pixel[][] pixels):pixels(pixels){}
    bool img_rotate(){
        if(pixels.length()==0 || pixels.length()!=pixels[0].length())
            return false;
        int n = this->vol;
        for(int i=0;i<n/2;i++){
            int first = i;
            int last = n-i-1;
            for(int j=first;j<last;j++){
                int offset = i-first;
                int top = this->pixels[first][i];
                pixels[first][i] = pixels[last-offset][first];
                pixels[last-offset][first] = pixels[last][last-offset];
                pixels[last][last-offset] = pixels[i][last];
                pixels[i][last] = top;
            }
        }
        return true;
    }
    };*/
int main()
{
    int pixels[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"image before rotation is: "<<"\n";
    for(int h=0; h<4; h++)
    {
        for(int k=0; k<4; k++)
        {
            cout<<pixels[h][k]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<2; i++)
    {

        for(int j=i; j<3-i; j++)
        {
            int temp = pixels[i][j];
            pixels[i][j] = pixels[3-j][i];
            pixels[3-j][i]=pixels[3-i][3-j];
            pixels[3-i][3-j] = pixels[j][3-i];
            pixels[j][3-i] = temp;
        }
    }
    cout<<"image after rotation clockwise is: "<<"\n";
    for(int h=0; h<4; h++)
    {
        for(int k=0; k<4; k++)
        {
            cout<<pixels[h][k]<<" ";
        }
        cout<<endl;
    }
    for(int k=0;k<2;k++){
        for(int i=0; i<2; i++)
        {

            for(int j=i; j<3-i; j++)
            {
                int temp = pixels[i][j];
                pixels[i][j] = pixels[j][3-i];
                pixels[j][3-i]=pixels[3-i][3-j];
                pixels[3-i][3-j] = pixels[3-j][i];
                pixels[3-j][i] = temp;
            }
        }
    }
    cout<<"image after rotation counterclockwise is: "<<"\n";
    for(int h=0; h<4; h++)
    {
        for(int k=0; k<4; k++)
        {
            cout<<pixels[h][k]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


