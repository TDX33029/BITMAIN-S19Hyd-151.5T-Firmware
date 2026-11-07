// FUN_00075dbc @ 00075dbc  size=564  callers=1
// program: bmminer


undefined4 FUN_00075dbc(void)

{
  double in_d0;
  undefined4 local_c;
  
  switch(DAT_009451f8) {
  case 0x1a:
  case 0x62:
  case 100:
  case 0x65:
  case 0x66:
    local_c = (undefined4)(longlong)(0.0 - in_d0);
    break;
  default:
    local_c = 0xffffffff;
    break;
  case 0x22:
    local_c = (undefined4)(longlong)(1215.89444 - in_d0 * 59.931507);
    break;
  case 0x41:
    local_c = (undefined4)(longlong)(765.411764 - in_d0 * 35.833333);
    break;
  case 0x42:
    local_c = (undefined4)(longlong)(765.411764 - in_d0 * 35.833333);
    break;
  case 0x43:
    local_c = (undefined4)(longlong)(933.240365 - in_d0 * 59.806034);
    break;
  case 0x61:
    local_c = (undefined4)(longlong)(1144.502262 - in_d0 * 52.243589);
    break;
  case 0x71:
  case 0x75:
    local_c = (undefined4)(longlong)(1190.935338 - in_d0 * 78.742588);
    break;
  case 0x72:
  case 0x77:
    local_c = (undefined4)(longlong)(1190.935338 - in_d0 * 78.742588);
    break;
  case 0x73:
  case 0x78:
    local_c = (undefined4)(longlong)(1280.577821 - in_d0 * 73.979365);
    break;
  case 0x74:
  case 0x76:
    local_c = (undefined4)(longlong)(1156.107585 - in_d0 * 76.090494);
    break;
  case 0xc1:
  case 0xc2:
    if ((DAT_009451fc == 0x80000300) || ((DAT_009451fc & 0xff) < 4)) {
      local_c = (undefined4)(longlong)(1275.0 - in_d0 * 85.0);
    }
    else {
      local_c = (undefined4)(longlong)(1083.75 - in_d0 * 70.83333333333);
    }
  }
  return local_c;
}

