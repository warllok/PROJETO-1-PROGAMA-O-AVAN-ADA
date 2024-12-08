#ifndef STRUCT_H
#define STRUCT_H

struct Voxel {
    float r, g, b;  // cor
    float a;        // transaprencia
    bool isOn;      // atv ou nao
};

class Escultor {
private:
    Voxel ***v;         // matriz 3D de voxels
    int nx, ny, nz;     // dimensoes
    float r, g, b, a;   // cor atual
public:
    Escultor(int _nx, int _ny, int _nz);
    ~Escultor();
    void setColor(float r, float g, float b, float alpha);
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
    void writeOFF(const char* filename);
};

#endif
