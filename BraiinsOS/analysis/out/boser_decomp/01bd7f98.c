// FUN_01bd7f98 @ 01bd7f98 size=516 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01bd7f98(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 unaff_lr;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_40 [6];
  undefined1 auStack_3a [3];
  undefined1 auStack_37 [4];
  undefined1 auStack_33 [7];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar6 = 0;
  puVar4 = auStack_40;
  do {
    uVar2 = uVar6;
    *puVar4 = *(undefined1 *)(param_2 + uVar2);
    uVar6 = uVar2 + 1;
    bVar10 = 0xf < uVar6;
    bVar8 = uVar6 != 0x10;
    if (bVar8) {
      bVar10 = uVar6 <= param_3;
    }
    bVar9 = param_3 != uVar6;
    if (bVar10 && (bVar8 && bVar9)) {
      unaff_lr = 1;
    }
    if (!bVar10 || (!bVar8 || !bVar9)) {
      unaff_lr = 0;
    }
    puVar4 = puVar4 + 1;
  } while (bVar10 && (bVar8 && bVar9));
  auStack_40[uVar2 + 1] = 1;
  for (iVar1 = uVar2 + 2; iVar1 != 0x11; iVar1 = iVar1 + 1) {
    auStack_40[iVar1] = unaff_lr;
  }
  uVar2 = FUN_01bd7f00(auStack_40);
  *param_1 = uVar2 & 0x3ffffff;
  uVar2 = FUN_01bd7f00(auStack_40 + 3);
  param_1[2] = (uVar2 & 0xfffffff) >> 2;
  uVar2 = FUN_01bd7f00(auStack_3a);
  param_1[4] = (uVar2 & 0x3fffffff) >> 4;
  uVar2 = FUN_01bd7f00(auStack_37);
  param_1[6] = uVar2 >> 6;
  uVar7 = 0x7c;
  uVar2 = FUN_01bd7f00(auStack_33);
  param_1[8] = uVar2;
  if (param_3 == uVar6) {
    param_1[9] = 0;
    param_1[7] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    param_1[1] = 0;
  }
  else {
    uVar2 = 0;
    puVar4 = (undefined1 *)(param_2 + uVar6);
    puVar5 = auStack_40;
    do {
      uVar3 = uVar2;
      *puVar5 = *puVar4;
      uVar2 = uVar3 + 1;
      bVar10 = 0xf < uVar2;
      bVar8 = uVar2 != 0x10;
      if (bVar8) {
        bVar10 = uVar2 <= param_3 - uVar6;
      }
      bVar9 = param_3 - uVar6 != uVar2;
      if (bVar10 && (bVar8 && bVar9)) {
        uVar7 = 1;
      }
      if (!bVar10 || (!bVar8 || !bVar9)) {
        uVar7 = 0;
      }
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (bVar10 && (bVar8 && bVar9));
    auStack_40[uVar3 + 1] = 1;
    for (iVar1 = uVar3 + 2; iVar1 != 0x11; iVar1 = iVar1 + 1) {
      auStack_40[iVar1] = uVar7;
    }
    uVar6 = FUN_01bd7f00(auStack_40);
    param_1[1] = uVar6 & 0x3ffffff;
    uVar6 = FUN_01bd7f00(auStack_40 + 3);
    param_1[3] = (uVar6 & 0xfffffff) >> 2;
    uVar6 = FUN_01bd7f00(auStack_3a);
    param_1[5] = (uVar6 & 0x3fffffff) >> 4;
    uVar6 = FUN_01bd7f00(auStack_37);
    param_1[7] = uVar6 >> 6;
    uVar6 = FUN_01bd7f00(auStack_33);
    param_1[9] = uVar6;
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

