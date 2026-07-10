#include <iostream>
/*
yeah this will be my engine i will programm it oall offline without any tutorial because i want and if you dont like it why are you even here?
go programm yourself this will be the !best engine (understand the reference!!!)
the name of the engine will be idk and is opensource
-----------------------------------------------------------------------------------

                  IDK ENGINE 2

-----------------------------------------------------------------------------------
*/
float Mysqrt(float number)
{
	float guess = number / 2.0f;

	for (int i = 0; i < 10; i++)
	{
		guess = (guess + (number / guess)) / 2.0f;
	}

	return guess;
}



//update 2.0 introduces a new way to think now its all different but at least compile!

struct Vec3
{
    float X;
    float Y;
    float Z;

    Vec3()
    {
        X = 0.0f;
        Y = 0.0f;
        Z = 0.0f;
    }
    Vec3(float x, float y, float z)
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
    void Sum(Vec3 vec3)
    {
        X += vec3.X;
        Y += vec3.Y;
        Z += vec3.Z;
    }

    void Sub(float x, float y, float z)
    {
        X -= x;
        Y -= y;
        Z -= z;
    }
    void Sub(Vec3 vec3)
    {
        X -= vec3.X;
        Y -= vec3.Y;
        Z -= vec3.Z;
    }
    void Change(float x, float y, float z)
    {
        X = x;
        Y = y;
        Z = z;
    }
    void Change(Vec3 vec3)
    {
        X = vec3.X;
        Y = vec3.Y;
        Z = vec3.Z;
    }
    float lenght()
    {
        return (Mysqrt(X * X + Y * Y + Z * Z));
    }
    void Resize(float n)
    {
        X *= n;
        Y *= n;
        Z *= n;
    }

};


struct Transform
{
    Vec3 position;
    Vec3 rotation;
    Vec3 scale;
    
};

struct Form
{
    //ok for now only sphere and i know this struct is bad but i try to make it work
    float radius;

    Form(float n)
    {
        radius = n;
    }
    Form()
    {
        radius = 0.0f;
    }
};


class Object
{
public:
    Transform transform;
    Form form;
};


//ok so for creating 3d im watching a tutorial online i admit its difficult i will only watch how to create a rigidbody if a tut exist so i will upgrade

/*

ok i informed myself i have a position that is what matter now the simplest thing i can do is a sphere because
i can understand if they overlap by just seiing if the center of sphere 1 and 2 are like 10meters away 
if the radius of every sphere is 6 they are touching if the distance between the 2 centers  is less than the some of 
theyre radius they are overlapping and this im sure it works with a sphere of 8 r and 2 im pretty sure 
yeah its basic math im scared for the future but not now
so its like 

distance of two sphere is less than radius 1 + radius 2

*/

float Distance(Object obj1, Object obj2)
{
    //ok now we take the difference of the axis so we know like we get x3 y0 z0 we know that the object to reach is 3 steps to x 0 on y 0 on z so we take it 
    //and trow it into my fntastic sqrt and we have the distance 
    float AxisDifferenceX = obj1.transform.position.X - obj2.transform.position.X;
    float AxisDifferenceY = obj1.transform.position.Y - obj2.transform.position.Y;
    float AxisDifferenceZ = obj1.transform.position.Z - obj2.transform.position.Z;

    
    //so we could get negative numbers because we dont know who is more far from the centers so! the only thing we can do is take the numbers and 
    // i think we just need them positive and i think there is a function just exist for that!
    //...you wanna really know why i said it but i didnt implement it because if you see down
    // we multyply the number by itself and + * + = + and - * - = + so ahahah like technoblade said stay in school it makes you stronger

    //so now we calculate the legnht like we did in the Vec3
    
    
    return (Mysqrt(AxisDifferenceX * AxisDifferenceX + AxisDifferenceY * AxisDifferenceY + AxisDifferenceZ * AxisDifferenceZ));
    //ok we calculate the difference of the two triangle done and its al positive!
    

}

bool IsColliding(Object obj1 , Object obj2)
{
    
    if (obj1.form.radius + obj2.form.radius >= Distance(obj1, obj2))
    {
        return true;
    }
    else
    {
        return false;
    }

}



//omg i thought that i needed like at least 4 month from now to build a miniengine but i did it i understood that your never ready but always ready to try its crazy


int main()
{
    Object haunter;

    Object pikachu;
    pikachu.transform.position.Change(10.34, 23.482, 8.132);
    pikachu.form.radius = 7.53;
    haunter.transform.position.Change(4.01, 13.32, -0.328);
    haunter.form.radius = 12.902;


    bool info = IsColliding(pikachu, haunter);

    std::cout << info << std::endl;

}//omg it runs i fought for bugs but there werent many i am very happy really
//now i know haunter and pikachu collided i am very happy really now i can undertand if something collide it nedds to be a sphere but its ok 
//now i wanna make something more cool like i can simulate a launch of a missile and i create an area and if collide with the sphere of pikachu he die muahahahah evil plan 
//its crazy i started this engine as a joke i know is not that much for everyone that see this but i am happy!