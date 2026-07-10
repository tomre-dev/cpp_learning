/*
yeah this will be my engine i will programm it oall offline without any tutorial because i want and if you dont like it why are you even here?
go programm yourself this will be the !best engine (understand the reference!!!)
the name of the engine will be idk and is opensource
-----------------------------------------------------------------------------------

                  IDK ENGINE

-----------------------------------------------------------------------------------
*/
float Mysqrt(float number)
{
	float guess = number / 2.0;

	for (int i = 0; i < 10; i++)
	{
		guess = (guess + (number / guess)) / 2.0;
	}

	return guess;
}

//before you continue idk what im doing im tryiing to do what i remenber unity was

//onestly its was better if this srtuct were child with inheritance they have so many things in common i promise i will give this update

//position
struct Vec3P 
{
    float X;
    float Y;
    float Z;

    Vec3P()
    {
        X = 0.0f;
        Y = 0.0f;
        Z = 0.0f;
    }
    Vec3P(float x , float y , float z)
    {
        X = x;
        Y = y;
        Z = z;
    }

    void Sum(float x , float y , float z)
    {
        X += x;
        Y += y;
        Z += z;
    }
    void Sum(Vec3P vec3p)
    {
        X += vec3p.X;
        Y += vec3p.Y;
        Z += vec3p.Z;
    }

    void Sub(float x , float y , float z)
    {
        X -= x;
        Y -= y;
        Z -= z;
    }
    void Sub(Vec3P vec3p)
    {
        X -= vec3p.X;
        Y -= vec3p.Y;
        Z -= vec3p.Z;
    }
    void Change(float x, float y, float z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    void Change(Vec3P vec3p)
    {
        X = vec3p.X;
        Y = vec3p.Y;
        Z = vec3p.Z;
    }
    float lenght()
    {
        return (Mysqrt(X * X + Y * Y + Z * Z));
    }

};

//rotation
struct Vec3R
{
    float X;
    float Y;
    float Z;
    //i actualy dont know what this could be used for but lets keep it!
    Vec3R()
    {
        X = 0.0f;
        Y = 0.0f;
        Z = 0.0f;
    }
    Vec3R(float x, float y, float z)
    {
        X = x;
        Y = y;
        Z = z;
    }

    void Sum(float x, float y, float z)
    {
        X += x;
        Y += y;
        Z += z;
    }
    void Sum(Vec3R vec3r)
    {
        X += vec3r.X;
        Y += vec3r.Y;
        Z += vec3r.Z;
    }

    void Sub(float x, float y, float z)
    {
        X -= x;
        Y -= y;
        Z -= z;
    }
    void Sub(Vec3R vec3r)
    {
        X -= vec3r.X;
        Y -= vec3r.Y;
        Z -= vec3r.Z;
    }
    void Change(float x, float y, float z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    void Change(Vec3R vec3r)
    {
        X = vec3r.X;
        Y = vec3r.Y;
        Z = vec3r.Z;
    }

};

//scale!
struct Vec3S
{
    float X;
    float Y;
    float Z;

    Vec3S()
    {
        X = 0.0f;
        Y = 0.0f;
        Z = 0.0f;
    }
    Vec3S(float x, float y, float z)
    {
        X = x;
        Y = y;
        Z = z;
    }

    void Sum(float x, float y, float z)
    {
        X += x;
        Y += y;
        Z += z;
    }
    void Sum(Vec3S vec3s)
    {
        X += vec3s.X;
        Y += vec3s.Y;
        Z += vec3s.Z;
    }

    void Sub(float x, float y, float z)
    {
        X -= x;
        Y -= y;
        Z -= z;
    }
    void Sub(Vec3S vec3s)
    {
        X -= vec3s.X;
        Y -= vec3s.Y;
        Z -= vec3s.Z;
    }
    void Change(float x, float y, float z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    void Change(Vec3S vec3s)
    {
        X = vec3s.X;
        Y = vec3s.Y;
        Z = vec3s.Z;
    }
    void Resize(float n)
    {
        X *= n;
        Y *= n;
        Z *= n;
    }
};

//next time inheritance and this 3 are the son

//now i think its al done!
// joking i wanted to make a object my idea is like create a class object and then inheritance  the idea is make a 3d object like its literaly 3d and give him a body so its not a ghost like this is the diea but its crazy

//i think its better create a transform like with the 3 vect3
//like
//
//struct Transform
//{
//    Vec3P position;
//    Vec3R rotation;
//    Vec3S scale;
//};

class Object
{
    Vec3P position;
    Vec3R rotation;
    Vec3S scale;
    //include rigidbody
};

//ok its very difficult

