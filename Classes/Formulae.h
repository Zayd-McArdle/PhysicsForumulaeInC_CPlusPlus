class FormulaBase
{
protected:
    double m_top, m_left, m_right;
    inline bool fieldInitialised(double* field);
public:
    virtual double getTop();
    void setTop(double* value);    

    virtual double getLeft();
    void setLeft(double* value);

    virtual double getRight();
    void setRight(double* value);
};
/// @brief Used for generic triangle formulas. E.g. distance, speed, time.
class SimpleFormula : public FormulaBase
{

public:
    double getTop() override;
    double getLeft() override;    
    double getRight() override;    
};

/// @brief Used for triangle formulas that include halves, squares, and square roots. E.g. kinetic energy and elastic potential energy.
class ComplexFormula : public FormulaBase
{

public:
    double getTop() override;
    double getLeft() override;    
    double getRight() override;    
};

/// @brief Used for formulas that have an additonal element
class ExtendedFormula : public FormulaBase
{
private:
    double m_centre;
public:
    double getTop() override;
    double getLeft() override;    
    double getCentre();
    void setCentre(double* value);
    double getRight() override;
};
