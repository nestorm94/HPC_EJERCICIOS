
#include <iostream>
#include <Eigen/Dense>



int main(){

    Eigen::Matrix2d A;
    Eigen::Matrix2d D;

    /* Declaración de los valores en la variable P*/
    A <<    4, 2,
           -1, 0;

    D = A*A*A;
    /* operaciones entre matrices */
    std::cout << "Solución X=A³ punto (j) \n" << D <<std::endl;

    Eigen::Matrix2d B;
    Eigen::Matrix2d C;
    Eigen::Matrix2d E;

    B <<    4, -2,
            1, -7;

    C <<   -1,  2,
            6, -5;

    E = (3*B)-(4*C);
    /* operaciones entre matrices */
    std::cout << "Solución X=3A-4B punto (a) \n" << E <<std::endl;

    Eigen::Matrix2d F;
    Eigen::Matrix2d G;

    F <<    3, -1,
            0,  2;

    G = (F.transpose()*F)-(2*F);
    std::cout << "Solución X=((A^t)*A)-2A punto (i) \n" << G <<std::endl;

    Eigen::Matrix2d H;
    Eigen::Matrix2d I;
    Eigen::Matrix2d J;

    H <<    0, -1,
            2,  1;

    I <<    1,  2,
            3,  4;

    J = ((3*I*H)-(4*H))/2;
    std::cout << "Solución 2X+4A=3BA punto (b) \n" << J <<std::endl;

    Eigen::Matrix2d K;
    Eigen::Matrix2d L;
    Eigen::Matrix2d M;

    K <<    2,  1,
           -4, -3;

    L <<    2,  2,
            6,  4;

    M = L*(K.inverse());
    std::cout << "Solución XA=B punto (d) \n" << M <<std::endl;

    Eigen::Matrix3d N;
    Eigen::Matrix3d O;
    Eigen::Matrix3d P;

    N <<    1,  5, -1,
           -1,  2,  2,
            0, -3,  3;

    O <<   -1, -4,  3,
            1, -2, -2,
           -3,  3, -5;

    P = N+(3*O);

    std::cout << "Solución XA=B punto (f) \n" << P <<std::endl;

    Eigen::Matrix3d Q;
    Eigen::Matrix3d R;
    Eigen::Matrix3d S;

    Q <<    3,  4,  1,
           -1, -3,  3,
            2,  3,  0;

    R <<    3,  9,  7,
            1, 11,  7,
            7,  5,  7;

    S = (Q.transpose())*R.inverse();

    std::cout << "Solución (X^t)A=B punto (n) \n" << S.inverse() <<std::endl;

    Eigen::Matrix3d T;
    Eigen::Matrix3d U;
    Eigen::Matrix3d V;

    T <<    2,  7,  3,
            3,  9,  4,
            1,  5,  3;

    U <<    1,  0,  2,
            0,  1,  0,
            0,  0,  1;

    V = U*(T.inverse());

    std::cout << "Solución XA=B punto (g) \n" << V <<std::endl;

    Eigen::Matrix3d W;
    Eigen::Matrix3d X;
    Eigen::Matrix3d Y;

    W <<    2,  5,  7,
            6,  3,  4,
            5, -2, -3;

    X <<   -1,  1,  0,
            0,  1,  1,
            1,  0, -1;

    Y = X*(W.inverse());

    std::cout << "Solución XA=B punto (o) \n" << Y <<std::endl;

    Eigen::Matrix4d AC;
    Eigen::Matrix4d AD;
    Eigen::Matrix4d AE;

    AC <<   1,  1,  1,  1,
            1,  1, -1, -1,
            1, -1,  1, -1,
            1, -1, -1,  1;

    AD <<   1,  1,  0,  0,
            1,  0,  1,  0,
            1,  0,  0,  1,
            1,  0,  1,  1;

    AE = AD*(AC.inverse());

    std::cout << "Solución XA=B punto (p) \n" << AE <<std::endl;

    Eigen::Matrix2d AF;
    Eigen::Matrix2d AG;
    Eigen::Matrix2d AH;
    Eigen::Matrix2d AI;

    AF <<   -3, -2,
             3,  3;

    AG <<    5,  3,
             9,  4;

    AH <<    1,  1,
             0,  0;

    AI = AF*(AH.inverse())*(AG.transpose());
    std::cout << "Solución AX(B^T)=C punto (C) \n" << AI.inverse() <<std::endl;


    Eigen::Matrix2d AJ;
    Eigen::Matrix2d AK;
    Eigen::Matrix2d AL;
    Eigen::Matrix2d AM;

    AJ <<    2,  4,
             3,  2;

    AK <<    1,  0,
             2,  1;

    AL <<    7,  5,
             6,  1;

    AM = AK*(AL.inverse())*(AJ.transpose());
    std::cout << "Solución (A^T)XB=C punto (K) \n" << AM.inverse() <<std::endl;

    Eigen::Matrix3d AN;
    Eigen::Matrix3d AO;
    Eigen::Matrix3d AP;

    AN <<   1,  1,  1,
            6,  5,  4,
           13, 10,  8;

    AO <<   0,  1,  2,
            1,  0,  2,
            1,  2,  0;

    AP = AO*(AN.inverse());

    std::cout << "Solución XA=B punto (h) \n" << AP <<std::endl;

    return 0;
}

