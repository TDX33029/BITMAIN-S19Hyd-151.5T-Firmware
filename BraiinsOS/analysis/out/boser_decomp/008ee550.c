// FUN_008ee550 @ 008ee550 size=28 calls_out=0 calls_in=2
// strings: 

void FUN_008ee550(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    puVar4 = (undefined1 *)param_1[2];
    if (puVar4 == &DAT_80000004) {
      if ((char)param_1[3] == '\x03') {
        puVar6 = (undefined4 *)param_1[4];
        FUN_01443048(*puVar6,puVar6[1]);
        thunk_FUN_01be4678(puVar6);
        return;
      }
      return;
    }
    uVar2 = 4;
    if ((int)puVar4 < 0) {
      uVar2 = (uint)puVar4 ^ 0x80000000;
    }
    switch(uVar2) {
    case 0:
    case 3:
      goto switchD_008f07e4_caseD_0;
    case 1:
      FUN_01443048(param_1[3],param_1[4]);
      return;
    case 2:
      piVar3 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(param_1[3],param_1[4]);
        return;
      }
switchD_008f07e4_caseD_0:
      return;
    default:
      FUN_019bb7e0(puVar4,param_1[3]);
      return;
    }
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    FUN_019bb7e0(param_1[0x66],param_1[0x67]);
    if (param_1[0x69] != -0x80000000) {
      FUN_019bb7e0(param_1[0x69],param_1[0x6a]);
    }
    if (param_1[0x6c] != -0x80000000) {
      FUN_019bb7e0(param_1[0x6c],param_1[0x6d]);
    }
    if (param_1[0x6f] != -0x80000000) {
      FUN_019bb7e0(param_1[0x6f],param_1[0x70]);
    }
    if (param_1[0x72] != -0x80000000) {
      FUN_019bb7e0(param_1[0x72],param_1[0x73]);
    }
    FUN_00b9c078(param_1 + 8);
    return;
  }
  if (param_1[2] < 0) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  return;
}

