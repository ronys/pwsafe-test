/*
* Copyright (c) 2003-2011 Rony Shapiro <ronys@users.sourceforge.net>.
* All rights reserved. Use of the code is allowed under the
* Artistic License 2.0 terms, as specified in the LICENSE file
* distributed with this code, or available from
* http://www.opensource.org/licenses/artistic-license-2.0.php
*/

/*
 * unicode2keysym - Contains a map between UNICODE wchar_t values and X keysyms
 *
 * This file is auto-generated using Misc/unicode2keysym.pl.  Do not edit by hand!!
 *
 */

#include <map>
#include <X11/Intrinsic.h>
#include "./unicode2keysym.h"

typedef std::map<wchar_t, KeySym> keymap_t;

static keymap_t GetKeyMap()
{
  keymap_t keymap;
  keymap.insert(std::make_pair(0x0104, 0x01a1));
  keymap.insert(std::make_pair(0x02D8, 0x01a2));
  keymap.insert(std::make_pair(0x0141, 0x01a3));
  keymap.insert(std::make_pair(0x013D, 0x01a5));
  keymap.insert(std::make_pair(0x015A, 0x01a6));
  keymap.insert(std::make_pair(0x0160, 0x01a9));
  keymap.insert(std::make_pair(0x015E, 0x01aa));
  keymap.insert(std::make_pair(0x0164, 0x01ab));
  keymap.insert(std::make_pair(0x0179, 0x01ac));
  keymap.insert(std::make_pair(0x017D, 0x01ae));
  keymap.insert(std::make_pair(0x017B, 0x01af));
  keymap.insert(std::make_pair(0x0105, 0x01b1));
  keymap.insert(std::make_pair(0x02DB, 0x01b2));
  keymap.insert(std::make_pair(0x0142, 0x01b3));
  keymap.insert(std::make_pair(0x013E, 0x01b5));
  keymap.insert(std::make_pair(0x015B, 0x01b6));
  keymap.insert(std::make_pair(0x02C7, 0x01b7));
  keymap.insert(std::make_pair(0x0161, 0x01b9));
  keymap.insert(std::make_pair(0x015F, 0x01ba));
  keymap.insert(std::make_pair(0x0165, 0x01bb));
  keymap.insert(std::make_pair(0x017A, 0x01bc));
  keymap.insert(std::make_pair(0x02DD, 0x01bd));
  keymap.insert(std::make_pair(0x017E, 0x01be));
  keymap.insert(std::make_pair(0x017C, 0x01bf));
  keymap.insert(std::make_pair(0x0154, 0x01c0));
  keymap.insert(std::make_pair(0x0102, 0x01c3));
  keymap.insert(std::make_pair(0x0139, 0x01c5));
  keymap.insert(std::make_pair(0x0106, 0x01c6));
  keymap.insert(std::make_pair(0x010C, 0x01c8));
  keymap.insert(std::make_pair(0x0118, 0x01ca));
  keymap.insert(std::make_pair(0x011A, 0x01cc));
  keymap.insert(std::make_pair(0x010E, 0x01cf));
  keymap.insert(std::make_pair(0x0110, 0x01d0));
  keymap.insert(std::make_pair(0x0143, 0x01d1));
  keymap.insert(std::make_pair(0x0147, 0x01d2));
  keymap.insert(std::make_pair(0x0150, 0x01d5));
  keymap.insert(std::make_pair(0x0158, 0x01d8));
  keymap.insert(std::make_pair(0x016E, 0x01d9));
  keymap.insert(std::make_pair(0x0170, 0x01db));
  keymap.insert(std::make_pair(0x0162, 0x01de));
  keymap.insert(std::make_pair(0x0155, 0x01e0));
  keymap.insert(std::make_pair(0x0103, 0x01e3));
  keymap.insert(std::make_pair(0x013A, 0x01e5));
  keymap.insert(std::make_pair(0x0107, 0x01e6));
  keymap.insert(std::make_pair(0x010D, 0x01e8));
  keymap.insert(std::make_pair(0x0119, 0x01ea));
  keymap.insert(std::make_pair(0x011B, 0x01ec));
  keymap.insert(std::make_pair(0x010F, 0x01ef));
  keymap.insert(std::make_pair(0x0111, 0x01f0));
  keymap.insert(std::make_pair(0x0144, 0x01f1));
  keymap.insert(std::make_pair(0x0148, 0x01f2));
  keymap.insert(std::make_pair(0x0151, 0x01f5));
  keymap.insert(std::make_pair(0x0171, 0x01fb));
  keymap.insert(std::make_pair(0x0159, 0x01f8));
  keymap.insert(std::make_pair(0x016F, 0x01f9));
  keymap.insert(std::make_pair(0x0163, 0x01fe));
  keymap.insert(std::make_pair(0x02D9, 0x01ff));
  keymap.insert(std::make_pair(0x0126, 0x02a1));
  keymap.insert(std::make_pair(0x0124, 0x02a6));
  keymap.insert(std::make_pair(0x0130, 0x02a9));
  keymap.insert(std::make_pair(0x011E, 0x02ab));
  keymap.insert(std::make_pair(0x0134, 0x02ac));
  keymap.insert(std::make_pair(0x0127, 0x02b1));
  keymap.insert(std::make_pair(0x0125, 0x02b6));
  keymap.insert(std::make_pair(0x0131, 0x02b9));
  keymap.insert(std::make_pair(0x011F, 0x02bb));
  keymap.insert(std::make_pair(0x0135, 0x02bc));
  keymap.insert(std::make_pair(0x010A, 0x02c5));
  keymap.insert(std::make_pair(0x0108, 0x02c6));
  keymap.insert(std::make_pair(0x0120, 0x02d5));
  keymap.insert(std::make_pair(0x011C, 0x02d8));
  keymap.insert(std::make_pair(0x016C, 0x02dd));
  keymap.insert(std::make_pair(0x015C, 0x02de));
  keymap.insert(std::make_pair(0x010B, 0x02e5));
  keymap.insert(std::make_pair(0x0109, 0x02e6));
  keymap.insert(std::make_pair(0x0121, 0x02f5));
  keymap.insert(std::make_pair(0x011D, 0x02f8));
  keymap.insert(std::make_pair(0x016D, 0x02fd));
  keymap.insert(std::make_pair(0x015D, 0x02fe));
  keymap.insert(std::make_pair(0x0138, 0x03a2));
  keymap.insert(std::make_pair(0x0156, 0x03a3));
  keymap.insert(std::make_pair(0x0128, 0x03a5));
  keymap.insert(std::make_pair(0x013B, 0x03a6));
  keymap.insert(std::make_pair(0x0112, 0x03aa));
  keymap.insert(std::make_pair(0x0122, 0x03ab));
  keymap.insert(std::make_pair(0x0166, 0x03ac));
  keymap.insert(std::make_pair(0x0157, 0x03b3));
  keymap.insert(std::make_pair(0x0129, 0x03b5));
  keymap.insert(std::make_pair(0x013C, 0x03b6));
  keymap.insert(std::make_pair(0x0113, 0x03ba));
  keymap.insert(std::make_pair(0x0123, 0x03bb));
  keymap.insert(std::make_pair(0x0167, 0x03bc));
  keymap.insert(std::make_pair(0x014A, 0x03bd));
  keymap.insert(std::make_pair(0x014B, 0x03bf));
  keymap.insert(std::make_pair(0x0100, 0x03c0));
  keymap.insert(std::make_pair(0x012E, 0x03c7));
  keymap.insert(std::make_pair(0x0116, 0x03cc));
  keymap.insert(std::make_pair(0x012A, 0x03cf));
  keymap.insert(std::make_pair(0x0145, 0x03d1));
  keymap.insert(std::make_pair(0x014C, 0x03d2));
  keymap.insert(std::make_pair(0x0136, 0x03d3));
  keymap.insert(std::make_pair(0x0172, 0x03d9));
  keymap.insert(std::make_pair(0x0168, 0x03dd));
  keymap.insert(std::make_pair(0x016A, 0x03de));
  keymap.insert(std::make_pair(0x0101, 0x03e0));
  keymap.insert(std::make_pair(0x012F, 0x03e7));
  keymap.insert(std::make_pair(0x0117, 0x03ec));
  keymap.insert(std::make_pair(0x012B, 0x03ef));
  keymap.insert(std::make_pair(0x0146, 0x03f1));
  keymap.insert(std::make_pair(0x014D, 0x03f2));
  keymap.insert(std::make_pair(0x0137, 0x03f3));
  keymap.insert(std::make_pair(0x0173, 0x03f9));
  keymap.insert(std::make_pair(0x0169, 0x03fd));
  keymap.insert(std::make_pair(0x016B, 0x03fe));
  keymap.insert(std::make_pair(0x0152, 0x13bc));
  keymap.insert(std::make_pair(0x0153, 0x13bd));
  keymap.insert(std::make_pair(0x0178, 0x13be));
  keymap.insert(std::make_pair(0x203E, 0x047e));
  keymap.insert(std::make_pair(0x3002, 0x04a1));
  keymap.insert(std::make_pair(0x300C, 0x04a2));
  keymap.insert(std::make_pair(0x300D, 0x04a3));
  keymap.insert(std::make_pair(0x3001, 0x04a4));
  keymap.insert(std::make_pair(0x30FB, 0x04a5));
  keymap.insert(std::make_pair(0x30F2, 0x04a6));
  keymap.insert(std::make_pair(0x30A1, 0x04a7));
  keymap.insert(std::make_pair(0x30A3, 0x04a8));
  keymap.insert(std::make_pair(0x30A5, 0x04a9));
  keymap.insert(std::make_pair(0x30A7, 0x04aa));
  keymap.insert(std::make_pair(0x30A9, 0x04ab));
  keymap.insert(std::make_pair(0x30E3, 0x04ac));
  keymap.insert(std::make_pair(0x30E5, 0x04ad));
  keymap.insert(std::make_pair(0x30E7, 0x04ae));
  keymap.insert(std::make_pair(0x30C3, 0x04af));
  keymap.insert(std::make_pair(0x30FC, 0x04b0));
  keymap.insert(std::make_pair(0x30A2, 0x04b1));
  keymap.insert(std::make_pair(0x30A4, 0x04b2));
  keymap.insert(std::make_pair(0x30A6, 0x04b3));
  keymap.insert(std::make_pair(0x30A8, 0x04b4));
  keymap.insert(std::make_pair(0x30AA, 0x04b5));
  keymap.insert(std::make_pair(0x30AB, 0x04b6));
  keymap.insert(std::make_pair(0x30AD, 0x04b7));
  keymap.insert(std::make_pair(0x30AF, 0x04b8));
  keymap.insert(std::make_pair(0x30B1, 0x04b9));
  keymap.insert(std::make_pair(0x30B3, 0x04ba));
  keymap.insert(std::make_pair(0x30B5, 0x04bb));
  keymap.insert(std::make_pair(0x30B7, 0x04bc));
  keymap.insert(std::make_pair(0x30B9, 0x04bd));
  keymap.insert(std::make_pair(0x30BB, 0x04be));
  keymap.insert(std::make_pair(0x30BD, 0x04bf));
  keymap.insert(std::make_pair(0x30BF, 0x04c0));
  keymap.insert(std::make_pair(0x30C1, 0x04c1));
  keymap.insert(std::make_pair(0x30C4, 0x04c2));
  keymap.insert(std::make_pair(0x30C6, 0x04c3));
  keymap.insert(std::make_pair(0x30C8, 0x04c4));
  keymap.insert(std::make_pair(0x30CA, 0x04c5));
  keymap.insert(std::make_pair(0x30CB, 0x04c6));
  keymap.insert(std::make_pair(0x30CC, 0x04c7));
  keymap.insert(std::make_pair(0x30CD, 0x04c8));
  keymap.insert(std::make_pair(0x30CE, 0x04c9));
  keymap.insert(std::make_pair(0x30CF, 0x04ca));
  keymap.insert(std::make_pair(0x30D2, 0x04cb));
  keymap.insert(std::make_pair(0x30D5, 0x04cc));
  keymap.insert(std::make_pair(0x30D8, 0x04cd));
  keymap.insert(std::make_pair(0x30DB, 0x04ce));
  keymap.insert(std::make_pair(0x30DE, 0x04cf));
  keymap.insert(std::make_pair(0x30DF, 0x04d0));
  keymap.insert(std::make_pair(0x30E0, 0x04d1));
  keymap.insert(std::make_pair(0x30E1, 0x04d2));
  keymap.insert(std::make_pair(0x30E2, 0x04d3));
  keymap.insert(std::make_pair(0x30E4, 0x04d4));
  keymap.insert(std::make_pair(0x30E6, 0x04d5));
  keymap.insert(std::make_pair(0x30E8, 0x04d6));
  keymap.insert(std::make_pair(0x30E9, 0x04d7));
  keymap.insert(std::make_pair(0x30EA, 0x04d8));
  keymap.insert(std::make_pair(0x30EB, 0x04d9));
  keymap.insert(std::make_pair(0x30EC, 0x04da));
  keymap.insert(std::make_pair(0x30ED, 0x04db));
  keymap.insert(std::make_pair(0x30EF, 0x04dc));
  keymap.insert(std::make_pair(0x30F3, 0x04dd));
  keymap.insert(std::make_pair(0x309B, 0x04de));
  keymap.insert(std::make_pair(0x309C, 0x04df));
  keymap.insert(std::make_pair(0x060C, 0x05ac));
  keymap.insert(std::make_pair(0x061B, 0x05bb));
  keymap.insert(std::make_pair(0x061F, 0x05bf));
  keymap.insert(std::make_pair(0x0621, 0x05c1));
  keymap.insert(std::make_pair(0x0622, 0x05c2));
  keymap.insert(std::make_pair(0x0623, 0x05c3));
  keymap.insert(std::make_pair(0x0624, 0x05c4));
  keymap.insert(std::make_pair(0x0625, 0x05c5));
  keymap.insert(std::make_pair(0x0626, 0x05c6));
  keymap.insert(std::make_pair(0x0627, 0x05c7));
  keymap.insert(std::make_pair(0x0628, 0x05c8));
  keymap.insert(std::make_pair(0x0629, 0x05c9));
  keymap.insert(std::make_pair(0x062A, 0x05ca));
  keymap.insert(std::make_pair(0x062B, 0x05cb));
  keymap.insert(std::make_pair(0x062C, 0x05cc));
  keymap.insert(std::make_pair(0x062D, 0x05cd));
  keymap.insert(std::make_pair(0x062E, 0x05ce));
  keymap.insert(std::make_pair(0x062F, 0x05cf));
  keymap.insert(std::make_pair(0x0630, 0x05d0));
  keymap.insert(std::make_pair(0x0631, 0x05d1));
  keymap.insert(std::make_pair(0x0632, 0x05d2));
  keymap.insert(std::make_pair(0x0633, 0x05d3));
  keymap.insert(std::make_pair(0x0634, 0x05d4));
  keymap.insert(std::make_pair(0x0635, 0x05d5));
  keymap.insert(std::make_pair(0x0636, 0x05d6));
  keymap.insert(std::make_pair(0x0637, 0x05d7));
  keymap.insert(std::make_pair(0x0638, 0x05d8));
  keymap.insert(std::make_pair(0x0639, 0x05d9));
  keymap.insert(std::make_pair(0x063A, 0x05da));
  keymap.insert(std::make_pair(0x0640, 0x05e0));
  keymap.insert(std::make_pair(0x0641, 0x05e1));
  keymap.insert(std::make_pair(0x0642, 0x05e2));
  keymap.insert(std::make_pair(0x0643, 0x05e3));
  keymap.insert(std::make_pair(0x0644, 0x05e4));
  keymap.insert(std::make_pair(0x0645, 0x05e5));
  keymap.insert(std::make_pair(0x0646, 0x05e6));
  keymap.insert(std::make_pair(0x0647, 0x05e7));
  keymap.insert(std::make_pair(0x0648, 0x05e8));
  keymap.insert(std::make_pair(0x0649, 0x05e9));
  keymap.insert(std::make_pair(0x064A, 0x05ea));
  keymap.insert(std::make_pair(0x064B, 0x05eb));
  keymap.insert(std::make_pair(0x064C, 0x05ec));
  keymap.insert(std::make_pair(0x064D, 0x05ed));
  keymap.insert(std::make_pair(0x064E, 0x05ee));
  keymap.insert(std::make_pair(0x064F, 0x05ef));
  keymap.insert(std::make_pair(0x0650, 0x05f0));
  keymap.insert(std::make_pair(0x0651, 0x05f1));
  keymap.insert(std::make_pair(0x0652, 0x05f2));
  keymap.insert(std::make_pair(0x0452, 0x06a1));
  keymap.insert(std::make_pair(0x0453, 0x06a2));
  keymap.insert(std::make_pair(0x0451, 0x06a3));
  keymap.insert(std::make_pair(0x0454, 0x06a4));
  keymap.insert(std::make_pair(0x0455, 0x06a5));
  keymap.insert(std::make_pair(0x0456, 0x06a6));
  keymap.insert(std::make_pair(0x0457, 0x06a7));
  keymap.insert(std::make_pair(0x0458, 0x06a8));
  keymap.insert(std::make_pair(0x0459, 0x06a9));
  keymap.insert(std::make_pair(0x045A, 0x06aa));
  keymap.insert(std::make_pair(0x045B, 0x06ab));
  keymap.insert(std::make_pair(0x045C, 0x06ac));
  keymap.insert(std::make_pair(0x0491, 0x06ad));
  keymap.insert(std::make_pair(0x045E, 0x06ae));
  keymap.insert(std::make_pair(0x045F, 0x06af));
  keymap.insert(std::make_pair(0x2116, 0x06b0));
  keymap.insert(std::make_pair(0x0402, 0x06b1));
  keymap.insert(std::make_pair(0x0403, 0x06b2));
  keymap.insert(std::make_pair(0x0401, 0x06b3));
  keymap.insert(std::make_pair(0x0404, 0x06b4));
  keymap.insert(std::make_pair(0x0405, 0x06b5));
  keymap.insert(std::make_pair(0x0406, 0x06b6));
  keymap.insert(std::make_pair(0x0407, 0x06b7));
  keymap.insert(std::make_pair(0x0408, 0x06b8));
  keymap.insert(std::make_pair(0x0409, 0x06b9));
  keymap.insert(std::make_pair(0x040A, 0x06ba));
  keymap.insert(std::make_pair(0x040B, 0x06bb));
  keymap.insert(std::make_pair(0x040C, 0x06bc));
  keymap.insert(std::make_pair(0x0490, 0x06bd));
  keymap.insert(std::make_pair(0x040E, 0x06be));
  keymap.insert(std::make_pair(0x040F, 0x06bf));
  keymap.insert(std::make_pair(0x044E, 0x06c0));
  keymap.insert(std::make_pair(0x0430, 0x06c1));
  keymap.insert(std::make_pair(0x0431, 0x06c2));
  keymap.insert(std::make_pair(0x0446, 0x06c3));
  keymap.insert(std::make_pair(0x0434, 0x06c4));
  keymap.insert(std::make_pair(0x0435, 0x06c5));
  keymap.insert(std::make_pair(0x0444, 0x06c6));
  keymap.insert(std::make_pair(0x0433, 0x06c7));
  keymap.insert(std::make_pair(0x0445, 0x06c8));
  keymap.insert(std::make_pair(0x0438, 0x06c9));
  keymap.insert(std::make_pair(0x0439, 0x06ca));
  keymap.insert(std::make_pair(0x043A, 0x06cb));
  keymap.insert(std::make_pair(0x043B, 0x06cc));
  keymap.insert(std::make_pair(0x043C, 0x06cd));
  keymap.insert(std::make_pair(0x043D, 0x06ce));
  keymap.insert(std::make_pair(0x043E, 0x06cf));
  keymap.insert(std::make_pair(0x043F, 0x06d0));
  keymap.insert(std::make_pair(0x044F, 0x06d1));
  keymap.insert(std::make_pair(0x0440, 0x06d2));
  keymap.insert(std::make_pair(0x0441, 0x06d3));
  keymap.insert(std::make_pair(0x0442, 0x06d4));
  keymap.insert(std::make_pair(0x0443, 0x06d5));
  keymap.insert(std::make_pair(0x0436, 0x06d6));
  keymap.insert(std::make_pair(0x0432, 0x06d7));
  keymap.insert(std::make_pair(0x044C, 0x06d8));
  keymap.insert(std::make_pair(0x044B, 0x06d9));
  keymap.insert(std::make_pair(0x0437, 0x06da));
  keymap.insert(std::make_pair(0x0448, 0x06db));
  keymap.insert(std::make_pair(0x044D, 0x06dc));
  keymap.insert(std::make_pair(0x0449, 0x06dd));
  keymap.insert(std::make_pair(0x0447, 0x06de));
  keymap.insert(std::make_pair(0x044A, 0x06df));
  keymap.insert(std::make_pair(0x042E, 0x06e0));
  keymap.insert(std::make_pair(0x0410, 0x06e1));
  keymap.insert(std::make_pair(0x0411, 0x06e2));
  keymap.insert(std::make_pair(0x0426, 0x06e3));
  keymap.insert(std::make_pair(0x0414, 0x06e4));
  keymap.insert(std::make_pair(0x0415, 0x06e5));
  keymap.insert(std::make_pair(0x0424, 0x06e6));
  keymap.insert(std::make_pair(0x0413, 0x06e7));
  keymap.insert(std::make_pair(0x0425, 0x06e8));
  keymap.insert(std::make_pair(0x0418, 0x06e9));
  keymap.insert(std::make_pair(0x0419, 0x06ea));
  keymap.insert(std::make_pair(0x041A, 0x06eb));
  keymap.insert(std::make_pair(0x041B, 0x06ec));
  keymap.insert(std::make_pair(0x041C, 0x06ed));
  keymap.insert(std::make_pair(0x041D, 0x06ee));
  keymap.insert(std::make_pair(0x041E, 0x06ef));
  keymap.insert(std::make_pair(0x041F, 0x06f0));
  keymap.insert(std::make_pair(0x042F, 0x06f1));
  keymap.insert(std::make_pair(0x0420, 0x06f2));
  keymap.insert(std::make_pair(0x0421, 0x06f3));
  keymap.insert(std::make_pair(0x0422, 0x06f4));
  keymap.insert(std::make_pair(0x0423, 0x06f5));
  keymap.insert(std::make_pair(0x0416, 0x06f6));
  keymap.insert(std::make_pair(0x0412, 0x06f7));
  keymap.insert(std::make_pair(0x042C, 0x06f8));
  keymap.insert(std::make_pair(0x042B, 0x06f9));
  keymap.insert(std::make_pair(0x0417, 0x06fa));
  keymap.insert(std::make_pair(0x0428, 0x06fb));
  keymap.insert(std::make_pair(0x042D, 0x06fc));
  keymap.insert(std::make_pair(0x0429, 0x06fd));
  keymap.insert(std::make_pair(0x0427, 0x06fe));
  keymap.insert(std::make_pair(0x042A, 0x06ff));
  keymap.insert(std::make_pair(0x0386, 0x07a1));
  keymap.insert(std::make_pair(0x0388, 0x07a2));
  keymap.insert(std::make_pair(0x0389, 0x07a3));
  keymap.insert(std::make_pair(0x038A, 0x07a4));
  keymap.insert(std::make_pair(0x03AA, 0x07a5));
  keymap.insert(std::make_pair(0x038C, 0x07a7));
  keymap.insert(std::make_pair(0x038E, 0x07a8));
  keymap.insert(std::make_pair(0x03AB, 0x07a9));
  keymap.insert(std::make_pair(0x038F, 0x07ab));
  keymap.insert(std::make_pair(0x0385, 0x07ae));
  keymap.insert(std::make_pair(0x2015, 0x07af));
  keymap.insert(std::make_pair(0x03AC, 0x07b1));
  keymap.insert(std::make_pair(0x03AD, 0x07b2));
  keymap.insert(std::make_pair(0x03AE, 0x07b3));
  keymap.insert(std::make_pair(0x03AF, 0x07b4));
  keymap.insert(std::make_pair(0x03CA, 0x07b5));
  keymap.insert(std::make_pair(0x0390, 0x07b6));
  keymap.insert(std::make_pair(0x03CC, 0x07b7));
  keymap.insert(std::make_pair(0x03CD, 0x07b8));
  keymap.insert(std::make_pair(0x03CB, 0x07b9));
  keymap.insert(std::make_pair(0x03B0, 0x07ba));
  keymap.insert(std::make_pair(0x03CE, 0x07bb));
  keymap.insert(std::make_pair(0x0391, 0x07c1));
  keymap.insert(std::make_pair(0x0392, 0x07c2));
  keymap.insert(std::make_pair(0x0393, 0x07c3));
  keymap.insert(std::make_pair(0x0394, 0x07c4));
  keymap.insert(std::make_pair(0x0395, 0x07c5));
  keymap.insert(std::make_pair(0x0396, 0x07c6));
  keymap.insert(std::make_pair(0x0397, 0x07c7));
  keymap.insert(std::make_pair(0x0398, 0x07c8));
  keymap.insert(std::make_pair(0x0399, 0x07c9));
  keymap.insert(std::make_pair(0x039A, 0x07ca));
  keymap.insert(std::make_pair(0x039B, 0x07cb));
  keymap.insert(std::make_pair(0x039B, 0x07cb));
  keymap.insert(std::make_pair(0x039C, 0x07cc));
  keymap.insert(std::make_pair(0x039D, 0x07cd));
  keymap.insert(std::make_pair(0x039E, 0x07ce));
  keymap.insert(std::make_pair(0x039F, 0x07cf));
  keymap.insert(std::make_pair(0x03A0, 0x07d0));
  keymap.insert(std::make_pair(0x03A1, 0x07d1));
  keymap.insert(std::make_pair(0x03A3, 0x07d2));
  keymap.insert(std::make_pair(0x03A4, 0x07d4));
  keymap.insert(std::make_pair(0x03A5, 0x07d5));
  keymap.insert(std::make_pair(0x03A6, 0x07d6));
  keymap.insert(std::make_pair(0x03A7, 0x07d7));
  keymap.insert(std::make_pair(0x03A8, 0x07d8));
  keymap.insert(std::make_pair(0x03A9, 0x07d9));
  keymap.insert(std::make_pair(0x03B1, 0x07e1));
  keymap.insert(std::make_pair(0x03B2, 0x07e2));
  keymap.insert(std::make_pair(0x03B3, 0x07e3));
  keymap.insert(std::make_pair(0x03B4, 0x07e4));
  keymap.insert(std::make_pair(0x03B5, 0x07e5));
  keymap.insert(std::make_pair(0x03B6, 0x07e6));
  keymap.insert(std::make_pair(0x03B7, 0x07e7));
  keymap.insert(std::make_pair(0x03B8, 0x07e8));
  keymap.insert(std::make_pair(0x03B9, 0x07e9));
  keymap.insert(std::make_pair(0x03BA, 0x07ea));
  keymap.insert(std::make_pair(0x03BB, 0x07eb));
  keymap.insert(std::make_pair(0x03BB, 0x07eb));
  keymap.insert(std::make_pair(0x03BC, 0x07ec));
  keymap.insert(std::make_pair(0x03BD, 0x07ed));
  keymap.insert(std::make_pair(0x03BE, 0x07ee));
  keymap.insert(std::make_pair(0x03BF, 0x07ef));
  keymap.insert(std::make_pair(0x03C0, 0x07f0));
  keymap.insert(std::make_pair(0x03C1, 0x07f1));
  keymap.insert(std::make_pair(0x03C3, 0x07f2));
  keymap.insert(std::make_pair(0x03C2, 0x07f3));
  keymap.insert(std::make_pair(0x03C4, 0x07f4));
  keymap.insert(std::make_pair(0x03C5, 0x07f5));
  keymap.insert(std::make_pair(0x03C6, 0x07f6));
  keymap.insert(std::make_pair(0x03C7, 0x07f7));
  keymap.insert(std::make_pair(0x03C8, 0x07f8));
  keymap.insert(std::make_pair(0x03C9, 0x07f9));
  keymap.insert(std::make_pair(0x23B7, 0x08a1));
  keymap.insert(std::make_pair(0x250C, 0x08a2));
  keymap.insert(std::make_pair(0x2500, 0x08a3));
  keymap.insert(std::make_pair(0x2320, 0x08a4));
  keymap.insert(std::make_pair(0x2321, 0x08a5));
  keymap.insert(std::make_pair(0x2502, 0x08a6));
  keymap.insert(std::make_pair(0x23A1, 0x08a7));
  keymap.insert(std::make_pair(0x23A3, 0x08a8));
  keymap.insert(std::make_pair(0x23A4, 0x08a9));
  keymap.insert(std::make_pair(0x23A6, 0x08aa));
  keymap.insert(std::make_pair(0x239B, 0x08ab));
  keymap.insert(std::make_pair(0x239D, 0x08ac));
  keymap.insert(std::make_pair(0x239E, 0x08ad));
  keymap.insert(std::make_pair(0x23A0, 0x08ae));
  keymap.insert(std::make_pair(0x23A8, 0x08af));
  keymap.insert(std::make_pair(0x23AC, 0x08b0));
  keymap.insert(std::make_pair(0x2264, 0x08bc));
  keymap.insert(std::make_pair(0x2260, 0x08bd));
  keymap.insert(std::make_pair(0x2265, 0x08be));
  keymap.insert(std::make_pair(0x222B, 0x08bf));
  keymap.insert(std::make_pair(0x2234, 0x08c0));
  keymap.insert(std::make_pair(0x221D, 0x08c1));
  keymap.insert(std::make_pair(0x221E, 0x08c2));
  keymap.insert(std::make_pair(0x2207, 0x08c5));
  keymap.insert(std::make_pair(0x223C, 0x08c8));
  keymap.insert(std::make_pair(0x2243, 0x08c9));
  keymap.insert(std::make_pair(0x21D4, 0x08cd));
  keymap.insert(std::make_pair(0x21D2, 0x08ce));
  keymap.insert(std::make_pair(0x2261, 0x08cf));
  keymap.insert(std::make_pair(0x221A, 0x08d6));
  keymap.insert(std::make_pair(0x2282, 0x08da));
  keymap.insert(std::make_pair(0x2283, 0x08db));
  keymap.insert(std::make_pair(0x2229, 0x08dc));
  keymap.insert(std::make_pair(0x222A, 0x08dd));
  keymap.insert(std::make_pair(0x2227, 0x08de));
  keymap.insert(std::make_pair(0x2228, 0x08df));
  keymap.insert(std::make_pair(0x2202, 0x08ef));
  keymap.insert(std::make_pair(0x0192, 0x08f6));
  keymap.insert(std::make_pair(0x2190, 0x08fb));
  keymap.insert(std::make_pair(0x2191, 0x08fc));
  keymap.insert(std::make_pair(0x2192, 0x08fd));
  keymap.insert(std::make_pair(0x2193, 0x08fe));
  keymap.insert(std::make_pair(0x25C6, 0x09e0));
  keymap.insert(std::make_pair(0x2592, 0x09e1));
  keymap.insert(std::make_pair(0x2409, 0x09e2));
  keymap.insert(std::make_pair(0x240C, 0x09e3));
  keymap.insert(std::make_pair(0x240D, 0x09e4));
  keymap.insert(std::make_pair(0x240A, 0x09e5));
  keymap.insert(std::make_pair(0x2424, 0x09e8));
  keymap.insert(std::make_pair(0x240B, 0x09e9));
  keymap.insert(std::make_pair(0x2518, 0x09ea));
  keymap.insert(std::make_pair(0x2510, 0x09eb));
  keymap.insert(std::make_pair(0x250C, 0x09ec));
  keymap.insert(std::make_pair(0x2514, 0x09ed));
  keymap.insert(std::make_pair(0x253C, 0x09ee));
  keymap.insert(std::make_pair(0x23BA, 0x09ef));
  keymap.insert(std::make_pair(0x23BB, 0x09f0));
  keymap.insert(std::make_pair(0x2500, 0x09f1));
  keymap.insert(std::make_pair(0x23BC, 0x09f2));
  keymap.insert(std::make_pair(0x23BD, 0x09f3));
  keymap.insert(std::make_pair(0x251C, 0x09f4));
  keymap.insert(std::make_pair(0x2524, 0x09f5));
  keymap.insert(std::make_pair(0x2534, 0x09f6));
  keymap.insert(std::make_pair(0x252C, 0x09f7));
  keymap.insert(std::make_pair(0x2502, 0x09f8));
  keymap.insert(std::make_pair(0x2003, 0x0aa1));
  keymap.insert(std::make_pair(0x2002, 0x0aa2));
  keymap.insert(std::make_pair(0x2004, 0x0aa3));
  keymap.insert(std::make_pair(0x2005, 0x0aa4));
  keymap.insert(std::make_pair(0x2007, 0x0aa5));
  keymap.insert(std::make_pair(0x2008, 0x0aa6));
  keymap.insert(std::make_pair(0x2009, 0x0aa7));
  keymap.insert(std::make_pair(0x200A, 0x0aa8));
  keymap.insert(std::make_pair(0x2014, 0x0aa9));
  keymap.insert(std::make_pair(0x2013, 0x0aaa));
  keymap.insert(std::make_pair(0x2423, 0x0aac));
  keymap.insert(std::make_pair(0x2026, 0x0aae));
  keymap.insert(std::make_pair(0x2025, 0x0aaf));
  keymap.insert(std::make_pair(0x2153, 0x0ab0));
  keymap.insert(std::make_pair(0x2154, 0x0ab1));
  keymap.insert(std::make_pair(0x2155, 0x0ab2));
  keymap.insert(std::make_pair(0x2156, 0x0ab3));
  keymap.insert(std::make_pair(0x2157, 0x0ab4));
  keymap.insert(std::make_pair(0x2158, 0x0ab5));
  keymap.insert(std::make_pair(0x2159, 0x0ab6));
  keymap.insert(std::make_pair(0x215A, 0x0ab7));
  keymap.insert(std::make_pair(0x2105, 0x0ab8));
  keymap.insert(std::make_pair(0x2012, 0x0abb));
  keymap.insert(std::make_pair(0x27E8, 0x0abc));
  keymap.insert(std::make_pair(0x27E9, 0x0abe));
  keymap.insert(std::make_pair(0x215B, 0x0ac3));
  keymap.insert(std::make_pair(0x215C, 0x0ac4));
  keymap.insert(std::make_pair(0x215D, 0x0ac5));
  keymap.insert(std::make_pair(0x215E, 0x0ac6));
  keymap.insert(std::make_pair(0x2122, 0x0ac9));
  keymap.insert(std::make_pair(0x2613, 0x0aca));
  keymap.insert(std::make_pair(0x25C1, 0x0acc));
  keymap.insert(std::make_pair(0x25B7, 0x0acd));
  keymap.insert(std::make_pair(0x25CB, 0x0ace));
  keymap.insert(std::make_pair(0x25AF, 0x0acf));
  keymap.insert(std::make_pair(0x2018, 0x0ad0));
  keymap.insert(std::make_pair(0x2019, 0x0ad1));
  keymap.insert(std::make_pair(0x201C, 0x0ad2));
  keymap.insert(std::make_pair(0x201D, 0x0ad3));
  keymap.insert(std::make_pair(0x211E, 0x0ad4));
  keymap.insert(std::make_pair(0x2032, 0x0ad6));
  keymap.insert(std::make_pair(0x2033, 0x0ad7));
  keymap.insert(std::make_pair(0x271D, 0x0ad9));
  keymap.insert(std::make_pair(0x25AC, 0x0adb));
  keymap.insert(std::make_pair(0x25C0, 0x0adc));
  keymap.insert(std::make_pair(0x25B6, 0x0add));
  keymap.insert(std::make_pair(0x25CF, 0x0ade));
  keymap.insert(std::make_pair(0x25AE, 0x0adf));
  keymap.insert(std::make_pair(0x25E6, 0x0ae0));
  keymap.insert(std::make_pair(0x25AB, 0x0ae1));
  keymap.insert(std::make_pair(0x25AD, 0x0ae2));
  keymap.insert(std::make_pair(0x25B3, 0x0ae3));
  keymap.insert(std::make_pair(0x25BD, 0x0ae4));
  keymap.insert(std::make_pair(0x2606, 0x0ae5));
  keymap.insert(std::make_pair(0x2022, 0x0ae6));
  keymap.insert(std::make_pair(0x25AA, 0x0ae7));
  keymap.insert(std::make_pair(0x25B2, 0x0ae8));
  keymap.insert(std::make_pair(0x25BC, 0x0ae9));
  keymap.insert(std::make_pair(0x261C, 0x0aea));
  keymap.insert(std::make_pair(0x261E, 0x0aeb));
  keymap.insert(std::make_pair(0x2663, 0x0aec));
  keymap.insert(std::make_pair(0x2666, 0x0aed));
  keymap.insert(std::make_pair(0x2665, 0x0aee));
  keymap.insert(std::make_pair(0x2720, 0x0af0));
  keymap.insert(std::make_pair(0x2020, 0x0af1));
  keymap.insert(std::make_pair(0x2021, 0x0af2));
  keymap.insert(std::make_pair(0x2713, 0x0af3));
  keymap.insert(std::make_pair(0x2717, 0x0af4));
  keymap.insert(std::make_pair(0x266F, 0x0af5));
  keymap.insert(std::make_pair(0x266D, 0x0af6));
  keymap.insert(std::make_pair(0x2642, 0x0af7));
  keymap.insert(std::make_pair(0x2640, 0x0af8));
  keymap.insert(std::make_pair(0x260E, 0x0af9));
  keymap.insert(std::make_pair(0x2315, 0x0afa));
  keymap.insert(std::make_pair(0x2117, 0x0afb));
  keymap.insert(std::make_pair(0x2038, 0x0afc));
  keymap.insert(std::make_pair(0x201A, 0x0afd));
  keymap.insert(std::make_pair(0x201E, 0x0afe));
  keymap.insert(std::make_pair(0x2228, 0x0ba8));
  keymap.insert(std::make_pair(0x2227, 0x0ba9));
  keymap.insert(std::make_pair(0x22A4, 0x0bc2));
  keymap.insert(std::make_pair(0x2229, 0x0bc3));
  keymap.insert(std::make_pair(0x230A, 0x0bc4));
  keymap.insert(std::make_pair(0x2218, 0x0bca));
  keymap.insert(std::make_pair(0x2395, 0x0bcc));
  keymap.insert(std::make_pair(0x22A5, 0x0bce));
  keymap.insert(std::make_pair(0x25CB, 0x0bcf));
  keymap.insert(std::make_pair(0x2308, 0x0bd3));
  keymap.insert(std::make_pair(0x222A, 0x0bd6));
  keymap.insert(std::make_pair(0x2283, 0x0bd8));
  keymap.insert(std::make_pair(0x2282, 0x0bda));
  keymap.insert(std::make_pair(0x22A3, 0x0bdc));
  keymap.insert(std::make_pair(0x22A2, 0x0bfc));
  keymap.insert(std::make_pair(0x2017, 0x0cdf));
  keymap.insert(std::make_pair(0x05D0, 0x0ce0));
  keymap.insert(std::make_pair(0x05D1, 0x0ce1));
  keymap.insert(std::make_pair(0x05D2, 0x0ce2));
  keymap.insert(std::make_pair(0x05D3, 0x0ce3));
  keymap.insert(std::make_pair(0x05D4, 0x0ce4));
  keymap.insert(std::make_pair(0x05D5, 0x0ce5));
  keymap.insert(std::make_pair(0x05D6, 0x0ce6));
  keymap.insert(std::make_pair(0x05D7, 0x0ce7));
  keymap.insert(std::make_pair(0x05D8, 0x0ce8));
  keymap.insert(std::make_pair(0x05D9, 0x0ce9));
  keymap.insert(std::make_pair(0x05DA, 0x0cea));
  keymap.insert(std::make_pair(0x05DB, 0x0ceb));
  keymap.insert(std::make_pair(0x05DC, 0x0cec));
  keymap.insert(std::make_pair(0x05DD, 0x0ced));
  keymap.insert(std::make_pair(0x05DE, 0x0cee));
  keymap.insert(std::make_pair(0x05DF, 0x0cef));
  keymap.insert(std::make_pair(0x05E0, 0x0cf0));
  keymap.insert(std::make_pair(0x05E1, 0x0cf1));
  keymap.insert(std::make_pair(0x05E2, 0x0cf2));
  keymap.insert(std::make_pair(0x05E3, 0x0cf3));
  keymap.insert(std::make_pair(0x05E4, 0x0cf4));
  keymap.insert(std::make_pair(0x05E5, 0x0cf5));
  keymap.insert(std::make_pair(0x05E6, 0x0cf6));
  keymap.insert(std::make_pair(0x05E7, 0x0cf7));
  keymap.insert(std::make_pair(0x05E8, 0x0cf8));
  keymap.insert(std::make_pair(0x05E9, 0x0cf9));
  keymap.insert(std::make_pair(0x05EA, 0x0cfa));
  keymap.insert(std::make_pair(0x0E01, 0x0da1));
  keymap.insert(std::make_pair(0x0E02, 0x0da2));
  keymap.insert(std::make_pair(0x0E03, 0x0da3));
  keymap.insert(std::make_pair(0x0E04, 0x0da4));
  keymap.insert(std::make_pair(0x0E05, 0x0da5));
  keymap.insert(std::make_pair(0x0E06, 0x0da6));
  keymap.insert(std::make_pair(0x0E07, 0x0da7));
  keymap.insert(std::make_pair(0x0E08, 0x0da8));
  keymap.insert(std::make_pair(0x0E09, 0x0da9));
  keymap.insert(std::make_pair(0x0E0A, 0x0daa));
  keymap.insert(std::make_pair(0x0E0B, 0x0dab));
  keymap.insert(std::make_pair(0x0E0C, 0x0dac));
  keymap.insert(std::make_pair(0x0E0D, 0x0dad));
  keymap.insert(std::make_pair(0x0E0E, 0x0dae));
  keymap.insert(std::make_pair(0x0E0F, 0x0daf));
  keymap.insert(std::make_pair(0x0E10, 0x0db0));
  keymap.insert(std::make_pair(0x0E11, 0x0db1));
  keymap.insert(std::make_pair(0x0E12, 0x0db2));
  keymap.insert(std::make_pair(0x0E13, 0x0db3));
  keymap.insert(std::make_pair(0x0E14, 0x0db4));
  keymap.insert(std::make_pair(0x0E15, 0x0db5));
  keymap.insert(std::make_pair(0x0E16, 0x0db6));
  keymap.insert(std::make_pair(0x0E17, 0x0db7));
  keymap.insert(std::make_pair(0x0E18, 0x0db8));
  keymap.insert(std::make_pair(0x0E19, 0x0db9));
  keymap.insert(std::make_pair(0x0E1A, 0x0dba));
  keymap.insert(std::make_pair(0x0E1B, 0x0dbb));
  keymap.insert(std::make_pair(0x0E1C, 0x0dbc));
  keymap.insert(std::make_pair(0x0E1D, 0x0dbd));
  keymap.insert(std::make_pair(0x0E1E, 0x0dbe));
  keymap.insert(std::make_pair(0x0E1F, 0x0dbf));
  keymap.insert(std::make_pair(0x0E20, 0x0dc0));
  keymap.insert(std::make_pair(0x0E21, 0x0dc1));
  keymap.insert(std::make_pair(0x0E22, 0x0dc2));
  keymap.insert(std::make_pair(0x0E23, 0x0dc3));
  keymap.insert(std::make_pair(0x0E24, 0x0dc4));
  keymap.insert(std::make_pair(0x0E25, 0x0dc5));
  keymap.insert(std::make_pair(0x0E26, 0x0dc6));
  keymap.insert(std::make_pair(0x0E27, 0x0dc7));
  keymap.insert(std::make_pair(0x0E28, 0x0dc8));
  keymap.insert(std::make_pair(0x0E29, 0x0dc9));
  keymap.insert(std::make_pair(0x0E2A, 0x0dca));
  keymap.insert(std::make_pair(0x0E2B, 0x0dcb));
  keymap.insert(std::make_pair(0x0E2C, 0x0dcc));
  keymap.insert(std::make_pair(0x0E2D, 0x0dcd));
  keymap.insert(std::make_pair(0x0E2E, 0x0dce));
  keymap.insert(std::make_pair(0x0E2F, 0x0dcf));
  keymap.insert(std::make_pair(0x0E30, 0x0dd0));
  keymap.insert(std::make_pair(0x0E31, 0x0dd1));
  keymap.insert(std::make_pair(0x0E32, 0x0dd2));
  keymap.insert(std::make_pair(0x0E33, 0x0dd3));
  keymap.insert(std::make_pair(0x0E34, 0x0dd4));
  keymap.insert(std::make_pair(0x0E35, 0x0dd5));
  keymap.insert(std::make_pair(0x0E36, 0x0dd6));
  keymap.insert(std::make_pair(0x0E37, 0x0dd7));
  keymap.insert(std::make_pair(0x0E38, 0x0dd8));
  keymap.insert(std::make_pair(0x0E39, 0x0dd9));
  keymap.insert(std::make_pair(0x0E3A, 0x0dda));
  keymap.insert(std::make_pair(0x0E3F, 0x0ddf));
  keymap.insert(std::make_pair(0x0E40, 0x0de0));
  keymap.insert(std::make_pair(0x0E41, 0x0de1));
  keymap.insert(std::make_pair(0x0E42, 0x0de2));
  keymap.insert(std::make_pair(0x0E43, 0x0de3));
  keymap.insert(std::make_pair(0x0E44, 0x0de4));
  keymap.insert(std::make_pair(0x0E45, 0x0de5));
  keymap.insert(std::make_pair(0x0E46, 0x0de6));
  keymap.insert(std::make_pair(0x0E47, 0x0de7));
  keymap.insert(std::make_pair(0x0E48, 0x0de8));
  keymap.insert(std::make_pair(0x0E49, 0x0de9));
  keymap.insert(std::make_pair(0x0E4A, 0x0dea));
  keymap.insert(std::make_pair(0x0E4B, 0x0deb));
  keymap.insert(std::make_pair(0x0E4C, 0x0dec));
  keymap.insert(std::make_pair(0x0E4D, 0x0ded));
  keymap.insert(std::make_pair(0x0E50, 0x0df0));
  keymap.insert(std::make_pair(0x0E51, 0x0df1));
  keymap.insert(std::make_pair(0x0E52, 0x0df2));
  keymap.insert(std::make_pair(0x0E53, 0x0df3));
  keymap.insert(std::make_pair(0x0E54, 0x0df4));
  keymap.insert(std::make_pair(0x0E55, 0x0df5));
  keymap.insert(std::make_pair(0x0E56, 0x0df6));
  keymap.insert(std::make_pair(0x0E57, 0x0df7));
  keymap.insert(std::make_pair(0x0E58, 0x0df8));
  keymap.insert(std::make_pair(0x0E59, 0x0df9));
  keymap.insert(std::make_pair(0x20A9, 0x0eff));
  keymap.insert(std::make_pair(0x01D2, 0x10001d1));
  keymap.insert(std::make_pair(0x20AC, 0x20ac));
  keymap.insert(std::make_pair(0x2245, 0x1002248));
  return keymap;
}

KeySym unicode2keysym(wchar_t wc)
{
  static const keymap_t keymap = GetKeyMap();
  keymap_t::const_iterator itr = keymap.find(wc);
  if ( itr != keymap.end())
    return itr->second;
  return NoSymbol;
}