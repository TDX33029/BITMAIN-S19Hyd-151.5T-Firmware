// FUN_00a61b00 @ 00a61b00 size=220 calls_out=8 calls_in=1
// strings: 

void FUN_00a61b00(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    if (param_1[2] == 0 && param_1[3] == 0) {
      return;
    }
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  switch((char)param_1[0x11]) {
  case '\0':
    goto switchD_00a619fc_caseD_0;
  default:
    return;
  case '\x03':
    break;
  case '\x04':
    if ((char)param_1[0x42] == '\x03') {
      FUN_00b99500(param_1 + 0x13);
    }
    break;
  case '\x05':
    FUN_01431b40(param_1 + 0x16);
    FUN_00a55a24(param_1 + 0x12);
    break;
  case '\x06':
    if ((char)param_1[0x179] == '\x03') {
      if ((char)param_1[0x176] == '\x03') {
        piVar1 = param_1 + 0xc4;
      }
      else {
        if ((char)param_1[0x176] != '\0') break;
        piVar1 = param_1 + 0x12;
      }
      FUN_00df9ef8(piVar1);
    }
  }
  if (param_1[0xd] != 0) {
    FUN_0084ec48();
  }
  FUN_00668c84(param_1[6]);
switchD_00a619fc_caseD_0:
  FUN_01177b94(param_1 + 0xc);
  return;
}

