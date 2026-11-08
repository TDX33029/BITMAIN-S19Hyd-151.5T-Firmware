// FUN_015a8b90 @ 015a8b90 size=568 calls_out=7 calls_in=1
// strings: Tried to shrink to a larger capacitymax line length exceeded

void FUN_015a8b90(uint *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar4 = (undefined1 *)thunk_FUN_016d4a50(param_3);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(puVar4,param_2,param_3);
  if (param_3 - 1 == 0) {
    uVar5 = param_3 + 3 & 0xfffffffc;
  }
  else {
    uVar5 = param_3 >> 1;
    puVar7 = puVar4 + (param_3 - 1);
    puVar9 = puVar4;
    do {
      uVar2 = *puVar7;
      uVar5 = uVar5 - 1;
      *puVar7 = *puVar9;
      *puVar9 = uVar2;
      puVar7 = puVar7 + -1;
      puVar9 = puVar9 + 1;
    } while (uVar5 != 0);
    uVar6 = 0;
    uVar5 = param_3 + 3 & 0xfffffffc;
    if (0x7ffffffc < uVar5) goto LAB_015a8c04;
  }
  uVar12 = param_3 + 3 >> 2;
  uStack_2c = thunk_FUN_016d4a50(uVar5);
  if (uStack_2c == 0) {
    uVar6 = 4;
LAB_015a8c04:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar6,uVar5);
  }
  uStack_28 = 0;
  local_30 = uVar12;
  if (uVar12 < param_3 + 3 >> 2) {
    FUN_0127ade8(&local_30,0,param_3 + 3 >> 2);
  }
  puVar7 = puVar4;
  iVar3 = ~uStack_28 << 2;
  uVar5 = uStack_28;
  do {
    iVar13 = iVar3;
    uVar12 = param_3;
    if (3 < param_3) {
      uVar12 = 4;
    }
    uVar11 = 0;
    uVar10 = uVar12;
    do {
      iVar3 = uVar10 - 1;
      uVar10 = uVar10 - 1;
      uVar11 = (uint)(byte)puVar7[iVar3] | uVar11 << 8;
    } while (uVar10 != 0);
    *(uint *)(uStack_2c + uVar5 * 4) = uVar11;
    param_3 = param_3 - uVar12;
    uVar5 = uVar5 + 1;
    puVar7 = puVar7 + uVar12;
    iVar3 = iVar13 + -4;
  } while (param_3 != 0);
  uVar12 = uStack_2c;
  uVar10 = local_30;
  if (uVar5 == 0) {
    uVar5 = 0;
LAB_015a8cf4:
    if (local_30 >> 2 <= uVar5) goto LAB_015a8d64;
  }
  else {
    if (*(int *)(uStack_2c + uVar5 * 4 + -4) != 0) goto LAB_015a8cf4;
    uVar11 = uVar5 & 0x3fffffff;
    do {
      uVar8 = uVar11;
      if (iVar13 == 0) {
        uVar5 = 0;
        if (local_30 >> 2 == 0) goto LAB_015a8d64;
        goto LAB_015a8cfc;
      }
      piVar1 = (int *)((uStack_2c - 4) - iVar13);
      iVar13 = iVar13 + 4;
      uVar11 = uVar8 - 1;
    } while (*piVar1 == 0);
    if (uVar8 < uVar5) {
      uVar5 = uVar8;
    }
    if (local_30 >> 2 <= uVar5) goto LAB_015a8d64;
  }
LAB_015a8cfc:
  if (local_30 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (local_30 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar5;
    if (uVar5 == 0) {
      thunk_FUN_016d3fb4();
      uVar12 = 4;
    }
    else {
      uVar12 = thunk_FUN_016d4ea4(uStack_2c,uVar5 << 2);
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar5 << 2);
      }
    }
  }
LAB_015a8d64:
  param_1[1] = uVar12;
  param_1[2] = uVar5;
  *param_1 = uVar10;
  thunk_FUN_016d3fb4(puVar4);
  return;
}

