// FUN_014fa86c @ 014fa86c size=172 calls_out=0 calls_in=1
// strings: 

bool FUN_014fa86c(byte *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_2 == 3) {
    if (*param_1 == 0x32) {
      if (4 < param_1[1] - 0x30) {
        if (param_1[1] != 0x35) {
          return false;
        }
        bVar2 = 5 < param_1[2] - 0x30;
        goto LAB_014fa8f4;
      }
    }
    else {
      if (*param_1 != 0x31) {
        return false;
      }
      if (9 < param_1[1] - 0x30) {
        return false;
      }
    }
    uVar1 = (uint)param_1[2];
  }
  else if (param_2 == 2) {
    if (8 < *param_1 - 0x31) {
      return false;
    }
    uVar1 = (uint)param_1[1];
  }
  else {
    if (param_2 != 1) {
      return false;
    }
    uVar1 = (uint)*param_1;
  }
  bVar2 = 9 < uVar1 - 0x30;
LAB_014fa8f4:
  return !bVar2;
}

