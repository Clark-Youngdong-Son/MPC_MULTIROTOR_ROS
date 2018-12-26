#ifndef _MPC_DATA_LOGGER_H_
#define _MPC_DATA_LOGGER_H_

#include <iostream>
#include <fstream>
#include <ros/ros.h>
#include <Eigen/Dense>
#include <ctime>
#include <string>
#include <Params.h>

using namespace Eigen;

namespace SYD {
	class MPCDataLogger {

	public:
	MPCDataLogger();
	~MPCDataLogger();
	void addLine(const double &t_now, const StateNominal &x_n, const InputNominal &u_n, const NVector &x_waypt, const NVector &x_final, const Vector3d &x_obstacle, const double &t_compute, const double &cost_new, const double &t_w, const EigenValues &eig_old, const EigenValues &eig_new, const double &tension, const Vector3d &load_position, const double &t_compute_real);

	private:
	std::ofstream file_;
	std::string fileName;
	};
}
#endif