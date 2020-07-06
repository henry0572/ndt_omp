#include <pclomp/gicp_omp.h>
#include <pclomp/gicp_omp_impl.hpp>
#include <pclomp/point_type.h>

template class pclomp::GeneralizedIterativeClosestPoint<pcl::PointXYZ, pcl::PointXYZ>;
template class pclomp::GeneralizedIterativeClosestPoint<pcl::PointXYZI, pcl::PointXYZI>;
