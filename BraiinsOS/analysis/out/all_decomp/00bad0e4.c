// FUN_00bad0e4 @ 00bad0e4 size=568 calls_out=6 calls_in=0
// strings: 

void FUN_00bad0e4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  short *psVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  
  param_1 = (undefined4 *)*param_1;
  uVar13 = param_1[2];
  iVar11 = param_1[3];
  uVar14 = param_1[4];
  puVar8 = (uint *)param_1[5];
  psVar5 = (short *)*param_1;
  iVar15 = param_1[1];
  *param_1 = 0;
  if (psVar5 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  if (*psVar5 == 1) {
    FUN_00d5f6d8(&local_30,psVar5 + 1);
    local_34 = local_2c;
  }
  else {
    uVar12 = *(uint *)(psVar5 + 4);
    bVar17 = 0x3ffffffe < uVar12;
    bVar16 = uVar12 == 0x3fffffff;
    uVar10 = uVar12 * 4;
    if (uVar12 < 0x40000000) {
      bVar17 = 0x7ffffffd < uVar10;
      bVar16 = uVar10 == 0x7ffffffe;
    }
    if (bVar17 && !bVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    puVar7 = *(undefined4 **)(psVar5 + 2);
    if (uVar10 == 0) {
      local_34 = (undefined4 *)&SUB_00000002;
      local_30 = 0;
    }
    else {
      local_34 = (undefined4 *)thunk_FUN_016d4a50(uVar10);
      local_30 = uVar12;
      if (local_34 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(2,uVar10);
      }
    }
    local_28 = 0;
    if (uVar12 != 0) {
      puVar3 = local_34;
      uVar10 = uVar12;
      do {
        uVar10 = uVar10 - 1;
        *puVar3 = *puVar7;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar10 != 0);
      local_28 = uVar12;
    }
  }
  uVar10 = local_28 * 8;
  uVar9 = 0;
  if (0x7ffffffc < uVar10) {
LAB_00bad1f0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar9,uVar10);
  }
  uVar12 = 0;
  if (uVar10 == 0) {
    uVar1 = 4;
    local_38 = 0;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(uVar10);
    local_38 = local_28;
    if (uVar1 == 0) {
      uVar9 = 4;
      goto LAB_00bad1f0;
    }
  }
  if (local_28 != 0) {
    puVar7 = (undefined4 *)(uVar1 + 4);
    puVar4 = (ushort *)((int)local_34 + 2);
    uVar10 = local_28;
    do {
      uVar2 = (uint)*puVar4;
      uVar12 = uVar2;
      puVar6 = &DAT_01870e8c;
      if (uVar13 <= uVar2) {
LAB_00bad300:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar12,uVar13,puVar6);
      }
      uVar12 = (uint)puVar4[-1];
      if (uVar14 <= uVar12) {
        puVar6 = &DAT_01870e9c;
        uVar13 = uVar14;
        goto LAB_00bad300;
      }
      uVar9 = *(undefined4 *)(iVar11 + uVar12 * 4);
      puVar4 = puVar4 + 2;
      uVar10 = uVar10 - 1;
      puVar7[-1] = *(undefined4 *)(iVar15 + uVar2 * 4);
      *puVar7 = uVar9;
      puVar7 = puVar7 + 2;
      uVar12 = local_28;
    } while (uVar10 != 0);
  }
  if (local_30 != 0) {
    thunk_FUN_016d3fb4(local_34);
  }
  *puVar8 = local_38;
  puVar8[1] = uVar1;
  puVar8[2] = uVar12;
  return;
}

