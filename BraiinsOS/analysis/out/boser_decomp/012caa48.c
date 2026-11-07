// FUN_012caa48 @ 012caa48 size=360 calls_out=9 calls_in=2
// strings: 

void FUN_012caa48(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  
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
    if ((char)param_1[0x3e] != '\x03') {
      if ((char)param_1[0x3e] != '\0') {
        return;
      }
      FUN_0193c71c(param_1 + 0x3c);
      param_1 = param_1 + 0x3d;
LAB_012caa84:
      FUN_005faf6c(param_1);
      return;
    }
    switch(*(undefined1 *)((int)param_1 + 0x39)) {
    case 0:
      FUN_0193c71c(param_1 + 0xc);
      param_1 = param_1 + 0xd;
      goto LAB_012caa84;
    default:
      goto switchD_012caac4_caseD_1;
    case 3:
      if (*(char *)((int)param_1 + 0xda) == '\x03') {
        FUN_00b76614(param_1 + 0x10);
        *(undefined2 *)(param_1 + 0x36) = 0;
      }
      break;
    case 4:
      FUN_019f1850(param_1 + 0x14);
      FUN_00668d74(param_1 + 0x20);
      iVar1 = param_1[0x15];
      bVar2 = param_1[0x14] == 0;
      bVar3 = bVar2 && iVar1 == 0;
      if (!bVar2 || iVar1 != 0) {
        iVar1 = param_1[0x1c];
        bVar3 = iVar1 == 0;
      }
      if (!bVar3) {
        (**(code **)(iVar1 + 0xc))(param_1[0x1d]);
      }
      FUN_012c7f64(param_1 + 0x28);
      FUN_0069d8a4((char)param_1[0x11],param_1[0x12]);
      break;
    case 5:
      if ((char)param_1[0x3b] == '\x03') {
        FUN_012c7f64(param_1 + 0x30);
        FUN_011178c4(param_1 + 0x18);
        FUN_005faf6c(param_1 + 0x17);
        FUN_0193c71c(param_1 + 0x16);
      }
      else if ((char)param_1[0x3b] == '\0') {
        FUN_00b76614(param_1 + 0x10);
        FUN_0193c71c(param_1 + 0x14);
        FUN_005faf6c(param_1 + 0x15);
      }
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_005faf6c(param_1 + 0xb);
    FUN_0193c71c(param_1 + 10);
    return;
  }
switchD_012caac4_caseD_1:
  return;
}

