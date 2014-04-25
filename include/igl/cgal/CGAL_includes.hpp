#ifndef IGL_CGAL_INCLUDES_H
#define IGL_CGAL_INCLUDES_H

// Triangle triangle intersection
#include <CGAL/intersections.h>
// THIS CANNOT BE INCLUDED IN THE SAME FILE AS <CGAL/intersections.h>
// #include <CGAL/Boolean_set_operations_2.h>

// Constrained Delaunay Triangulation types
#include <CGAL/Constrained_Delaunay_triangulation_2.h>
#include <CGAL/Constrained_triangulation_plus_2.h>

// Axis-align boxes for all-pairs self-intersection detection
#include <CGAL/point_generators_3.h>
#include <CGAL/Bbox_3.h>
#include <CGAL/box_intersection_d.h>
#include <CGAL/function_objects.h>
#include <CGAL/Join_input_iterator.h>
#include <CGAL/algorithm.h>
#include <vector>

// Axis-aligned bounding box tree for tet tri intersection
#include <CGAL/AABB_tree.h>
#include <CGAL/AABB_traits.h>
#include <CGAL/AABB_triangle_primitive.h>

// Boolean operations
#include <CGAL/Polyhedron_3.h>
#include <CGAL/Nef_polyhedron_3.h>

// Delaunay Triangulation in 3D
#include <CGAL/Delaunay_triangulation_3.h>

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Exact_predicates_exact_constructions_kernel.h>

#endif
