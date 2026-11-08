// FUN_01a9e910 @ 01a9e910 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_01a9e910(int *param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_019bb7e0(param_1[0x16],param_1[0x17]);
    (**(code **)(param_1[0x10] + 0x10))(param_1 + 0x13,param_1[0x11],param_1[0x12]);
    FUN_01a68db4(param_1);
    piVar3 = (int *)param_1[0x14];
    if (piVar3 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x14],param_1[0x15]);
      return;
    }
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  FUN_00d76cac(param_1 + 5);
  puVar2 = (undefined1 *)param_1[0xc];
  if (puVar2 == &DAT_80000004) {
    return;
  }
  uVar4 = 1;
  if ((int)puVar2 < 0) {
    uVar4 = (uint)puVar2 ^ 0x80000000;
  }
  if (uVar4 == 0) {
    iVar6 = param_1[0xe];
    puVar5 = (undefined4 *)(iVar6 + 4);
    for (iVar7 = param_1[0xf]; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_019bb7e0(puVar5[-1],*puVar5);
      puVar5 = puVar5 + 3;
    }
    FUN_0134c054(param_1[0xd],iVar6,4,0xc);
    return;
  }
  if (uVar4 == 1) {
    FUN_019bb7e0(puVar2,param_1[0xd]);
    FUN_0134aee0(param_1[0xf],param_1[0x10],4,4);
    return;
  }
  if (uVar4 != 2) {
    FUN_019bb7e0(param_1[0xd],param_1[0xe]);
    return;
  }
  iVar6 = param_1[0xe];
  puVar5 = (undefined4 *)(iVar6 + 4);
  for (iVar7 = param_1[0xf]; iVar7 != 0; iVar7 = iVar7 + -1) {
    FUN_019bb7e0(puVar5[-1],*puVar5);
    puVar5 = puVar5 + 3;
  }
  FUN_0132b958(param_1[0xd],iVar6,4,0xc);
  return;
}

