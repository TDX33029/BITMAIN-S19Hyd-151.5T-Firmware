// FUN_0126102c @ 0126102c size=692 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0126102c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *unaff_r5;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint *local_9c;
  uint local_98;
  uint *local_94;
  int local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  char local_40 [28];
  
  puVar11 = (uint *)*param_1;
  iVar8 = param_1[1];
  iVar9 = param_1[3];
  local_b0 = 0;
  local_b8 = 0;
  if (iVar8 == 0) {
    local_a8 = 0;
  }
  else {
    unaff_r5 = puVar11 + iVar8 * -10 + -10;
    param_3 = iVar8 * 0x29 + 0x2d;
    local_a8 = 8;
  }
  puVar13 = puVar11 + 1;
  uVar10 = ~*puVar11 & 0x80808080;
  local_90 = (int)puVar11 + iVar8 + 1;
  uStack_a4 = param_3;
  uStack_a0 = unaff_r5;
  local_9c = puVar11;
  local_98 = uVar10;
  local_94 = puVar13;
  local_8c = iVar9;
  while (iVar9 != 0) {
    puVar12 = puVar13;
    if (uVar10 == 0) {
      do {
        puVar13 = puVar12 + 1;
        uVar10 = *puVar12;
        puVar11 = puVar11 + -0x28;
        puVar12 = puVar13;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
    local_88 = puVar11[uVar1 * -10 + -9];
    local_84 = puVar11[uVar1 * -10 + -8];
    local_80 = puVar11[uVar1 * -10 + -7];
    uStack_7c = puVar11[uVar1 * -10 + -6];
    local_78 = puVar11[uVar1 * -10 + -5];
    local_74 = puVar11[uVar1 * -10 + -4];
    uStack_70 = puVar11[uVar1 * -10 + -3];
    uStack_6c = puVar11[uVar1 * -10 + -2];
    uStack_68 = puVar11[uVar1 * -10 + -1];
    uVar10 = uVar10 - 1 & uVar10;
    iVar9 = iVar9 + -1;
    uVar2 = uVar10;
    iVar6 = iVar9;
    puVar12 = puVar11;
    puVar5 = puVar13;
    if (puVar11[uVar1 * -10 + -10] == 0x80000000) goto joined_r0x012611c4;
    local_58 = puVar11[uVar1 * -10 + -6];
    uStack_54 = puVar11[uVar1 * -10 + -5];
    uStack_50 = puVar11[uVar1 * -10 + -4];
    uStack_4c = puVar11[uVar1 * -10 + -3];
    uStack_48 = puVar11[uVar1 * -10 + -2];
    uStack_44 = puVar11[uVar1 * -10 + -1];
    local_64 = puVar11[uVar1 * -10 + -10];
    local_60 = local_88;
    uStack_5c = local_84;
    FUN_0120e850(local_40,&local_b8,&local_64);
    if (local_40[0] != '\x06') {
      FUN_01164f34(local_40);
    }
  }
  local_8c = 0;
  local_9c = puVar11;
  local_98 = uVar10;
  local_94 = puVar13;
LAB_01261240:
  iVar9 = 0;
  if (param_3 != 0) {
    iVar9 = iVar8;
  }
  if (param_3 != 0 && iVar9 != 0) {
    thunk_FUN_016d3fb4(unaff_r5);
  }
  uStack_a0._3_1_ = (undefined1)local_b0;
  local_9c._0_3_ = (undefined3)((uint)local_b0 >> 8);
  uStack_a4._3_1_ = (undefined1)uStack_b4;
  uStack_a0._0_3_ = (undefined3)((uint)uStack_b4 >> 8);
  local_a8._3_1_ = (undefined1)local_b8;
  uStack_a4._0_3_ = (undefined3)((uint)local_b8 >> 8);
  local_78 = uStack_b4;
  local_84 = 1;
  local_88 = 1;
  local_80 = CONCAT31((undefined3)local_a8,5);
  uStack_7c = local_b8;
  local_74 = local_b0;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar7 = local_88;
  puVar7[1] = local_84;
  puVar7[2] = local_80;
  puVar7[3] = uStack_7c;
  puVar7[4] = local_78;
  puVar7[5] = local_74;
  puVar7[6] = uStack_70;
  puVar7[7] = uStack_6c;
  return;
joined_r0x012611c4:
  while( true ) {
    local_8c = iVar6;
    local_9c = puVar12;
    local_98 = uVar2;
    local_94 = puVar5;
    if (iVar9 == 0) break;
    puVar12 = puVar13;
    if (uVar10 == 0) {
      do {
        puVar13 = puVar12 + 1;
        uVar10 = *puVar12;
        puVar11 = puVar11 + -0x28;
        puVar12 = puVar13;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
      local_9c = puVar11;
      local_94 = puVar13;
    }
    uVar1 = uVar10 >> 8;
    uVar2 = uVar10 >> 0x10;
    uVar3 = uVar10 >> 0x18;
    uVar4 = uVar10 << 0x18;
    iVar9 = iVar9 + -1;
    uVar10 = uVar10 - 1 & uVar10;
    uVar1 = (uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3) >> 3;
    local_98 = uVar10;
    local_8c = iVar9;
    if (puVar11[uVar1 * -10 + -10] != 0) {
      thunk_FUN_016d3fb4(puVar11[uVar1 * -10 + -9]);
    }
    FUN_01164f34(puVar11 + uVar1 * -10 + -6);
    uVar2 = local_98;
    iVar6 = local_8c;
    puVar12 = local_9c;
    puVar5 = local_94;
  }
  goto LAB_01261240;
}

