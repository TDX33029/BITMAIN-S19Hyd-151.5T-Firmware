// FUN_012e1138 @ 012e1138 size=212 calls_out=6 calls_in=2
// strings: 

void FUN_012e1138(int *param_1)

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
    if ((char)param_1[0x23] == '\0') {
      FUN_012ea64c(param_1[2],param_1[3]);
    }
    else {
      if ((char)param_1[0x23] != '\x03') {
        return;
      }
      if ((char)param_1[0x22] == '\x03') {
        FUN_019e0ae8(param_1 + 0x17);
        if (param_1[0x1b] != 0) {
          (**(code **)(param_1[0x1b] + 0xc))(param_1[0x1c]);
        }
        FUN_012e12ac(param_1 + 0xe);
        FUN_012e1310(param_1 + 9);
        FUN_005faf6c(param_1 + 8);
        *(undefined1 *)((int)param_1 + 0x8a) = 0;
      }
      else if ((char)param_1[0x22] == '\0') {
        FUN_012ea64c(param_1[5],param_1[6]);
        FUN_005faf6c(param_1 + 7);
      }
    }
    FUN_005faf6c(param_1 + 4);
    return;
  }
  return;
}

