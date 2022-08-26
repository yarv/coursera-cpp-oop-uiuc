#pragma once

class Sphere {
    public:
        Sphere(double rad);
        double getVolume();
        double getSurfaceArea();
        double getRad();
        void printDetails();
        void setRad(double rad);

    private:
        double radValidate(double rad);
        double rad_;
};