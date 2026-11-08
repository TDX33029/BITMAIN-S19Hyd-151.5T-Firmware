// FUN_0121cc30 @ 0121cc30 size=176 calls_out=2 calls_in=5
// strings: 

void FUN_0121cc30(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    piVar6 = (int *)(iVar4 + 0x34);
    do {
      if (((1 < piVar6[-0xb] - 3U) && (iVar2 = *piVar6, iVar2 != 0)) &&
         (uVar3 = iVar2 * 0x11 + 0x14U & 0xfffffffc, iVar2 + uVar3 != -5)) {
        thunk_FUN_01be4678(piVar6[-1] - uVar3);
      }
      piVar6 = piVar6 + 0x1c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    thunk_FUN_01be4678(iVar4);
  }
  if (param_1 != -1) {
    piVar6 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

