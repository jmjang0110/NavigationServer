#pragma once

class Entity;
class Memory : public Entity
{
private:

public:
	int Alloc(size_t memSize);
	int Free();
	
	int Size();


};

