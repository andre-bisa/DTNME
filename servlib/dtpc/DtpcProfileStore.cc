/*
 *    Copyright 2015 United States Government as represented by NASA
 *       Marshall Space Flight Center. All Rights Reserved.
 *
 *    Released under the NASA Open Source Software Agreement version 1.3;
 *    You may obtain a copy of the Agreement at:
 * 
 *        http://ti.arc.nasa.gov/opensource/nosa/
 * 
 *    The subject software is provided "AS IS" WITHOUT ANY WARRANTY of any kind,
 *    either expressed, implied or statutory and this agreement does not,
 *    in any manner, constitute an endorsement by government agency of any
 *    results, designs or products resulting from use of the subject software.
 *    See the Agreement for the specific language governing permissions and
 *    limitations.
 */

#ifdef HAVE_CONFIG_H
#  include <dtn-config.h>
#endif

#ifdef DTPC_ENABLED

#include "DtpcProfileStore.h"

template <>
dtn::DtpcProfileStore* oasys::Singleton<dtn::DtpcProfileStore, false>::instance_ = 0;

namespace dtn {

DtpcProfileStore::DtpcProfileStore()
    : DtpcProfileStoreImpl("DtpcProfileStore", "/dtn/storage/dtpcprofile", 
                          "dtpcprofile", "dtpcprofile")
{
}


} // namespace dtn

#endif // DTPC_ENABLED
