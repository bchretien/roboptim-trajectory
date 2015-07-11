// Copyright (C) 2015 by Benjamin Chrétien, CNRS-LIRMM.
//
// This file is part of roboptim.
//
// roboptim is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// roboptim is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with roboptim.  If not, see <http://www.gnu.org/licenses/>.

#include <algorithm>
#include <functional>
#include <locale>

#include <roboptim/trajectory/visualization/matplotlib.hh>

namespace roboptim
{
  namespace trajectory
  {
    namespace visualization
    {
      namespace matplotlib
      {
        namespace detail
        {
          /// \brief Format a variable name for Python scripts.
          std::string formattedVarName (const std::string& s)
          {
            std::string result;
            result.reserve (s.length ());
            std::remove_copy_if (s.begin (), s.end (),
                                 std::back_inserter (result),
                                 std::not1 (std::ptr_fun (isalnum)));
            return result;
          }
        } // end of namespace detail
      } // end of namespace matplotlib
    } // end of namespace visualization
  } // end of namespace trajectory
} // end of namespace roboptim
