/*
 * Filters.h
 *
 *  Created on: Oct 23, 2013
 *      Author: Shehzad Ahmed
 */
#include <pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>
#include "filters_interface.h"


#ifndef DOWNSAMPLING_FILTERS_H_
#define DOWNSAMPLING_FILTERS_H_

class downsamplingFilter : public filtersInterface
{
public:

	void applyFilter(pcl::PointCloud<pcl::PointXYZ>::Ptr src, pcl::PointCloud<pcl::PointXYZ>::Ptr dest);
	void setVoxelWidth(float voxel_width_x);
	void setVoxelLength(float voxel_length_y);
	void setVoxelHeight(float voxel_height_z);
	
	
private:

	float voxel_width;
	float voxel_length;
	float voxel_height;
};

#endif /* DOWNSAMPLING_FILTERS_H_ */