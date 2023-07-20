/*
 * Copyright (c) 2022 HiSilicon (Shanghai) Technologies CO., LIMITED.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IOT_CONFIG_H
#define IOT_CONFIG_H

// <CONFIG THE LOG
/* if you need the iot log for the development , please enable it, else please comment it */
#define CONFIG_LINKLOG_ENABLE   1

// < CONFIG THE WIFI
/* Please modify the ssid and pwd for the own */
#define CONFIG_AP_SSID  "Genius" // WIFI SSID
#define CONFIG_AP_PWD   "zzx040420" // WIFI PWD
/* Tencent iot Cloud user ID , password */
#define CONFIG_USER_ID    "ND3BQUQQE4Hi3861_mqtt;12010126;899e9;1696608000"
#define CONFIG_USER_PWD   "e4aeedaa553a82706e48ff11b784c19465e6d375a2db62f75530422e89c7c828;hmacsha256"
#define CN_CLIENTID     "ND3BQUQQE4Hi3861_mqtt" // Tencent cloud ClientID format: Product ID + device name
#endif