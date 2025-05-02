#include "Shape.h"

class Triangle final : public Shape {
    public:
    Triangle(float points[6],Color* col = nullptr);
    void Draw() override;
};