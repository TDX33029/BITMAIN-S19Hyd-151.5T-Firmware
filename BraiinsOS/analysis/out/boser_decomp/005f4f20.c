// FUN_005f4f20 @ 005f4f20 size=168 calls_out=1 calls_in=3
// strings: 

void FUN_005f4f20(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*param_1 == 0) {
    return;
  }
  if ((char)param_1[0xf] != '\x03') {
    if ((char)param_1[0xf] != '\0') {
      return;
    }
    param_1 = param_1 + 1;
    goto LAB_005f4fbc;
  }
  if ((char)param_1[0xe] == '\x03') {
    if ((char)param_1[0xd] == '\x03') {
      piVar2 = (int *)param_1[0xc];
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(piVar2);
        if (bVar1) {
          *piVar2 = 0x84;
          goto LAB_005f4fb8;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar2[2] + 0x10))();
    }
    else if ((char)param_1[0xd] == '\0') {
      FUN_019bb7e0(param_1[9],param_1[10]);
    }
  }
LAB_005f4fb8:
  param_1 = param_1 + 4;
LAB_005f4fbc:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

