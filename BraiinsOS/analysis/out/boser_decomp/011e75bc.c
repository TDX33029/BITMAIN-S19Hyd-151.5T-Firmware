// FUN_011e75bc @ 011e75bc size=344 calls_out=9 calls_in=2
// strings: 

void FUN_011e75bc(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 1) {
    bVar2 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = param_1[4];
    }
    if (bVar2 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x47] != '\x03') {
      if ((char)param_1[0x47] != '\0') {
        return;
      }
      FUN_019bb7e0(param_1[0x44],param_1[0x45]);
      FUN_011e7820(param_1 + 0x42);
      param_1 = param_1 + 0x43;
LAB_011e7604:
      FUN_005faf6c(param_1);
      return;
    }
    switch(*(undefined1 *)((int)param_1 + 0x51)) {
    case 0:
      FUN_019bb7e0(param_1[0x11],param_1[0x12]);
      FUN_011e7820(param_1 + 0xf);
      param_1 = param_1 + 0x10;
      goto LAB_011e7604;
    default:
      goto switchD_011e7644_caseD_1;
    case 3:
      if (*(char *)((int)param_1 + 0xea) == '\x03') {
        FUN_00b76614(param_1 + 0x16);
        *(undefined2 *)(param_1 + 0x3a) = 0;
      }
      break;
    case 4:
      FUN_01431b40(param_1 + 0x1a);
      FUN_012c7f64(param_1 + 0x2e);
      FUN_0069d8a4((char)param_1[0x17],param_1[0x18]);
      break;
    case 5:
      if ((char)param_1[0x41] == '\x03') {
        FUN_012c7f64(param_1 + 0x36);
        FUN_011178c4(param_1 + 0x1e);
        FUN_005faf6c(param_1 + 0x1d);
        FUN_011e7820(param_1 + 0x1c);
      }
      else if ((char)param_1[0x41] == '\0') {
        FUN_00b76614(param_1 + 0x16);
        FUN_011e7820(param_1 + 0x1a);
        FUN_005faf6c(param_1 + 0x1b);
      }
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
    FUN_005faf6c(param_1 + 0xe);
    FUN_011e7820(param_1 + 0xd);
    FUN_019bb7e0(param_1[10],param_1[0xb]);
    return;
  }
switchD_011e7644_caseD_1:
  return;
}

