// FUN_0093e6a8 @ 0093e6a8 size=400 calls_out=10 calls_in=2
// strings: 

void FUN_0093e6a8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *unaff_r4;
  
  FUN_009d5d40();
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x1b)) && (param_1[0x1d] != 0)) {
    thunk_FUN_01be4678(param_1[0x1c]);
  }
  FUN_017726bc((char)param_1[0x10],param_1[0x11]);
  (**(code **)(param_1[0x12] + 0x10))(param_1 + 0x15,param_1[0x13],param_1[0x14]);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x19,param_1[0x17],param_1[0x18]);
  FUN_0142e6dc(param_1);
  FUN_0178e884(param_1[0x20]);
  if (param_1[0x22] != 0) {
    (**(code **)(param_1[0x22] + 0x10))(param_1 + 0x25,param_1[0x23],param_1[0x24]);
  }
  FUN_009d5880();
  iVar2 = param_1[0x27];
  piVar3 = (int *)param_1[0x28];
  if (param_1[0x26] == 0) {
    if (iVar2 != 0) {
      unaff_r4 = piVar3;
    }
    if (iVar2 != 0 && piVar3 != (int *)0x0) {
      FUN_01712764(unaff_r4 + 2);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *unaff_r4;
        bVar1 = (bool)hasExclusiveAccess(unaff_r4);
      } while (!bVar1);
      *unaff_r4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a85dd0(unaff_r4);
        return;
      }
      return;
    }
    return;
  }
  if (iVar2 != 0) {
    unaff_r4 = piVar3;
  }
  if (iVar2 == 0 || piVar3 == (int *)0x0) {
    return;
  }
  FUN_0188d714(unaff_r4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *unaff_r4;
    bVar1 = (bool)hasExclusiveAccess(unaff_r4);
  } while (!bVar1);
  *unaff_r4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a75bd4(unaff_r4);
    return;
  }
  return;
}

