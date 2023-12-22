/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:08:41 by abenamar          #+#    #+#             */
/*   Updated: 2023/12/22 15:39:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

static void test(Point const &A,
				 Point const &B,
				 Point const &C,
				 Point const &P,
				 char const *name)
{
	std::cout << name << P << ": \033[0;3";
	std::cout << (bsp(A, B, C, P) ? "2min" : "1mout");
	std::cout << "side\033[0m" << std::endl;
}

int main(void)
{
	Point const A(2.38f, 5.32f);
	Point const B(5.56f, -1.62f);
	Point const C(-2.58f, -2.78f);
	Point const P1(2.36f, 4.84f); // inside
	Point const P2(0.54f, 2.85f);
	Point const P3(3.59f, 2.68f);
	Point const P4(-0.56f, 1.42f);
	Point const P5(-0.26f, 0.48f); // inside
	Point const P6(4.82f, 0.32f);
	Point const P7(-1.16f, -0.68f); // inside
	Point const P8(-1.77f, -1.45f);
	Point const P9(5.16f, -1.32f); // inside
	Point const P10(3.32f, -1.94f);
	Point const P11(-2.58f, -2.18f);
	Point const P12(0.92f, -2.42f);

	std::cout << "The vertices of our beloved triangle are:" << std::endl;
	std::cout << "A" << A << std::endl;
	std::cout << "B" << B << std::endl;
	std::cout << "C" << C << std::endl;
	std::cout << std::endl;
	std::cout << "Are theses points inside the ABC triangle ? ";
	std::cout << "(no vertex or on edge)" << std::endl;
	test(A, B, C, A, "A");
	test(A, B, C, B, "B");
	test(A, B, C, C, "C");
	test(A, B, C, P1, "P1");
	test(A, B, C, P2, "P2");
	test(A, B, C, P3, "P3");
	test(A, B, C, P4, "P4");
	test(A, B, C, P5, "P5");
	test(A, B, C, P6, "P6");
	test(A, B, C, P7, "P7");
	test(A, B, C, P8, "P8");
	test(A, B, C, P9, "P9");
	test(A, B, C, P10, "P10");
	test(A, B, C, P11, "P11");
	test(A, B, C, P12, "P12");
	std::cout << std::endl;
	std::cout << "Are theses points inside the ACB triangle ? ";
	std::cout << "(no vertex or on edge)" << std::endl;
	test(A, C, B, A, "A");
	test(A, C, B, B, "B");
	test(A, C, B, C, "C");
	test(A, C, B, P1, "P1");
	test(A, C, B, P2, "P2");
	test(A, C, B, P3, "P3");
	test(A, C, B, P4, "P4");
	test(A, C, B, P5, "P5");
	test(A, C, B, P6, "P6");
	test(A, C, B, P7, "P7");
	test(A, C, B, P8, "P8");
	test(A, C, B, P9, "P9");
	test(A, C, B, P10, "P10");
	test(A, C, B, P11, "P11");
	test(A, C, B, P12, "P12");
	std::cout << std::endl;
	std::cout << "Are theses points inside the BAC triangle ? ";
	std::cout << "(no vertex or on edge)" << std::endl;
	test(B, A, C, A, "A");
	test(B, A, C, B, "B");
	test(B, A, C, C, "C");
	test(B, A, C, P1, "P1");
	test(B, A, C, P2, "P2");
	test(B, A, C, P3, "P3");
	test(B, A, C, P4, "P4");
	test(B, A, C, P5, "P5");
	test(B, A, C, P6, "P6");
	test(B, A, C, P7, "P7");
	test(B, A, C, P8, "P8");
	test(B, A, C, P9, "P9");
	test(B, A, C, P10, "P10");
	test(B, A, C, P11, "P11");
	test(B, A, C, P12, "P12");
	std::cout << std::endl;
	std::cout << "Are theses points inside the BCA triangle ? ";
	std::cout << "(no vertex or on edge)" << std::endl;
	test(B, C, A, A, "A");
	test(B, C, A, B, "B");
	test(B, C, A, C, "C");
	test(B, C, A, P1, "P1");
	test(B, C, A, P2, "P2");
	test(B, C, A, P3, "P3");
	test(B, C, A, P4, "P4");
	test(B, C, A, P5, "P5");
	test(B, C, A, P6, "P6");
	test(B, C, A, P7, "P7");
	test(B, C, A, P8, "P8");
	test(B, C, A, P9, "P9");
	test(B, C, A, P10, "P10");
	test(B, C, A, P11, "P11");
	test(B, C, A, P12, "P12");
	std::cout << std::endl;
	std::cout << "Are theses points inside the CAB triangle ? ";
	std::cout << "(no vertex or on edge)" << std::endl;
	test(C, A, B, A, "A");
	test(C, A, B, B, "B");
	test(C, A, B, C, "C");
	test(C, A, B, P1, "P1");
	test(C, A, B, P2, "P2");
	test(C, A, B, P3, "P3");
	test(C, A, B, P4, "P4");
	test(C, A, B, P5, "P5");
	test(C, A, B, P6, "P6");
	test(C, A, B, P7, "P7");
	test(C, A, B, P8, "P8");
	test(C, A, B, P9, "P9");
	test(C, A, B, P10, "P10");
	test(C, A, B, P11, "P11");
	test(C, A, B, P12, "P12");
	std::cout << std::endl;
	std::cout << "Are theses points inside the CBA triangle ? ";
	std::cout << "(no vertex or on edge)" << std::endl;
	test(C, B, A, A, "A");
	test(C, B, A, B, "B");
	test(C, B, A, C, "C");
	test(C, B, A, P1, "P1");
	test(C, B, A, P2, "P2");
	test(C, B, A, P3, "P3");
	test(C, B, A, P4, "P4");
	test(C, B, A, P5, "P5");
	test(C, B, A, P6, "P6");
	test(C, B, A, P7, "P7");
	test(C, B, A, P8, "P8");
	test(C, B, A, P9, "P9");
	test(C, B, A, P10, "P10");
	test(C, B, A, P11, "P11");
	test(C, B, A, P12, "P12");
	std::cout << std::endl;

	return 0;
}
