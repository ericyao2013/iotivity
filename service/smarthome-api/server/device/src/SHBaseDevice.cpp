/* ****************************************************************
 *
 * Copyright 2017 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/
#include <SHBaseDevice.h>
#include <SHPlatform_Impl.h>

namespace OIC
{
    namespace Service
    {
        namespace SH
        {
            SHBaseDevice::SHBaseDevice()
            {
                SH_Impl::start();
            }

            SHBaseDevice::~SHBaseDevice()
            {
                SH_Impl::stop();
            }

            std::string SHBaseDevice::getType()
            {
                return m_deviceType;
            }

            void SHBaseDevice::setType(std::string type)
            {
                m_deviceType = type;
            }
        }
    }
}