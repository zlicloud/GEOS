/*
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Copyright (c) 2018, Lawrence Livermore National Security, LLC.
 *
 * Produced at the Lawrence Livermore National Laboratory
 *
 * LLNL-CODE-746361
 *
 * All rights reserved. See COPYRIGHT for details.
 *
 * This file is part of the GEOSX Simulation Framework.
 *
 * GEOSX is a free software; you can redistrubute it and/or modify it under
 * the terms of the GNU Lesser General Public Liscense (as published by the
 * Free Software Foundation) version 2.1 dated February 1999.
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

/*
 * BlueprintOutput.hpp
 *
 *  Created on: Jan 31, 2018
 *      Author: sherman
 */

#ifndef SRC_COMPONENTS_CORE_SRC_BLUEPRINTOUTPUT_HPP_
#define SRC_COMPONENTS_CORE_SRC_BLUEPRINTOUTPUT_HPP_

#include "OutputBase.hpp"
#include "fileIO/blueprint/Blueprint.hpp"

namespace geosx
{

class BlueprintOutput : public OutputBase
{
public:
  BlueprintOutput( std::string const & name,
              ManagedGroup * const parent );

  virtual ~BlueprintOutput();

  static string CatalogName() { return "Blueprint"; }

  virtual void FillDocumentationNode() override;

  virtual void Execute(real64 const time,
                       real64 const dt,  
                       integer const cycle,
                       dataRepository::ManagedGroup * domain ) override;

  
  struct viewKeyStruct
  {
    dataRepository::ViewKey writeFEMFaces = { "writeFEMFaces" };
  } viewKeys;

};


} /* namespace geosx */

#endif /* SRC_COMPONENTS_CORE_SRC_BLUEPRINTOUTPUT_HPP_ */
