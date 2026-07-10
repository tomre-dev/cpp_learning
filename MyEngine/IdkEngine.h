#pragma once
//library
float Mysqrt(float number)
{
    float guess = number / 2.0f;

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
    Velocity(float x, float y, float z)
    {
        speed.Change(x, y, z);
    }
};

struct Gravity
{
    float currentgravity;
    float constantgravity;

    Gravity(float n, float c)
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
    float AxisDifferenceX = obj1.transform.position.X - obj2.transform.position.X;
    float AxisDifferenceY = obj1.transform.position.Y - obj2.transform.position.Y;
    float AxisDifferenceZ = obj1.transform.position.Z - obj2.transform.position.Z;

    return (Mysqrt(AxisDifferenceX * AxisDifferenceX + AxisDifferenceY * AxisDifferenceY + AxisDifferenceZ * AxisDifferenceZ));
}

bool IsColliding(Object& obj1, Object& obj2)
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

