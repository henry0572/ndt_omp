#include <pclomp/ndt_omp.h>
#include <pclomp/ndt_omp_impl.hpp>
#include <pclomp/point_type.h>

template class pclomp::NormalDistributionsTransform<pcl::PointXYZ, pcl::PointXYZ>;
template class pclomp::NormalDistributionsTransform<pcl::PointXYZI, pcl::PointXYZI>;
