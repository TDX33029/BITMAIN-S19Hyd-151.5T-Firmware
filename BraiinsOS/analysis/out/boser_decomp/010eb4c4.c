// FUN_010eb4c4 @ 010eb4c4 size=268 calls_out=8 calls_in=2
// strings: 

void FUN_010eb4c4(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == 0) {
    if ((9 < *(byte *)(param_2 + 0x106)) && (param_2[0x108] != 0)) {
      thunk_FUN_01be4678(param_2[0x107]);
    }
    FUN_019bb7e0(param_2[0xf4],param_2[0xf5]);
    FUN_0142e6dc(param_2 + 0xe0);
    piVar2 = (int *)param_2[0x10b];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018537bc(param_2[0x10b]);
    }
    FUN_00d363c4(param_2);
    if (param_2[0x10c] != 0) {
      FUN_00668c84();
    }
    if (param_2[0x10d] != 0) {
      FUN_00668c84();
    }
  }
  else {
    if (param_2 == (int *)0x0) {
      return;
    }
    if (((short)param_2[0x12] == 3) && (param_2[0x13] != 0)) {
      (**(code **)(param_2[0x13] + 0x10))(param_2 + 0x16,param_2[0x14],param_2[0x15]);
    }
    if (param_2[0x17] != 0) {
      FUN_00f80320(param_2[0x17],param_2[0x18]);
    }
    if (*param_2 != 2) {
      FUN_019bb7e0(param_2[4],param_2[5]);
    }
  }
  thunk_FUN_01be4678(param_2);
  return;
}

