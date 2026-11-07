// FUN_0141ebfc @ 0141ebfc size=264 calls_out=6 calls_in=1
// strings: 

void FUN_0141ebfc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_0141eb2c(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1[2] != 3 || param_1[3] != 0) {
    if (param_1[9] != 0) {
      thunk_FUN_01be4678(param_1[8]);
    }
    iVar2 = param_1[0xb];
    FUN_01410ec8(iVar2,param_1[0xc]);
    FUN_0134aee0(param_1[10],iVar2,4,0x34);
    FUN_008e0ddc(param_1 + 0xd);
  }
  if (param_1[0x14] != 0) {
    (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
  }
  if (param_1[0x17] != 0) {
    (**(code **)(param_1[0x17] + 0xc))(param_1[0x18]);
  }
  if (param_1 != (int *)&DAT_ffffffff) {
    piVar3 = param_1 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

