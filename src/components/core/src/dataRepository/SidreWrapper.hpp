/*
 * SidreWrapper.hpp
 *
 *  Created on: Jul 22, 2016
 *      Author: rrsettgast
 */

#ifndef COMPONENTS_CORE_SRC_DATAREPOSITORY_SIDREWRAPPER_HPP_
#define COMPONENTS_CORE_SRC_DATAREPOSITORY_SIDREWRAPPER_HPP_
#include "common/GeosxConfig.hpp"


#include <string>
#if USE_ATK
#include "sidre/DataStore.hpp"
#include <mpi.h>
#include "spio/IOManager.hpp"
#endif

namespace geosx
{
namespace dataRepository
{

class SidreWrapper
{
public:
  SidreWrapper();
  ~SidreWrapper();

  static axom::sidre::DataStore& dataStore();

  static void writeTree(int num_files, const std::string & path, const std::string & protocol, MPI_Comm comm);

  static void reconstructTree(const std::string & root_path, const std::string & protocol, MPI_Comm comm);

  static void loadExternalData(const std::string & root_path, MPI_Comm comm);

private:

};

} /* namespace dataRepository */
} /* namespace geosx */

#endif /* COMPONENTS_CORE_SRC_DATAREPOSITORY_SIDREWRAPPER_HPP_ */
