/**
 * @file header.h
 * @author 260756 (basitahmad4@gmail.com)
 * @brief One Stop solution for mathematical operations:1.Basic Calculator 2.Bitwise Calculator 3.Complex Calculator 4.BMI calculator 5. Digital storage Converter 6.Temperature Converter 7. Unit Converter
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<math.h>
#ifndef _COMPLEX_T_H
#define _COMPLEX_T_H

#include <stdlib.h>
typedef enum error_t {
    ERROR_DIV_BY_ZERO = -2, /**< Division by 0 error */
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 0,
    FAILURE=-3             /**< Compute operation is successful */
}error_t;

/**
 * @brief Structure for BMI calculator
 * 
 */

typedef struct body_mass {
    float height;
    float weight;
    float bmi;
} body_mass;

/**
 * @brief Structure for Complex number
 * 
 */
typedef struct complex_t {
    float real;         /**< real part of the complex number */
    float imaginary;    /**< real part of the complex number */
} complex_t;


/*Using structures to calculate the area of a rectange*/


long area;
	struct points {
		int x;
		int y;
	};

	struct rectangle {
		struct points topleft;
		struct points bottomright;
	}the_box;
/**
 * @brief BMI Calculator which takes height in meter and weight in Kg and gives your BMI
 * 
 * @param height_weight structure of body_mass height in meter and weight in kg.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise and prints your BMI.
 */
error_t bmi_calculator(body_mass height_weight) ;

/**
 * @brief Function for area calculation and all other unit conversions
 * @input All four cordinates for area function
 * @input integer value to convert it into other unit
 * @return error_t 
 */
error_t unit_converter();

/**
 * @brief Function to convert all temperature units i.e celsius to fahrenheit,celsius to kelvin,fahrenheit to celsius,fahrenheit to kelvin
 * 
 * @return error_t 
 */
error_t temperature();

/**
 * @brief 
 * 
 * @return error_t 
 */

error_t digital_storage_converter();
/**
 * @brief Functions for all types of Data Storage unit conversion(bits,bytes,kilobytes,megabytes,gigabytes,terabytes)
 * 
 * @return error_t 
 */
error_t bitwise_operations();
/**
 * @brief Functions to perform Bitwise AND, Bitwise OR, Bitwise XOR , Bitwise NOT, Left shift and Right Shift on decimal integers
 * 
 * @return error_t 
 */
error_t basic_calc();
/**
 * @brief Functions for all types of calculations i.e,add,substract,multiply,divide,power,factorial,modulus.
 * 
 * @return error_t 
 */
error_t complex_calc();

/**
* @brief computes sum of two complex numbers
 * 
 * @param[in] cnum1 Pointer to complex number1
 * @param[in] cnum2 Pointer to complex number2 
 * @param[out] csum Pointer to store the computed result
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t complex_sum(complex_t const* cnum1, complex_t const* cnum2, complex_t* csum);

/**
 * @brief This funtion performs subtraction two complex nos ie. _Z2 from _Z1.
 * 
 * @param _Z1 ( complex_t* ) First complex num.
 * @param _Z2 ( complex_t* ) Second Complex num.
 * @param _Z3 ( complx_t* ) Sum of two complex nos (*_Z3 = *_Z1 - _Z2 )
 * @return error_t returns the error codes: ERROR_DIV_BY_ZERO = -2, ERROR_NULL_PTR = -1, SUCCESS = 0;
 */
error_t complexSub(complex_t const* _Z1, complex_t const* _Z2, complex_t* _Z3);

/**
 * @brief This funtion performs Multiplication two complex nos. _Z1 and Z2.
 * 
 * @param _Z1 ( complex_t* ) First complex num.
 * @param _Z2 ( complex_t* ) Second Complex num.
 * @param _Z3 ( complx_t* ) Sum of two complex nos (*_Z3 = *_Z1 * _Z2 )
 * @return error_t returns the error codes: ERROR_DIV_BY_ZERO = -2, ERROR_NULL_PTR = -1, SUCCESS = 0; 
 */
error_t complexMul(complex_t const* _Z1, complex_t const* _Z2, complex_t* _Z3);

/**
 * @brief This funtion performs division two complex nos. _Z1 by _Z2.
 * 
 * @param _Z1 ( complex_t* ) First complex num.
 * @param _Z2 ( complex_t* ) Second Complex num.
 * @param _Z3 ( complx_t* ) Sum of two complex nos (*_Z3 = *_Z1 / _Z2 )
 * @return error_t returns the error codes: ERROR_DIV_BY_ZERO = -2, ERROR_NULL_PTR = -1, SUCCESS = 0;
 */
error_t complexDiv(complex_t const* _Z1, complex_t const* _Z2, complex_t* _Z3);

float add(float num1, float num2);

error_t calculator_operations();

error_t bitwise_operations();

error_t complex_calculator_operations();

long long int sub(long long int, long long int);

float temp_con(float cel);

#endif /* _COMPLEX_T_H */