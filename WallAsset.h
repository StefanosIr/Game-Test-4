#include "GameAsset.h"
#include "IInterpolator.h"

#ifndef WALLASSET_H_
#define WALLASSET_H_

class WallAsset : public GameAsset {

public:

	WallAsset();
	WallAsset(float x, float y, float z);
	~WallAsset();
	virtual void update();

	virtual void draw();

	void setInterpolator(IInterpolator * li);

private:
	IInterpolator *li;
	Point3 * pos;
};


#endif // WALLASSET_H_