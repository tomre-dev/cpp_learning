#include <iostream>
/*
opensource
-----------------------------------------------------------------------------------

                  IDK ENGINE 2

-----------------------------------------------------------------------------------
*/
float Mysqrt(float number)
{
    float guess = number / 2.0f;//if was an in i would have done >> 1 its like divide by 2 but faster! you move the bits undertstand?

	for (int i = 0; i < 10; i++)
	{
		guess = (guess + (number / guess)) / 2.0f;
	}

	return guess;
}




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
    void Multiply(float n)
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

struct Velocity
{
    Vec3 speed;

    Velocity()
    {
        speed.Change(-0.50f, 0.0f, 0.0f);
    }
    Velocity(float x , float y , float z)
    {
        speed.Change(x , y , z);
    }
};

struct Gravity
{
    float currentgravity;
    float constantgravity;


    Gravity(float n , float c)
    {
        constantgravity = n;
        currentgravity = c;
    }
    Gravity()
    {
        constantgravity = 9.81;
        currentgravity = 0;

    }
    void UpdateGravity()
    {
        currentgravity += constantgravity;
    }

    
};



struct RigidBody
{
    Velocity velocity;
    Gravity gravity;
};

class Object
{
public:
    Transform transform;
    Form form;
    RigidBody rigidbody;

};




float Distance(Object& obj1, Object& obj2)
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

bool IsColliding(Object& obj1 , Object& obj2)
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


//ok so for idkengine 3 i want to make the things i remenber i unity first there was a function you could call at the start and then one every frame
//the rigidbody with speed

int main()
{
    //called at the start

    Object haunter;
    haunter.transform.position.Change(10, 0, 0);
    haunter.form.radius = 1;

    Object pikachu;
    pikachu.transform.position.Change(0, 0, 0);
    pikachu.form.radius = 1;

    Object global;
    
    while (true)//called every frame
    {
        float floor_height = -20;
        //simple gravity nothing to crazy
        
        haunter.transform.position.Sub(0.0f, global.rigidbody.gravity.currentgravity , 0.0f);
        pikachu.transform.position.Sub(0.0f, global.rigidbody.gravity.currentgravity, 0.0f);
        global.rigidbody.gravity.UpdateGravity();



        //i move haunter and i think with the rotation i can do cool things even with scalle now i can makes sense of those in a future update i will use them
        haunter.transform.position.Sum(haunter.rigidbody.velocity.speed);
      

        //little bug dei collide more than 1 time but fine
        if (IsColliding(pikachu, haunter))
        {
            haunter.rigidbody.velocity.speed.Multiply(-1);
        }

        //floor 
        if (haunter.transform.position.Y < floor_height)
        {
            haunter.transform.position.Y = floor_height;
            haunter.rigidbody.gravity.currentgravity = 0;
        }

        
    }

}

