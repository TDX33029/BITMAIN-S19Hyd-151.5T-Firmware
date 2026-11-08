// FUN_006bcae4 @ 006bcae4 size=256 calls_out=3 calls_in=0
// strings: 

void FUN_006bcae4(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 *local_110;
  undefined1 auStack_10c [232];
  
  puVar11 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar11) {
    puVar1 = (undefined4 *)*param_1;
    do {
      puVar3 = (undefined1 *)puVar1[2];
      puVar4 = puVar1 + 0x3c;
      *param_1 = (int)puVar4;
      if (puVar3 == &DAT_3b9aca00) break;
      uVar6 = *puVar1;
      uVar8 = puVar1[1];
      FUN_016dd1aa(auStack_10c,puVar1 + 3,0xe4);
      local_118 = uVar6;
      local_114 = uVar8;
      local_110 = puVar3;
      FUN_006b8bc4(&local_118);
      puVar1 = puVar4;
    } while (puVar4 != puVar11);
  }
  iVar9 = param_1[4];
  if (iVar9 == 0) {
    return;
  }
  iVar10 = param_1[2];
  puVar11 = (undefined4 *)(iVar10 + 8);
  puVar5 = (uint *)(iVar10 + 0x1e8);
  uVar7 = *puVar5;
  if (uVar7 < 3) {
    uVar2 = param_1[3];
    if (uVar2 == uVar7) {
      uVar7 = uVar7 + iVar9;
      goto LAB_006bcbd8;
    }
  }
  else {
    uVar2 = param_1[3];
    uVar7 = *(uint *)(iVar10 + 4);
    if (uVar2 == uVar7) {
      uVar7 = uVar7 + iVar9;
      puVar5 = (uint *)(iVar10 + 4);
      goto LAB_006bcbd8;
    }
    puVar11 = (undefined4 *)*puVar11;
  }
  FUN_016dd52c(puVar11 + uVar7 * 0x3c,puVar11 + uVar2 * 0x3c,iVar9 * 0xf0);
  uVar7 = uVar7 + iVar9;
  if (2 < *puVar5) {
    puVar5 = (uint *)(iVar10 + 4);
  }
LAB_006bcbd8:
  *puVar5 = uVar7;
  return;
}

