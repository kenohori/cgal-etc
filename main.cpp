/*
 Copyright (c) 2014,
 Ken Arroyo Ohori    g.a.k.arroyoohori@tudelft.nl
 All rights reserved.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
#include <CGAL/Constrained_Delaunay_triangulation_2.h>

#include "Compact_constrained_triangulation_face_base_2.h"
#include "Triangulation_face_base_with_info_on_face_and_halfedges_2.h"
#include "Enhanced_constrained_triangulation_2.h"

typedef CGAL::Exact_predicates_exact_constructions_kernel K;
typedef CGAL::Exact_intersections_tag IT;
typedef CGAL::Triangulation_vertex_base_2<K> VB;
typedef Compact_constrained_triangulation_face_base_2<K> FB;
typedef Triangulation_face_base_with_info_on_face_and_halfedges_2<unsigned char, unsigned char, K, FB> FBWI;
typedef CGAL::Triangulation_data_structure_2<VB, FBWI> TDS;
typedef CGAL::Constrained_Delaunay_triangulation_2<K, TDS, IT> CDT;
typedef Enhanced_constrained_triangulation_2<CDT> Triangulation;

int main(int argc, const char *argv[]) {
  Triangulation t;
  return 0;
}
