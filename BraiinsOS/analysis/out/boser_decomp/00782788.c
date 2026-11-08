// FUN_00782788 @ 00782788 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_00782788(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 *local_110;
  undefined1 auStack_10c [232];
  
  puVar12 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar12) {
    puVar1 = (undefined4 *)*param_1;
    do {
      puVar7 = (undefined1 *)puVar1[2];
      puVar5 = puVar1 + 0x3c;
      *param_1 = (int)puVar5;
      if (puVar7 == &DAT_3b9aca00) break;
      uVar4 = *puVar1;
      uVar9 = puVar1[1];
      FUN_01bed4e2(auStack_10c,puVar1 + 3,0xe4);
      local_118 = uVar4;
      local_114 = uVar9;
      local_110 = puVar7;
      FUN_00769584(&local_118);
      puVar1 = puVar5;
    } while (puVar5 != puVar12);
  }
  iVar10 = param_1[4];
  if (iVar10 == 0) {
    return;
  }
  iVar11 = param_1[2];
  puVar6 = (uint *)(iVar11 + 0x1e8);
  uVar8 = *puVar6;
  if (uVar8 < 3) {
    uVar2 = param_1[3];
    if (uVar2 == uVar8) {
      uVar8 = uVar8 + iVar10;
      goto LAB_00782880;
    }
    iVar3 = iVar11 + 8;
  }
  else {
    uVar2 = param_1[3];
    uVar8 = *(uint *)(iVar11 + 4);
    if (uVar2 == uVar8) {
      uVar8 = uVar8 + iVar10;
      puVar6 = (uint *)(iVar11 + 4);
      goto LAB_00782880;
    }
    iVar3 = *(int *)(iVar11 + 8);
  }
  FUN_01bed864(iVar3 + uVar8 * 0xf0,iVar3 + uVar2 * 0xf0,iVar10 * 0xf0);
  uVar8 = uVar8 + iVar10;
  if (2 < *puVar6) {
    puVar6 = (uint *)(iVar11 + 4);
  }
LAB_00782880:
  *puVar6 = uVar8;
  return;
}

