// FUN_00fb04a0 @ 00fb04a0 size=296 calls_out=7 calls_in=0
// strings: 

void FUN_00fb04a0(undefined4 *param_1)

{
  if (*(char *)(param_1 + 0x5a) == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x5a) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x2f)) {
  case 0:
    FUN_019bb7e0(param_1[6],param_1[7]);
    FUN_019bb7e0(param_1[9],param_1[10]);
    FUN_019bb7e0(param_1[0x26],param_1[0x27]);
    return;
  default:
    goto switchD_00fae188_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x46) == '\x03') {
      FUN_005f0650(param_1 + 0x3a);
    }
    break;
  case 4:
    FUN_00fb060c(param_1 + 0x32);
    break;
  case 5:
    if (*(char *)((int)param_1 + 0x11d) == '\x03') {
      FUN_00740564(param_1 + 0x32);
      *(undefined1 *)(param_1 + 0x47) = 0;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x39) == '\x03') {
      FUN_00741144(param_1 + 0x36);
    }
    FUN_0142e6dc(param_1 + 0x4a);
    *(undefined1 *)((int)param_1 + 0xbe) = 0;
    FUN_019bb7e0(param_1[0x32],param_1[0x33]);
    FUN_005f649c(param_1 + 0x3a);
    *(undefined1 *)((int)param_1 + 0xbf) = 0;
  }
  FUN_019bb7e0(param_1[0x29],param_1[0x2a]);
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  if (*(char *)((int)param_1 + 0xbd) != '\0') {
    FUN_019bb7e0(param_1[0xf],param_1[0x10]);
  }
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
switchD_00fae188_caseD_1:
  return;
}

