#pragma once

#include "Words.h"

//Pattern: "Es is hoibe Zehne " 09:30 09:31 09:32 09:33 09:34 21:30 21:31 21:32 21:33 21:34 
const uint8_t pattern_0[] PROGMEM = { 0, 1, 9, 19, 0xFF };
//Pattern: "Es is viertel noch Zehne " 10:15 10:16 10:17 10:18 10:19 22:15 22:16 22:17 22:18 22:19 
const uint8_t pattern_1[] PROGMEM = { 0, 1, 5, 6, 19, 0xFF };
//Pattern: "Es is zehn vor Simme " 06:50 06:51 06:52 06:53 06:54 18:50 18:51 18:52 18:53 18:54 
const uint8_t pattern_2[] PROGMEM = { 0, 1, 4, 8, 16, 0xFF };
//Pattern: "Es is zwanzg vor Eife " 10:40 10:41 10:42 10:43 10:44 22:40 22:41 22:42 22:43 22:44 
const uint8_t pattern_3[] PROGMEM = { 0, 1, 7, 8, 21, 0xFF };
//Pattern: "Es is zwanzg vor Zweife " 11:40 11:41 11:42 11:43 11:44 23:40 23:41 23:42 23:43 23:44 
const uint8_t pattern_4[] PROGMEM = { 0, 1, 7, 8, 20, 0xFF };
//Pattern: "Es is zwanzg vor Viere " 03:40 03:41 03:42 03:43 03:44 15:40 15:41 15:42 15:43 15:44 
const uint8_t pattern_5[] PROGMEM = { 0, 1, 7, 8, 13, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Zehne " 09:35 09:36 09:37 09:38 09:39 21:35 21:36 21:37 21:38 21:39 
const uint8_t pattern_6[] PROGMEM = { 0, 1, 3, 6, 9, 19, 0xFF };
//Pattern: "Es is zehn noch Zehne " 10:10 10:11 10:12 10:13 10:14 22:10 22:11 22:12 22:13 22:14 
const uint8_t pattern_7[] PROGMEM = { 0, 1, 4, 6, 19, 0xFF };
//Pattern: "Es is punkt Neine " 09:00 09:01 09:02 09:03 09:04 21:00 21:01 21:02 21:03 21:04 
const uint8_t pattern_8[] PROGMEM = { 0, 1, 2, 18, 0xFF };
//Pattern: "Es is fÃ¼nf noch Zwoa " 02:05 02:06 02:07 02:08 02:09 14:05 14:06 14:07 14:08 14:09 
const uint8_t pattern_9[] PROGMEM = { 0, 1, 3, 6, 11, 0xFF };
//Pattern: "Es is fÃ¼nf noch Oans " 01:05 01:06 01:07 01:08 01:09 13:05 13:06 13:07 13:08 13:09 
const uint8_t pattern_10[] PROGMEM = { 0, 1, 3, 6, 10, 0xFF };
//Pattern: "Es is punkt Drei " 03:00 03:01 03:02 03:03 03:04 15:00 15:01 15:02 15:03 15:04 
const uint8_t pattern_11[] PROGMEM = { 0, 1, 2, 12, 0xFF };
//Pattern: "Es is punkt Zwoa " 02:00 02:01 02:02 02:03 02:04 14:00 14:01 14:02 14:03 14:04 
const uint8_t pattern_12[] PROGMEM = { 0, 1, 2, 11, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Simme " 06:25 06:26 06:27 06:28 06:29 18:25 18:26 18:27 18:28 18:29 
const uint8_t pattern_13[] PROGMEM = { 0, 1, 3, 8, 9, 16, 0xFF };
//Pattern: "Es is viertel noch Viere " 04:15 04:16 04:17 04:18 04:19 16:15 16:16 16:17 16:18 16:19 
const uint8_t pattern_14[] PROGMEM = { 0, 1, 5, 6, 13, 0xFF };
//Pattern: "Es is zehn vor FÃ¼nfe " 04:50 04:51 04:52 04:53 04:54 16:50 16:51 16:52 16:53 16:54 
const uint8_t pattern_15[] PROGMEM = { 0, 1, 4, 8, 14, 0xFF };
//Pattern: "Es is zwanzg noch Neine " 09:20 09:21 09:22 09:23 09:24 21:20 21:21 21:22 21:23 21:24 
const uint8_t pattern_16[] PROGMEM = { 0, 1, 6, 7, 18, 0xFF };
//Pattern: "Es is fÃ¼nf vor FÃ¼nfe " 04:55 04:56 04:57 04:58 04:59 16:55 16:56 16:57 16:58 16:59 
const uint8_t pattern_17[] PROGMEM = { 0, 1, 3, 8, 14, 0xFF };
//Pattern: "Es is zwanzg noch Drei " 03:20 03:21 03:22 03:23 03:24 15:20 15:21 15:22 15:23 15:24 
const uint8_t pattern_18[] PROGMEM = { 0, 1, 6, 7, 12, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Zweife " 11:35 11:36 11:37 11:38 11:39 23:35 23:36 23:37 23:38 23:39 
const uint8_t pattern_19[] PROGMEM = { 0, 1, 3, 6, 9, 20, 0xFF };
//Pattern: "Es is viertel noch Sechse " 06:15 06:16 06:17 06:18 06:19 18:15 18:16 18:17 18:18 18:19 
const uint8_t pattern_20[] PROGMEM = { 0, 1, 5, 6, 15, 0xFF };
//Pattern: "Es is zehn noch  Eife" 11:10 11:11 11:12 11:13 11:14 23:10 23:11 23:12 23:13 23:14 
const uint8_t pattern_21[] PROGMEM = { 0, 1, 4, 6, 21, 0xFF };
//Pattern: "Es is zehn noch Zweife " 00:10 00:11 00:12 00:13 00:14 12:10 12:11 12:12 12:13 12:14 
const uint8_t pattern_22[] PROGMEM = { 0, 1, 4, 6, 20, 0xFF };
//Pattern: "Es is fÃ¼nf vor Simme " 06:55 06:56 06:57 06:58 06:59 18:55 18:56 18:57 18:58 18:59 
const uint8_t pattern_23[] PROGMEM = { 0, 1, 3, 8, 16, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Eife " 10:35 10:36 10:37 10:38 10:39 22:35 22:36 22:37 22:38 22:39 
const uint8_t pattern_24[] PROGMEM = { 0, 1, 3, 6, 9, 21, 0xFF };
//Pattern: "Es is fÃ¼nf noch Eife " 11:05 11:06 11:07 11:08 11:09 23:05 23:06 23:07 23:08 23:09 
const uint8_t pattern_25[] PROGMEM = { 0, 1, 3, 6, 21, 0xFF };
//Pattern: "Es is fÃ¼nf noch Zweife " 00:05 00:06 00:07 00:08 00:09 12:05 12:06 12:07 12:08 12:09 
const uint8_t pattern_26[] PROGMEM = { 0, 1, 3, 6, 20, 0xFF };
//Pattern: "Es is zwanzg vor Sechse " 05:40 05:41 05:42 05:43 05:44 17:40 17:41 17:42 17:43 17:44 
const uint8_t pattern_27[] PROGMEM = { 0, 1, 7, 8, 15, 0xFF };
//Pattern: "Es is viertel vor Achte " 07:45 07:46 07:47 07:48 07:49 19:45 19:46 19:47 19:48 19:49 
const uint8_t pattern_28[] PROGMEM = { 0, 1, 5, 8, 17, 0xFF };
//Pattern: "Es is fÃ¼nf vor Zehne " 09:55 09:56 09:57 09:58 09:59 21:55 21:56 21:57 21:58 21:59 
const uint8_t pattern_29[] PROGMEM = { 0, 1, 3, 8, 19, 0xFF };
//Pattern: "Es is hoibe Viere " 03:30 03:31 03:32 03:33 03:34 15:30 15:31 15:32 15:33 15:34 
const uint8_t pattern_30[] PROGMEM = { 0, 1, 9, 13, 0xFF };
//Pattern: "Es is viertel noch FÃ¼nfe " 05:15 05:16 05:17 05:18 05:19 17:15 17:16 17:17 17:18 17:19 
const uint8_t pattern_31[] PROGMEM = { 0, 1, 5, 6, 14, 0xFF };
//Pattern: "Es is hoibe Achte " 07:30 07:31 07:32 07:33 07:34 19:30 19:31 19:32 19:33 19:34 
const uint8_t pattern_32[] PROGMEM = { 0, 1, 9, 17, 0xFF };
//Pattern: "Es is fÃ¼nf vor Eife " 10:55 10:56 10:57 10:58 10:59 22:55 22:56 22:57 22:58 22:59 
const uint8_t pattern_33[] PROGMEM = { 0, 1, 3, 8, 21, 0xFF };
//Pattern: "Es is hoibe Oans " 00:30 00:31 00:32 00:33 00:34 12:30 12:31 12:32 12:33 12:34 
const uint8_t pattern_34[] PROGMEM = { 0, 1, 9, 10, 0xFF };
//Pattern: "Es is fÃ¼nf vor Zweife " 11:55 11:56 11:57 11:58 11:59 23:55 23:56 23:57 23:58 23:59 
const uint8_t pattern_35[] PROGMEM = { 0, 1, 3, 8, 20, 0xFF };
//Pattern: "Es is viertel vor Drei " 02:45 02:46 02:47 02:48 02:49 14:45 14:46 14:47 14:48 14:49 
const uint8_t pattern_36[] PROGMEM = { 0, 1, 5, 8, 12, 0xFF };
//Pattern: "Es is hoibe Sechse " 05:30 05:31 05:32 05:33 05:34 17:30 17:31 17:32 17:33 17:34 
const uint8_t pattern_37[] PROGMEM = { 0, 1, 9, 15, 0xFF };
//Pattern: "Es is punkt Sechse " 06:00 06:01 06:02 06:03 06:04 18:00 18:01 18:02 18:03 18:04 
const uint8_t pattern_38[] PROGMEM = { 0, 1, 2, 15, 0xFF };
//Pattern: "Es is zwanzg noch FÃ¼nfe " 05:20 05:21 05:22 05:23 05:24 17:20 17:21 17:22 17:23 17:24 
const uint8_t pattern_39[] PROGMEM = { 0, 1, 6, 7, 14, 0xFF };
//Pattern: "Es is zehn noch Oans " 01:10 01:11 01:12 01:13 01:14 13:10 13:11 13:12 13:13 13:14 
const uint8_t pattern_40[] PROGMEM = { 0, 1, 4, 6, 10, 0xFF };
//Pattern: "Es is punkt Zweife " 00:00 00:01 00:02 00:03 00:04 12:00 12:01 12:02 12:03 12:04 
const uint8_t pattern_41[] PROGMEM = { 0, 1, 2, 20, 0xFF };
//Pattern: "Es is zwanzg vor FÃ¼nfe " 04:40 04:41 04:42 04:43 04:44 16:40 16:41 16:42 16:43 16:44 
const uint8_t pattern_42[] PROGMEM = { 0, 1, 7, 8, 14, 0xFF };
//Pattern: "Es is hoibe Zwoa " 01:30 01:31 01:32 01:33 01:34 13:30 13:31 13:32 13:33 13:34 
const uint8_t pattern_43[] PROGMEM = { 0, 1, 9, 11, 0xFF };
//Pattern: "Es is punkt Eife " 11:00 11:01 11:02 11:03 11:04 23:00 23:01 23:02 23:03 23:04 
const uint8_t pattern_44[] PROGMEM = { 0, 1, 2, 21, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Oans " 00:25 00:26 00:27 00:28 00:29 12:25 12:26 12:27 12:28 12:29 
const uint8_t pattern_45[] PROGMEM = { 0, 1, 3, 8, 9, 10, 0xFF };
//Pattern: "Es is zehn vor Neine " 08:50 08:51 08:52 08:53 08:54 20:50 20:51 20:52 20:53 20:54 
const uint8_t pattern_46[] PROGMEM = { 0, 1, 4, 8, 18, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Simme " 06:35 06:36 06:37 06:38 06:39 18:35 18:36 18:37 18:38 18:39 
const uint8_t pattern_47[] PROGMEM = { 0, 1, 3, 6, 9, 16, 0xFF };
//Pattern: "Es is fÃ¼nf vor Viere " 03:55 03:56 03:57 03:58 03:59 15:55 15:56 15:57 15:58 15:59 
const uint8_t pattern_48[] PROGMEM = { 0, 1, 3, 8, 13, 0xFF };
//Pattern: "Es is fÃ¼nf noch Viere " 04:05 04:06 04:07 04:08 04:09 16:05 16:06 16:07 16:08 16:09 
const uint8_t pattern_49[] PROGMEM = { 0, 1, 3, 6, 13, 0xFF };
//Pattern: "Es is zwanzg noch Eife" 11:20 11:21 11:22 11:23 11:24 23:20 23:21 23:22 23:23 23:24 
const uint8_t pattern_50[] PROGMEM = { 0, 1, 6, 7, 21, 0xFF };
//Pattern: "Es is zwanzg noch Zweife " 00:20 00:21 00:22 00:23 00:24 12:20 12:21 12:22 12:23 12:24 
const uint8_t pattern_51[] PROGMEM = { 0, 1, 6, 7, 20, 0xFF };
//Pattern: "Es is viertel vor FÃ¼nfe " 04:45 04:46 04:47 04:48 04:49 16:45 16:46 16:47 16:48 16:49 
const uint8_t pattern_52[] PROGMEM = { 0, 1, 5, 8, 14, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Viere " 03:25 03:26 03:27 03:28 03:29 15:25 15:26 15:27 15:28 15:29 
const uint8_t pattern_53[] PROGMEM = { 0, 1, 3, 8, 9, 13, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Neine " 08:35 08:36 08:37 08:38 08:39 20:35 20:36 20:37 20:38 20:39 
const uint8_t pattern_54[] PROGMEM = { 0, 1, 3, 6, 9, 18, 0xFF };
//Pattern: "Es is hoibe Simme " 06:30 06:31 06:32 06:33 06:34 18:30 18:31 18:32 18:33 18:34 
const uint8_t pattern_55[] PROGMEM = { 0, 1, 9, 16, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Oans " 00:35 00:36 00:37 00:38 00:39 12:35 12:36 12:37 12:38 12:39 
const uint8_t pattern_56[] PROGMEM = { 0, 1, 3, 6, 9, 10, 0xFF };
//Pattern: "Es is zehn noch Neine " 09:10 09:11 09:12 09:13 09:14 21:10 21:11 21:12 21:13 21:14 
const uint8_t pattern_57[] PROGMEM = { 0, 1, 4, 6, 18, 0xFF };
//Pattern: "Es is zwanzg vor Zehne " 09:40 09:41 09:42 09:43 09:44 21:40 21:41 21:42 21:43 21:44 
const uint8_t pattern_58[] PROGMEM = { 0, 1, 7, 8, 19, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Viere " 03:35 03:36 03:37 03:38 03:39 15:35 15:36 15:37 15:38 15:39 
const uint8_t pattern_59[] PROGMEM = { 0, 1, 3, 6, 9, 13, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Neine " 08:25 08:26 08:27 08:28 08:29 20:25 20:26 20:27 20:28 20:29 
const uint8_t pattern_60[] PROGMEM = { 0, 1, 3, 8, 9, 18, 0xFF };
//Pattern: "Es is zehn noch Viere " 04:10 04:11 04:12 04:13 04:14 16:10 16:11 16:12 16:13 16:14 
const uint8_t pattern_61[] PROGMEM = { 0, 1, 4, 6, 13, 0xFF };
//Pattern: "Es is punkt Zehne " 10:00 10:01 10:02 10:03 10:04 22:00 22:01 22:02 22:03 22:04 
const uint8_t pattern_62[] PROGMEM = { 0, 1, 2, 19, 0xFF };
//Pattern: "Es is viertel noch Eife" 11:15 11:16 11:17 11:18 11:19 23:15 23:16 23:17 23:18 23:19 
const uint8_t pattern_63[] PROGMEM = { 0, 1, 5, 6, 21, 0xFF };
//Pattern: "Es is viertel noch Zweife " 00:15 00:16 00:17 00:18 00:19 12:15 12:16 12:17 12:18 12:19 
const uint8_t pattern_64[] PROGMEM = { 0, 1, 5, 6, 20, 0xFF };
//Pattern: "Es is fÃ¼nf noch Neine " 09:05 09:06 09:07 09:08 09:09 21:05 21:06 21:07 21:08 21:09 
const uint8_t pattern_65[] PROGMEM = { 0, 1, 3, 6, 18, 0xFF };
//Pattern: "Es is punkt FÃ¼nfe " 05:00 05:01 05:02 05:03 05:04 17:00 17:01 17:02 17:03 17:04 
const uint8_t pattern_66[] PROGMEM = { 0, 1, 2, 14, 0xFF };
//Pattern: "Es is viertel vor Zehne " 09:45 09:46 09:47 09:48 09:49 21:45 21:46 21:47 21:48 21:49 
const uint8_t pattern_67[] PROGMEM = { 0, 1, 5, 8, 19, 0xFF };
//Pattern: "Es is fÃ¼nf noch FÃ¼nfe " 05:05 05:06 05:07 05:08 05:09 17:05 17:06 17:07 17:08 17:09 
const uint8_t pattern_68[] PROGMEM = { 0, 1, 3, 6, 14, 0xFF };
//Pattern: "Es is viertel vor Eife " 10:45 10:46 10:47 10:48 10:49 22:45 22:46 22:47 22:48 22:49 
const uint8_t pattern_69[] PROGMEM = { 0, 1, 5, 8, 21, 0xFF };
//Pattern: "Es is fÃ¼nf vor Neine " 08:55 08:56 08:57 08:58 08:59 20:55 20:56 20:57 20:58 20:59 
const uint8_t pattern_70[] PROGMEM = { 0, 1, 3, 8, 18, 0xFF };
//Pattern: "Es is viertel vor Zweife " 11:45 11:46 11:47 11:48 11:49 23:45 23:46 23:47 23:48 23:49 
const uint8_t pattern_71[] PROGMEM = { 0, 1, 5, 8, 20, 0xFF };
//Pattern: "Es is fÃ¼nf noch Achte " 08:05 08:06 08:07 08:08 08:09 20:05 20:06 20:07 20:08 20:09 
const uint8_t pattern_72[] PROGMEM = { 0, 1, 3, 6, 17, 0xFF };
//Pattern: "Es is fÃ¼nf vor Drei " 02:55 02:56 02:57 02:58 02:59 14:55 14:56 14:57 14:58 14:59 
const uint8_t pattern_73[] PROGMEM = { 0, 1, 3, 8, 12, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Zehne " 09:25 09:26 09:27 09:28 09:29 21:25 21:26 21:27 21:28 21:29 
const uint8_t pattern_74[] PROGMEM = { 0, 1, 3, 8, 9, 19, 0xFF };
//Pattern: "Es is zehn vor Sechse " 05:50 05:51 05:52 05:53 05:54 17:50 17:51 17:52 17:53 17:54 
const uint8_t pattern_75[] PROGMEM = { 0, 1, 4, 8, 15, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Drei " 02:35 02:36 02:37 02:38 02:39 14:35 14:36 14:37 14:38 14:39 
const uint8_t pattern_76[] PROGMEM = { 0, 1, 3, 6, 9, 12, 0xFF };
//Pattern: "Es is zehn vor Eife" 10:50 10:51 10:52 10:53 10:54 22:50 22:51 22:52 22:53 22:54 
const uint8_t pattern_77[] PROGMEM = { 0, 1, 4, 8, 21, 0xFF };
//Pattern: "Es is zwanzg noch Zehne " 10:20 10:21 10:22 10:23 10:24 22:20 22:21 22:22 22:23 22:24 
const uint8_t pattern_78[] PROGMEM = { 0, 1, 6, 7, 19, 0xFF };
//Pattern: "Es is zehn vor Zweife " 11:50 11:51 11:52 11:53 11:54 23:50 23:51 23:52 23:53 23:54 
const uint8_t pattern_79[] PROGMEM = { 0, 1, 4, 8, 20, 0xFF };
//Pattern: "Es is zehn vor Viere " 03:50 03:51 03:52 03:53 03:54 15:50 15:51 15:52 15:53 15:54 
const uint8_t pattern_80[] PROGMEM = { 0, 1, 4, 8, 13, 0xFF };
//Pattern: "Es is viertel vor Viere " 03:45 03:46 03:47 03:48 03:49 15:45 15:46 15:47 15:48 15:49 
const uint8_t pattern_81[] PROGMEM = { 0, 1, 5, 8, 13, 0xFF };
//Pattern: "Es is hoibe Drei " 02:30 02:31 02:32 02:33 02:34 14:30 14:31 14:32 14:33 14:34 
const uint8_t pattern_82[] PROGMEM = { 0, 1, 9, 12, 0xFF };
//Pattern: "Es is zehn noch Simme " 07:10 07:11 07:12 07:13 07:14 19:10 19:11 19:12 19:13 19:14 
const uint8_t pattern_83[] PROGMEM = { 0, 1, 4, 6, 16, 0xFF };
//Pattern: "Es is fÃ¼nf vor Oans " 00:55 00:56 00:57 00:58 00:59 12:55 12:56 12:57 12:58 12:59 
const uint8_t pattern_84[] PROGMEM = { 0, 1, 3, 8, 10, 0xFF };
//Pattern: "Es is viertel vor Sechse " 05:45 05:46 05:47 05:48 05:49 17:45 17:46 17:47 17:48 17:49 
const uint8_t pattern_85[] PROGMEM = { 0, 1, 5, 8, 15, 0xFF };
//Pattern: "Es is fÃ¼nf noch Simme " 07:05 07:06 07:07 07:08 07:09 19:05 19:06 19:07 19:08 19:09 
const uint8_t pattern_86[] PROGMEM = { 0, 1, 3, 6, 16, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Zwoa " 01:35 01:36 01:37 01:38 01:39 13:35 13:36 13:37 13:38 13:39 
const uint8_t pattern_87[] PROGMEM = { 0, 1, 3, 6, 9, 11, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Eife " 10:25 10:26 10:27 10:28 10:29 22:25 22:26 22:27 22:28 22:29 
const uint8_t pattern_88[] PROGMEM = { 0, 1, 3, 8, 9, 21, 0xFF };
//Pattern: "Es is zwanzg vor Achte " 07:40 07:41 07:42 07:43 07:44 19:40 19:41 19:42 19:43 19:44 
const uint8_t pattern_89[] PROGMEM = { 0, 1, 7, 8, 17, 0xFF };
//Pattern: "Es is zwanzg vor Drei " 02:40 02:41 02:42 02:43 02:44 14:40 14:41 14:42 14:43 14:44 
const uint8_t pattern_90[] PROGMEM = { 0, 1, 7, 8, 12, 0xFF };
//Pattern: "Es is viertel vor Zwoa " 01:45 01:46 01:47 01:48 01:49 13:45 13:46 13:47 13:48 13:49 
const uint8_t pattern_91[] PROGMEM = { 0, 1, 5, 8, 11, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Zweife " 11:25 11:26 11:27 11:28 11:29 23:25 23:26 23:27 23:28 23:29 
const uint8_t pattern_92[] PROGMEM = { 0, 1, 3, 8, 9, 20, 0xFF };
//Pattern: "Es is zwanzg noch Viere " 04:20 04:21 04:22 04:23 04:24 16:20 16:21 16:22 16:23 16:24 
const uint8_t pattern_93[] PROGMEM = { 0, 1, 6, 7, 13, 0xFF };
//Pattern: "Es is punkt Achte " 08:00 08:01 08:02 08:03 08:04 20:00 20:01 20:02 20:03 20:04 
const uint8_t pattern_94[] PROGMEM = { 0, 1, 2, 17, 0xFF };
//Pattern: "Es is viertel noch Neine " 09:15 09:16 09:17 09:18 09:19 21:15 21:16 21:17 21:18 21:19 
const uint8_t pattern_95[] PROGMEM = { 0, 1, 5, 6, 18, 0xFF };
//Pattern: "Es is zehn vor Zehne " 09:50 09:51 09:52 09:53 09:54 21:50 21:51 21:52 21:53 21:54 
const uint8_t pattern_96[] PROGMEM = { 0, 1, 4, 8, 19, 0xFF };
//Pattern: "Es is zehn vor Oans " 00:50 00:51 00:52 00:53 00:54 12:50 12:51 12:52 12:53 12:54 
const uint8_t pattern_97[] PROGMEM = { 0, 1, 4, 8, 10, 0xFF };
//Pattern: "Es is viertel noch Drei " 03:15 03:16 03:17 03:18 03:19 15:15 15:16 15:17 15:18 15:19 
const uint8_t pattern_98[] PROGMEM = { 0, 1, 5, 6, 12, 0xFF };
//Pattern: "Es is hoibe Neine " 08:30 08:31 08:32 08:33 08:34 20:30 20:31 20:32 20:33 20:34 
const uint8_t pattern_99[] PROGMEM = { 0, 1, 9, 18, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Zwoa " 01:25 01:26 01:27 01:28 01:29 13:25 13:26 13:27 13:28 13:29 
const uint8_t pattern_100[] PROGMEM = { 0, 1, 3, 8, 9, 11, 0xFF };
//Pattern: "Es is viertel vor Neine " 08:45 08:46 08:47 08:48 08:49 20:45 20:46 20:47 20:48 20:49 
const uint8_t pattern_101[] PROGMEM = { 0, 1, 5, 8, 18, 0xFF };
//Pattern: "Es is zwanzg noch Sechse " 06:20 06:21 06:22 06:23 06:24 18:20 18:21 18:22 18:23 18:24 
const uint8_t pattern_102[] PROGMEM = { 0, 1, 6, 7, 15, 0xFF };
//Pattern: "Es is punkt Simme " 07:00 07:01 07:02 07:03 07:04 19:00 19:01 19:02 19:03 19:04 
const uint8_t pattern_103[] PROGMEM = { 0, 1, 2, 16, 0xFF };
//Pattern: "Es is viertel noch Achte " 08:15 08:16 08:17 08:18 08:19 20:15 20:16 20:17 20:18 20:19 
const uint8_t pattern_104[] PROGMEM = { 0, 1, 5, 6, 17, 0xFF };
//Pattern: "Es is hoibe FÃ¼nfe " 04:30 04:31 04:32 04:33 04:34 16:30 16:31 16:32 16:33 16:34 
const uint8_t pattern_105[] PROGMEM = { 0, 1, 9, 14, 0xFF };
//Pattern: "Es is fÃ¼nf noch Zehne " 10:05 10:06 10:07 10:08 10:09 22:05 22:06 22:07 22:08 22:09 
const uint8_t pattern_106[] PROGMEM = { 0, 1, 3, 6, 19, 0xFF };
//Pattern: "Es is zwanzg vor Zwoa " 01:40 01:41 01:42 01:43 01:44 13:40 13:41 13:42 13:43 13:44 
const uint8_t pattern_107[] PROGMEM = { 0, 1, 7, 8, 11, 0xFF };
//Pattern: "Es is zwanzg noch Oans " 01:20 01:21 01:22 01:23 01:24 13:20 13:21 13:22 13:23 13:24 
const uint8_t pattern_108[] PROGMEM = { 0, 1, 6, 7, 10, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Achte " 07:25 07:26 07:27 07:28 07:29 19:25 19:26 19:27 19:28 19:29 
const uint8_t pattern_109[] PROGMEM = { 0, 1, 3, 8, 9, 17, 0xFF };
//Pattern: "Es is zwanzg vor Neine " 08:40 08:41 08:42 08:43 08:44 20:40 20:41 20:42 20:43 20:44 
const uint8_t pattern_110[] PROGMEM = { 0, 1, 7, 8, 18, 0xFF };
//Pattern: "Es is zwanzg vor Oans " 00:40 00:41 00:42 00:43 00:44 12:40 12:41 12:42 12:43 12:44 
const uint8_t pattern_111[] PROGMEM = { 0, 1, 7, 8, 10, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Achte " 07:35 07:36 07:37 07:38 07:39 19:35 19:36 19:37 19:38 19:39 
const uint8_t pattern_112[] PROGMEM = { 0, 1, 3, 6, 9, 17, 0xFF };
//Pattern: "Es is zehn noch Achte " 08:10 08:11 08:12 08:13 08:14 20:10 20:11 20:12 20:13 20:14 
const uint8_t pattern_113[] PROGMEM = { 0, 1, 4, 6, 17, 0xFF };
//Pattern: "Es is zwanzg noch Simme " 07:20 07:21 07:22 07:23 07:24 19:20 19:21 19:22 19:23 19:24 
const uint8_t pattern_114[] PROGMEM = { 0, 1, 6, 7, 16, 0xFF };
//Pattern: "Es is zwanzg noch Achte " 08:20 08:21 08:22 08:23 08:24 20:20 20:21 20:22 20:23 20:24 
const uint8_t pattern_115[] PROGMEM = { 0, 1, 6, 7, 17, 0xFF };
//Pattern: "Es is punkt Viere " 04:00 04:01 04:02 04:03 04:04 16:00 16:01 16:02 16:03 16:04 
const uint8_t pattern_116[] PROGMEM = { 0, 1, 2, 13, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe FÃ¼nfe " 04:25 04:26 04:27 04:28 04:29 16:25 16:26 16:27 16:28 16:29 
const uint8_t pattern_117[] PROGMEM = { 0, 1, 3, 8, 9, 14, 0xFF };
//Pattern: "Es is zehn noch FÃ¼nfe " 05:10 05:11 05:12 05:13 05:14 17:10 17:11 17:12 17:13 17:14 
const uint8_t pattern_118[] PROGMEM = { 0, 1, 4, 6, 14, 0xFF };
//Pattern: "Es is viertel noch Zwoa " 02:15 02:16 02:17 02:18 02:19 14:15 14:16 14:17 14:18 14:19 
const uint8_t pattern_119[] PROGMEM = { 0, 1, 5, 6, 11, 0xFF };
//Pattern: "Es is zehn noch Zwoa " 02:10 02:11 02:12 02:13 02:14 14:10 14:11 14:12 14:13 14:14 
const uint8_t pattern_120[] PROGMEM = { 0, 1, 4, 6, 11, 0xFF };
//Pattern: "Es is zehn vor Drei " 02:50 02:51 02:52 02:53 02:54 14:50 14:51 14:52 14:53 14:54 
const uint8_t pattern_121[] PROGMEM = { 0, 1, 4, 8, 12, 0xFF };
//Pattern: "Es is viertel noch Oans " 01:15 01:16 01:17 01:18 01:19 13:15 13:16 13:17 13:18 13:19 
const uint8_t pattern_122[] PROGMEM = { 0, 1, 5, 6, 10, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe Sechse " 05:35 05:36 05:37 05:38 05:39 17:35 17:36 17:37 17:38 17:39 
const uint8_t pattern_123[] PROGMEM = { 0, 1, 3, 6, 9, 15, 0xFF };
//Pattern: "Es is hoibe Eife " 10:30 10:31 10:32 10:33 10:34 22:30 22:31 22:32 22:33 22:34 
const uint8_t pattern_124[] PROGMEM = { 0, 1, 9, 21, 0xFF };
//Pattern: "Es is zehn vor Zwoa " 01:50 01:51 01:52 01:53 01:54 13:50 13:51 13:52 13:53 13:54 
const uint8_t pattern_125[] PROGMEM = { 0, 1, 4, 8, 11, 0xFF };
//Pattern: "Es is viertel vor Oans " 00:45 00:46 00:47 00:48 00:49 12:45 12:46 12:47 12:48 12:49 
const uint8_t pattern_126[] PROGMEM = { 0, 1, 5, 8, 10, 0xFF };
//Pattern: "Es is zehn noch Sechse " 06:10 06:11 06:12 06:13 06:14 18:10 18:11 18:12 18:13 18:14 
const uint8_t pattern_127[] PROGMEM = { 0, 1, 4, 6, 15, 0xFF };
//Pattern: "Es is fÃ¼nf vor Sechse " 05:55 05:56 05:57 05:58 05:59 17:55 17:56 17:57 17:58 17:59 
const uint8_t pattern_128[] PROGMEM = { 0, 1, 3, 8, 15, 0xFF };
//Pattern: "Es is viertel noch Simme " 07:15 07:16 07:17 07:18 07:19 19:15 19:16 19:17 19:18 19:19 
const uint8_t pattern_129[] PROGMEM = { 0, 1, 5, 6, 16, 0xFF };
//Pattern: "Es is zwanzg noch Zwoa " 02:20 02:21 02:22 02:23 02:24 14:20 14:21 14:22 14:23 14:24 
const uint8_t pattern_130[] PROGMEM = { 0, 1, 6, 7, 11, 0xFF };
//Pattern: "Es is fÃ¼nf noch Sechse " 06:05 06:06 06:07 06:08 06:09 18:05 18:06 18:07 18:08 18:09 
const uint8_t pattern_131[] PROGMEM = { 0, 1, 3, 6, 15, 0xFF };
//Pattern: "Es is viertel vor Simme " 06:45 06:46 06:47 06:48 06:49 18:45 18:46 18:47 18:48 18:49 
const uint8_t pattern_132[] PROGMEM = { 0, 1, 5, 8, 16, 0xFF };
//Pattern: "Es is fÃ¼nf noch hoibe FÃ¼nfe " 04:35 04:36 04:37 04:38 04:39 16:35 16:36 16:37 16:38 16:39 
const uint8_t pattern_133[] PROGMEM = { 0, 1, 3, 6, 9, 14, 0xFF };
//Pattern: "Es is fÃ¼nf vor Zwoa " 01:55 01:56 01:57 01:58 01:59 13:55 13:56 13:57 13:58 13:59 
const uint8_t pattern_134[] PROGMEM = { 0, 1, 3, 8, 11, 0xFF };
//Pattern: "Es is zehn noch Drei " 03:10 03:11 03:12 03:13 03:14 15:10 15:11 15:12 15:13 15:14 
const uint8_t pattern_135[] PROGMEM = { 0, 1, 4, 6, 12, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Sechse " 05:25 05:26 05:27 05:28 05:29 17:25 17:26 17:27 17:28 17:29 
const uint8_t pattern_136[] PROGMEM = { 0, 1, 3, 8, 9, 15, 0xFF };
//Pattern: "Es is fÃ¼nf vor hoibe Drei " 02:25 02:26 02:27 02:28 02:29 14:25 14:26 14:27 14:28 14:29 
const uint8_t pattern_137[] PROGMEM = { 0, 1, 3, 8, 9, 12, 0xFF };
//Pattern: "Es is zehn vor Achte " 07:50 07:51 07:52 07:53 07:54 19:50 19:51 19:52 19:53 19:54 
const uint8_t pattern_138[] PROGMEM = { 0, 1, 4, 8, 17, 0xFF };
//Pattern: "Es is zwanzg vor Simme " 06:40 06:41 06:42 06:43 06:44 18:40 18:41 18:42 18:43 18:44 
const uint8_t pattern_139[] PROGMEM = { 0, 1, 7, 8, 16, 0xFF };
//Pattern: "Es is fÃ¼nf vor Achte " 07:55 07:56 07:57 07:58 07:59 19:55 19:56 19:57 19:58 19:59 
const uint8_t pattern_140[] PROGMEM = { 0, 1, 3, 8, 17, 0xFF };
//Pattern: "Es is punkt Oans " 01:00 01:01 01:02 01:03 01:04 13:00 13:01 13:02 13:03 13:04 
const uint8_t pattern_141[] PROGMEM = { 0, 1, 2, 10, 0xFF };
//Pattern: "Es is fÃ¼nf noch Drei " 03:05 03:06 03:07 03:08 03:09 15:05 15:06 15:07 15:08 15:09 
const uint8_t pattern_142[] PROGMEM = { 0, 1, 3, 6, 12, 0xFF };
//Pattern: "Es is hoibe Zweife " 11:30 11:31 11:32 11:33 11:34 23:30 23:31 23:32 23:33 23:34 
const uint8_t pattern_143[] PROGMEM = { 0, 1, 9, 20, 0xFF };

//Main Time Table: 
const uint8_t* const time_table[24][60] PROGMEM = {
   {pattern_41, pattern_41, pattern_41, pattern_41, pattern_41, pattern_26, pattern_26, pattern_26, pattern_26, pattern_26, pattern_22, pattern_22, pattern_22, pattern_22, pattern_22, pattern_64, pattern_64, pattern_64, pattern_64, pattern_64, pattern_51, pattern_51, pattern_51, pattern_51, pattern_51, pattern_45, pattern_45, pattern_45, pattern_45, pattern_45, pattern_34, pattern_34, pattern_34, pattern_34, pattern_34, pattern_56, pattern_56, pattern_56, pattern_56, pattern_56, pattern_111, pattern_111, pattern_111, pattern_111, pattern_111, pattern_126, pattern_126, pattern_126, pattern_126, pattern_126, pattern_97, pattern_97, pattern_97, pattern_97, pattern_97, pattern_84, pattern_84, pattern_84, pattern_84, pattern_84}, 
   {pattern_141, pattern_141, pattern_141, pattern_141, pattern_141, pattern_10, pattern_10, pattern_10, pattern_10, pattern_10, pattern_40, pattern_40, pattern_40, pattern_40, pattern_40, pattern_122, pattern_122, pattern_122, pattern_122, pattern_122, pattern_108, pattern_108, pattern_108, pattern_108, pattern_108, pattern_100, pattern_100, pattern_100, pattern_100, pattern_100, pattern_43, pattern_43, pattern_43, pattern_43, pattern_43, pattern_87, pattern_87, pattern_87, pattern_87, pattern_87, pattern_107, pattern_107, pattern_107, pattern_107, pattern_107, pattern_91, pattern_91, pattern_91, pattern_91, pattern_91, pattern_125, pattern_125, pattern_125, pattern_125, pattern_125, pattern_134, pattern_134, pattern_134, pattern_134, pattern_134}, 
   {pattern_12, pattern_12, pattern_12, pattern_12, pattern_12, pattern_9, pattern_9, pattern_9, pattern_9, pattern_9, pattern_120, pattern_120, pattern_120, pattern_120, pattern_120, pattern_119, pattern_119, pattern_119, pattern_119, pattern_119, pattern_130, pattern_130, pattern_130, pattern_130, pattern_130, pattern_137, pattern_137, pattern_137, pattern_137, pattern_137, pattern_82, pattern_82, pattern_82, pattern_82, pattern_82, pattern_76, pattern_76, pattern_76, pattern_76, pattern_76, pattern_90, pattern_90, pattern_90, pattern_90, pattern_90, pattern_36, pattern_36, pattern_36, pattern_36, pattern_36, pattern_121, pattern_121, pattern_121, pattern_121, pattern_121, pattern_73, pattern_73, pattern_73, pattern_73, pattern_73}, 
   {pattern_11, pattern_11, pattern_11, pattern_11, pattern_11, pattern_142, pattern_142, pattern_142, pattern_142, pattern_142, pattern_135, pattern_135, pattern_135, pattern_135, pattern_135, pattern_98, pattern_98, pattern_98, pattern_98, pattern_98, pattern_18, pattern_18, pattern_18, pattern_18, pattern_18, pattern_53, pattern_53, pattern_53, pattern_53, pattern_53, pattern_30, pattern_30, pattern_30, pattern_30, pattern_30, pattern_59, pattern_59, pattern_59, pattern_59, pattern_59, pattern_5, pattern_5, pattern_5, pattern_5, pattern_5, pattern_81, pattern_81, pattern_81, pattern_81, pattern_81, pattern_80, pattern_80, pattern_80, pattern_80, pattern_80, pattern_48, pattern_48, pattern_48, pattern_48, pattern_48}, 
   {pattern_116, pattern_116, pattern_116, pattern_116, pattern_116, pattern_49, pattern_49, pattern_49, pattern_49, pattern_49, pattern_61, pattern_61, pattern_61, pattern_61, pattern_61, pattern_14, pattern_14, pattern_14, pattern_14, pattern_14, pattern_93, pattern_93, pattern_93, pattern_93, pattern_93, pattern_117, pattern_117, pattern_117, pattern_117, pattern_117, pattern_105, pattern_105, pattern_105, pattern_105, pattern_105, pattern_133, pattern_133, pattern_133, pattern_133, pattern_133, pattern_42, pattern_42, pattern_42, pattern_42, pattern_42, pattern_52, pattern_52, pattern_52, pattern_52, pattern_52, pattern_15, pattern_15, pattern_15, pattern_15, pattern_15, pattern_17, pattern_17, pattern_17, pattern_17, pattern_17}, 
   {pattern_66, pattern_66, pattern_66, pattern_66, pattern_66, pattern_68, pattern_68, pattern_68, pattern_68, pattern_68, pattern_118, pattern_118, pattern_118, pattern_118, pattern_118, pattern_31, pattern_31, pattern_31, pattern_31, pattern_31, pattern_39, pattern_39, pattern_39, pattern_39, pattern_39, pattern_136, pattern_136, pattern_136, pattern_136, pattern_136, pattern_37, pattern_37, pattern_37, pattern_37, pattern_37, pattern_123, pattern_123, pattern_123, pattern_123, pattern_123, pattern_27, pattern_27, pattern_27, pattern_27, pattern_27, pattern_85, pattern_85, pattern_85, pattern_85, pattern_85, pattern_75, pattern_75, pattern_75, pattern_75, pattern_75, pattern_128, pattern_128, pattern_128, pattern_128, pattern_128}, 
   {pattern_38, pattern_38, pattern_38, pattern_38, pattern_38, pattern_131, pattern_131, pattern_131, pattern_131, pattern_131, pattern_127, pattern_127, pattern_127, pattern_127, pattern_127, pattern_20, pattern_20, pattern_20, pattern_20, pattern_20, pattern_102, pattern_102, pattern_102, pattern_102, pattern_102, pattern_13, pattern_13, pattern_13, pattern_13, pattern_13, pattern_55, pattern_55, pattern_55, pattern_55, pattern_55, pattern_47, pattern_47, pattern_47, pattern_47, pattern_47, pattern_139, pattern_139, pattern_139, pattern_139, pattern_139, pattern_132, pattern_132, pattern_132, pattern_132, pattern_132, pattern_2, pattern_2, pattern_2, pattern_2, pattern_2, pattern_23, pattern_23, pattern_23, pattern_23, pattern_23}, 
   {pattern_103, pattern_103, pattern_103, pattern_103, pattern_103, pattern_86, pattern_86, pattern_86, pattern_86, pattern_86, pattern_83, pattern_83, pattern_83, pattern_83, pattern_83, pattern_129, pattern_129, pattern_129, pattern_129, pattern_129, pattern_114, pattern_114, pattern_114, pattern_114, pattern_114, pattern_109, pattern_109, pattern_109, pattern_109, pattern_109, pattern_32, pattern_32, pattern_32, pattern_32, pattern_32, pattern_112, pattern_112, pattern_112, pattern_112, pattern_112, pattern_89, pattern_89, pattern_89, pattern_89, pattern_89, pattern_28, pattern_28, pattern_28, pattern_28, pattern_28, pattern_138, pattern_138, pattern_138, pattern_138, pattern_138, pattern_140, pattern_140, pattern_140, pattern_140, pattern_140}, 
   {pattern_94, pattern_94, pattern_94, pattern_94, pattern_94, pattern_72, pattern_72, pattern_72, pattern_72, pattern_72, pattern_113, pattern_113, pattern_113, pattern_113, pattern_113, pattern_104, pattern_104, pattern_104, pattern_104, pattern_104, pattern_115, pattern_115, pattern_115, pattern_115, pattern_115, pattern_60, pattern_60, pattern_60, pattern_60, pattern_60, pattern_99, pattern_99, pattern_99, pattern_99, pattern_99, pattern_54, pattern_54, pattern_54, pattern_54, pattern_54, pattern_110, pattern_110, pattern_110, pattern_110, pattern_110, pattern_101, pattern_101, pattern_101, pattern_101, pattern_101, pattern_46, pattern_46, pattern_46, pattern_46, pattern_46, pattern_70, pattern_70, pattern_70, pattern_70, pattern_70}, 
   {pattern_8, pattern_8, pattern_8, pattern_8, pattern_8, pattern_65, pattern_65, pattern_65, pattern_65, pattern_65, pattern_57, pattern_57, pattern_57, pattern_57, pattern_57, pattern_95, pattern_95, pattern_95, pattern_95, pattern_95, pattern_16, pattern_16, pattern_16, pattern_16, pattern_16, pattern_74, pattern_74, pattern_74, pattern_74, pattern_74, pattern_0, pattern_0, pattern_0, pattern_0, pattern_0, pattern_6, pattern_6, pattern_6, pattern_6, pattern_6, pattern_58, pattern_58, pattern_58, pattern_58, pattern_58, pattern_67, pattern_67, pattern_67, pattern_67, pattern_67, pattern_96, pattern_96, pattern_96, pattern_96, pattern_96, pattern_29, pattern_29, pattern_29, pattern_29, pattern_29}, 
   {pattern_62, pattern_62, pattern_62, pattern_62, pattern_62, pattern_106, pattern_106, pattern_106, pattern_106, pattern_106, pattern_7, pattern_7, pattern_7, pattern_7, pattern_7, pattern_1, pattern_1, pattern_1, pattern_1, pattern_1, pattern_78, pattern_78, pattern_78, pattern_78, pattern_78, pattern_88, pattern_88, pattern_88, pattern_88, pattern_88, pattern_124, pattern_124, pattern_124, pattern_124, pattern_124, pattern_24, pattern_24, pattern_24, pattern_24, pattern_24, pattern_3, pattern_3, pattern_3, pattern_3, pattern_3, pattern_69, pattern_69, pattern_69, pattern_69, pattern_69, pattern_77, pattern_77, pattern_77, pattern_77, pattern_77, pattern_33, pattern_33, pattern_33, pattern_33, pattern_33}, 
   {pattern_44, pattern_44, pattern_44, pattern_44, pattern_44, pattern_25, pattern_25, pattern_25, pattern_25, pattern_25, pattern_21, pattern_21, pattern_21, pattern_21, pattern_21, pattern_63, pattern_63, pattern_63, pattern_63, pattern_63, pattern_50, pattern_50, pattern_50, pattern_50, pattern_50, pattern_92, pattern_92, pattern_92, pattern_92, pattern_92, pattern_143, pattern_143, pattern_143, pattern_143, pattern_143, pattern_19, pattern_19, pattern_19, pattern_19, pattern_19, pattern_4, pattern_4, pattern_4, pattern_4, pattern_4, pattern_71, pattern_71, pattern_71, pattern_71, pattern_71, pattern_79, pattern_79, pattern_79, pattern_79, pattern_79, pattern_35, pattern_35, pattern_35, pattern_35, pattern_35}, 
   {pattern_41, pattern_41, pattern_41, pattern_41, pattern_41, pattern_26, pattern_26, pattern_26, pattern_26, pattern_26, pattern_22, pattern_22, pattern_22, pattern_22, pattern_22, pattern_64, pattern_64, pattern_64, pattern_64, pattern_64, pattern_51, pattern_51, pattern_51, pattern_51, pattern_51, pattern_45, pattern_45, pattern_45, pattern_45, pattern_45, pattern_34, pattern_34, pattern_34, pattern_34, pattern_34, pattern_56, pattern_56, pattern_56, pattern_56, pattern_56, pattern_111, pattern_111, pattern_111, pattern_111, pattern_111, pattern_126, pattern_126, pattern_126, pattern_126, pattern_126, pattern_97, pattern_97, pattern_97, pattern_97, pattern_97, pattern_84, pattern_84, pattern_84, pattern_84, pattern_84}, 
   {pattern_141, pattern_141, pattern_141, pattern_141, pattern_141, pattern_10, pattern_10, pattern_10, pattern_10, pattern_10, pattern_40, pattern_40, pattern_40, pattern_40, pattern_40, pattern_122, pattern_122, pattern_122, pattern_122, pattern_122, pattern_108, pattern_108, pattern_108, pattern_108, pattern_108, pattern_100, pattern_100, pattern_100, pattern_100, pattern_100, pattern_43, pattern_43, pattern_43, pattern_43, pattern_43, pattern_87, pattern_87, pattern_87, pattern_87, pattern_87, pattern_107, pattern_107, pattern_107, pattern_107, pattern_107, pattern_91, pattern_91, pattern_91, pattern_91, pattern_91, pattern_125, pattern_125, pattern_125, pattern_125, pattern_125, pattern_134, pattern_134, pattern_134, pattern_134, pattern_134}, 
   {pattern_12, pattern_12, pattern_12, pattern_12, pattern_12, pattern_9, pattern_9, pattern_9, pattern_9, pattern_9, pattern_120, pattern_120, pattern_120, pattern_120, pattern_120, pattern_119, pattern_119, pattern_119, pattern_119, pattern_119, pattern_130, pattern_130, pattern_130, pattern_130, pattern_130, pattern_137, pattern_137, pattern_137, pattern_137, pattern_137, pattern_82, pattern_82, pattern_82, pattern_82, pattern_82, pattern_76, pattern_76, pattern_76, pattern_76, pattern_76, pattern_90, pattern_90, pattern_90, pattern_90, pattern_90, pattern_36, pattern_36, pattern_36, pattern_36, pattern_36, pattern_121, pattern_121, pattern_121, pattern_121, pattern_121, pattern_73, pattern_73, pattern_73, pattern_73, pattern_73}, 
   {pattern_11, pattern_11, pattern_11, pattern_11, pattern_11, pattern_142, pattern_142, pattern_142, pattern_142, pattern_142, pattern_135, pattern_135, pattern_135, pattern_135, pattern_135, pattern_98, pattern_98, pattern_98, pattern_98, pattern_98, pattern_18, pattern_18, pattern_18, pattern_18, pattern_18, pattern_53, pattern_53, pattern_53, pattern_53, pattern_53, pattern_30, pattern_30, pattern_30, pattern_30, pattern_30, pattern_59, pattern_59, pattern_59, pattern_59, pattern_59, pattern_5, pattern_5, pattern_5, pattern_5, pattern_5, pattern_81, pattern_81, pattern_81, pattern_81, pattern_81, pattern_80, pattern_80, pattern_80, pattern_80, pattern_80, pattern_48, pattern_48, pattern_48, pattern_48, pattern_48}, 
   {pattern_116, pattern_116, pattern_116, pattern_116, pattern_116, pattern_49, pattern_49, pattern_49, pattern_49, pattern_49, pattern_61, pattern_61, pattern_61, pattern_61, pattern_61, pattern_14, pattern_14, pattern_14, pattern_14, pattern_14, pattern_93, pattern_93, pattern_93, pattern_93, pattern_93, pattern_117, pattern_117, pattern_117, pattern_117, pattern_117, pattern_105, pattern_105, pattern_105, pattern_105, pattern_105, pattern_133, pattern_133, pattern_133, pattern_133, pattern_133, pattern_42, pattern_42, pattern_42, pattern_42, pattern_42, pattern_52, pattern_52, pattern_52, pattern_52, pattern_52, pattern_15, pattern_15, pattern_15, pattern_15, pattern_15, pattern_17, pattern_17, pattern_17, pattern_17, pattern_17}, 
   {pattern_66, pattern_66, pattern_66, pattern_66, pattern_66, pattern_68, pattern_68, pattern_68, pattern_68, pattern_68, pattern_118, pattern_118, pattern_118, pattern_118, pattern_118, pattern_31, pattern_31, pattern_31, pattern_31, pattern_31, pattern_39, pattern_39, pattern_39, pattern_39, pattern_39, pattern_136, pattern_136, pattern_136, pattern_136, pattern_136, pattern_37, pattern_37, pattern_37, pattern_37, pattern_37, pattern_123, pattern_123, pattern_123, pattern_123, pattern_123, pattern_27, pattern_27, pattern_27, pattern_27, pattern_27, pattern_85, pattern_85, pattern_85, pattern_85, pattern_85, pattern_75, pattern_75, pattern_75, pattern_75, pattern_75, pattern_128, pattern_128, pattern_128, pattern_128, pattern_128}, 
   {pattern_38, pattern_38, pattern_38, pattern_38, pattern_38, pattern_131, pattern_131, pattern_131, pattern_131, pattern_131, pattern_127, pattern_127, pattern_127, pattern_127, pattern_127, pattern_20, pattern_20, pattern_20, pattern_20, pattern_20, pattern_102, pattern_102, pattern_102, pattern_102, pattern_102, pattern_13, pattern_13, pattern_13, pattern_13, pattern_13, pattern_55, pattern_55, pattern_55, pattern_55, pattern_55, pattern_47, pattern_47, pattern_47, pattern_47, pattern_47, pattern_139, pattern_139, pattern_139, pattern_139, pattern_139, pattern_132, pattern_132, pattern_132, pattern_132, pattern_132, pattern_2, pattern_2, pattern_2, pattern_2, pattern_2, pattern_23, pattern_23, pattern_23, pattern_23, pattern_23}, 
   {pattern_103, pattern_103, pattern_103, pattern_103, pattern_103, pattern_86, pattern_86, pattern_86, pattern_86, pattern_86, pattern_83, pattern_83, pattern_83, pattern_83, pattern_83, pattern_129, pattern_129, pattern_129, pattern_129, pattern_129, pattern_114, pattern_114, pattern_114, pattern_114, pattern_114, pattern_109, pattern_109, pattern_109, pattern_109, pattern_109, pattern_32, pattern_32, pattern_32, pattern_32, pattern_32, pattern_112, pattern_112, pattern_112, pattern_112, pattern_112, pattern_89, pattern_89, pattern_89, pattern_89, pattern_89, pattern_28, pattern_28, pattern_28, pattern_28, pattern_28, pattern_138, pattern_138, pattern_138, pattern_138, pattern_138, pattern_140, pattern_140, pattern_140, pattern_140, pattern_140}, 
   {pattern_94, pattern_94, pattern_94, pattern_94, pattern_94, pattern_72, pattern_72, pattern_72, pattern_72, pattern_72, pattern_113, pattern_113, pattern_113, pattern_113, pattern_113, pattern_104, pattern_104, pattern_104, pattern_104, pattern_104, pattern_115, pattern_115, pattern_115, pattern_115, pattern_115, pattern_60, pattern_60, pattern_60, pattern_60, pattern_60, pattern_99, pattern_99, pattern_99, pattern_99, pattern_99, pattern_54, pattern_54, pattern_54, pattern_54, pattern_54, pattern_110, pattern_110, pattern_110, pattern_110, pattern_110, pattern_101, pattern_101, pattern_101, pattern_101, pattern_101, pattern_46, pattern_46, pattern_46, pattern_46, pattern_46, pattern_70, pattern_70, pattern_70, pattern_70, pattern_70}, 
   {pattern_8, pattern_8, pattern_8, pattern_8, pattern_8, pattern_65, pattern_65, pattern_65, pattern_65, pattern_65, pattern_57, pattern_57, pattern_57, pattern_57, pattern_57, pattern_95, pattern_95, pattern_95, pattern_95, pattern_95, pattern_16, pattern_16, pattern_16, pattern_16, pattern_16, pattern_74, pattern_74, pattern_74, pattern_74, pattern_74, pattern_0, pattern_0, pattern_0, pattern_0, pattern_0, pattern_6, pattern_6, pattern_6, pattern_6, pattern_6, pattern_58, pattern_58, pattern_58, pattern_58, pattern_58, pattern_67, pattern_67, pattern_67, pattern_67, pattern_67, pattern_96, pattern_96, pattern_96, pattern_96, pattern_96, pattern_29, pattern_29, pattern_29, pattern_29, pattern_29}, 
   {pattern_62, pattern_62, pattern_62, pattern_62, pattern_62, pattern_106, pattern_106, pattern_106, pattern_106, pattern_106, pattern_7, pattern_7, pattern_7, pattern_7, pattern_7, pattern_1, pattern_1, pattern_1, pattern_1, pattern_1, pattern_78, pattern_78, pattern_78, pattern_78, pattern_78, pattern_88, pattern_88, pattern_88, pattern_88, pattern_88, pattern_124, pattern_124, pattern_124, pattern_124, pattern_124, pattern_24, pattern_24, pattern_24, pattern_24, pattern_24, pattern_3, pattern_3, pattern_3, pattern_3, pattern_3, pattern_69, pattern_69, pattern_69, pattern_69, pattern_69, pattern_77, pattern_77, pattern_77, pattern_77, pattern_77, pattern_33, pattern_33, pattern_33, pattern_33, pattern_33}, 
   {pattern_44, pattern_44, pattern_44, pattern_44, pattern_44, pattern_25, pattern_25, pattern_25, pattern_25, pattern_25, pattern_21, pattern_21, pattern_21, pattern_21, pattern_21, pattern_63, pattern_63, pattern_63, pattern_63, pattern_63, pattern_50, pattern_50, pattern_50, pattern_50, pattern_50, pattern_92, pattern_92, pattern_92, pattern_92, pattern_92, pattern_143, pattern_143, pattern_143, pattern_143, pattern_143, pattern_19, pattern_19, pattern_19, pattern_19, pattern_19, pattern_4, pattern_4, pattern_4, pattern_4, pattern_4, pattern_71, pattern_71, pattern_71, pattern_71, pattern_71, pattern_79, pattern_79, pattern_79, pattern_79, pattern_79, pattern_35, pattern_35, pattern_35, pattern_35, pattern_35}
};

