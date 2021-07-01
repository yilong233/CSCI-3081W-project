/**
 *@file vector3D.h
 */
#ifndef VECTOR_3D_H_
#define VECTOR_3D_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <vector>
#include <string>

namespace csci3081 {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief The class for 3D Vector in Math
 *
 * This class contains the methods such as normalize, magnitude, etc.
 * It also contain (x, y, z) coordinates. This will be used for all entities
 * that have three dimensional movement capabilities.
 *
 */

class Vector3D{
public:

  /**
   * @brief The default constructor.
   */
  Vector3D();

  /**
   * @brief The constructor.
   *
   * @param[in] c std::vector<float>
   */
  Vector3D(std::vector<float> c);

  /**
   * @brief Normalize for a Vector2D.
   *
   * @return nothing.
   */
  void normalize();

  /**
   * @brief Magnitude for a Vector2D.
   *
   * @return float.
   */
  float magnitude();

  /**
   * @brief  Set Vector2D.
   *
   * @param[in] c std::vector<float>
   * @return Vector2D.
   */
  void setVec(std::vector<float> c);

  /**
   * @brief Returns std::vector<int> v;.
   *
   * @return std::vector<float>& .
   */
  const std::vector<float>& GetVec() const;
private:
  std::vector<float> vec;
};
}
#endif  // VECTOR_3D_H_
