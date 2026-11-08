// FUN_01285c00 @ 01285c00 size=428 calls_out=1 calls_in=1
// strings: 

void FUN_01285c00(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  int local_1c;
  byte *local_18;
  uint local_14;
  
  iVar3 = *param_2;
  iVar10 = param_2[1];
  iVar1 = iVar3 + iVar10;
  if (iVar10 == 0) {
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      if (*(byte *)(iVar3 + iVar6) - 0x3a < 0xfffffff6) {
        iVar8 = iVar10 - iVar6;
        iVar1 = iVar3 + iVar6;
        goto LAB_01285c5c;
      }
      iVar6 = iVar6 + 1;
    } while (iVar10 != iVar6);
    iVar8 = 0;
    iVar6 = iVar10;
  }
LAB_01285c5c:
  *param_2 = iVar1;
  param_2[2] = param_2[2] + iVar6;
  param_2[1] = iVar8;
  FUN_012fbd94(&local_1c,iVar3,iVar6);
  uVar2 = 0x3b9aca08;
  if (local_1c == 1) {
    uVar2 = 0x3b9aca0f;
    *param_1 = local_18;
    param_1[1] = local_14;
    goto LAB_01285d8c;
  }
  if (local_14 == 0) {
    uVar4 = 0;
  }
  else {
    if (local_14 == 1) {
      bVar9 = *local_18;
      uVar4 = 1;
      if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_01285d88;
    }
    else {
      bVar9 = *local_18;
    }
    uVar7 = 0;
    uVar5 = 0;
    if (bVar9 == 0x2b) {
      local_18 = local_18 + 1;
      local_14 = local_14 - 1;
    }
    if (local_14 < 5) {
      for (; local_14 != 0; local_14 = local_14 - 1) {
        bVar9 = *local_18;
        if (9 < bVar9 - 0x30) goto LAB_01285d84;
        local_18 = local_18 + 1;
        uVar7 = (bVar9 - 0x30) + uVar7 * 10;
        uVar5 = (undefined2)uVar7;
      }
LAB_01285d2c:
      *(undefined2 *)param_1 = uVar5;
      uVar2 = 0x3b9aca10;
      goto LAB_01285d8c;
    }
    do {
      uVar5 = (undefined2)uVar7;
      if (local_14 == 0) goto LAB_01285d2c;
      uVar7 = (uVar7 & 0xffff) * 4 + (uVar7 & 0xffff);
      if (uVar7 >> 0xf != 0) {
        uVar4 = 1;
        if (*local_18 - 0x30 < 10) {
          uVar4 = 2;
        }
        goto LAB_01285d88;
      }
      uVar11 = *local_18 - 0x30;
      if (9 < uVar11) goto LAB_01285d84;
      local_14 = local_14 - 1;
      uVar7 = (uVar7 * 2 & 0xffff) + (uVar11 & 0xffff);
      local_18 = local_18 + 1;
    } while ((uVar7 & 0x10000) == 0);
    uVar4 = 2;
  }
LAB_01285d88:
  *(undefined1 *)param_1 = uVar4;
LAB_01285d8c:
  param_1[2] = uVar2;
  return;
LAB_01285d84:
  uVar4 = 1;
  goto LAB_01285d88;
}

