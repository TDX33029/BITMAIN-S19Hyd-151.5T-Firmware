// FUN_00a39b68 @ 00a39b68 size=1068 calls_out=16 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a39b68(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined1 auStack_148 [48];
  undefined4 *local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  undefined4 *local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 local_d8;
  undefined4 *puStack_d4;
  uint *puStack_d0;
  uint *local_cc;
  uint local_c8;
  uint *local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint uStack_b0;
  int *local_ac;
  undefined *local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  int *local_88;
  undefined *puStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined4 *local_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int *local_40;
  undefined *local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar1 = FUN_00a35560(auStack_148);
  uVar11 = thunk_FUN_01bee35a(uVar1,0x2c0);
  puVar7 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
  if ((char)puVar7[4] == '\0') {
    FUN_019ae6ac(&local_b8);
    *puVar7 = local_b8;
    puVar7[1] = local_b4;
    puVar7[2] = uStack_b0;
    puVar7[3] = (uint)local_ac;
    *(undefined1 *)(puVar7 + 4) = 1;
  }
  local_100 = puVar7[2];
  local_fc = puVar7[3];
  puStack_d0 = &local_e8;
  local_108 = *puVar7;
  local_104 = puVar7[1];
  local_e8 = local_108 + 1;
  uStack_e4 = local_104 + (0xfffffffe < local_108);
  puStack_d4 = &DAT_01d30848;
  *puVar7 = local_e8;
  puVar7[1] = uStack_e4;
  local_118 = &DAT_0056d238;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  *puVar7 = local_108 + 2;
  puVar7[1] = local_104 + (0xfffffffd < local_108);
  local_f8 = &DAT_0056d238;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  iVar6 = param_3[1];
  puVar7 = (uint *)*param_3;
  iVar8 = param_3[3];
  if (iVar6 == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = 8;
    puStack_d0 = puVar7 + iVar6 * -10 + -10;
    puStack_d4 = (undefined4 *)(iVar6 * 0x29 + 0x2d);
  }
  local_c0 = (int)puVar7 + iVar6 + 1;
  puVar10 = puVar7 + 1;
  uVar2 = ~*puVar7 & 0x80808080;
  uStack_e0 = local_100;
  uStack_dc = local_fc;
  local_cc = puVar7;
  local_c8 = uVar2;
  local_c4 = puVar10;
  local_bc = iVar8;
LAB_00a39ca8:
  do {
    if (iVar8 == 0) {
      iVar8 = 0;
LAB_00a39ee0:
      local_bc = iVar8;
      FUN_0152b1c8(&local_d8);
      *param_1 = local_118;
      param_1[1] = uStack_114;
      param_1[2] = uStack_110;
      param_1[3] = uStack_10c;
      param_1[4] = local_108;
      param_1[5] = local_104;
      param_1[6] = local_100;
      param_1[7] = local_fc;
      param_1[8] = local_f8;
      param_1[9] = uStack_f4;
      param_1[10] = uStack_f0;
      param_1[0xb] = uStack_ec;
      param_1[0xc] = local_e8;
      param_1[0xd] = uStack_e4;
      param_1[0xe] = uStack_e0;
      param_1[0xf] = uStack_dc;
      FUN_01270b08(auStack_148);
      return;
    }
    uVar3 = uVar2;
    puVar9 = puVar10;
    if (uVar2 == 0) {
      do {
        puVar10 = puVar9 + 1;
        uVar2 = *puVar9;
        puVar7 = puVar7 + -0x28;
        puVar9 = puVar10;
      } while ((uVar2 & 0x80808080) == 0x80808080);
      uVar3 = uVar2 & 0x80808080 ^ 0x80808080;
      local_cc = puVar7;
      local_c4 = puVar10;
    }
    iVar8 = iVar8 + -1;
    uVar2 = uVar3 - 1 & uVar3;
    uVar3 = (uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                          | uVar3 >> 0x18) >> 3;
    local_b8 = puVar7[uVar3 * -10 + -9];
    local_b4 = puVar7[uVar3 * -10 + -8];
    uStack_b0 = puVar7[uVar3 * -10 + -7];
    local_ac = (int *)puVar7[uVar3 * -10 + -6];
    local_a8 = (undefined *)puVar7[uVar3 * -10 + -5];
    uStack_a4 = puVar7[uVar3 * -10 + -4];
    uStack_a0 = puVar7[uVar3 * -10 + -3];
    uStack_9c = puVar7[uVar3 * -10 + -2];
    uStack_98 = puVar7[uVar3 * -10 + -1];
    local_c8 = uVar2;
    if (puVar7[uVar3 * -10 + -10] == 0x80000000) goto LAB_00a39ee0;
    local_94 = puVar7[uVar3 * -10 + -10];
    local_88 = local_ac;
    puStack_84 = local_a8;
    uStack_80 = uStack_a4;
    uStack_7c = uStack_a0;
    uStack_78 = uStack_9c;
    uStack_74 = uStack_98;
    local_90 = local_b8;
    uStack_8c = local_b4;
    iVar6 = FUN_01277390(auStack_148,&local_94);
    if (iVar6 == 0) {
      puVar5 = (undefined *)thunk_FUN_01be5118(0x10);
      if (puVar5 == (undefined *)0x0) {
        local_bc = iVar8;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(puVar5,&DAT_0056ad08,0x10);
      local_38 = 0x10;
      local_40 = (int *)&DAT_00000010;
      local_3c = puVar5;
      FUN_012750bc(&local_58,&local_f8,&local_94,&local_40);
      if (local_58 != -0x80000000) {
        FUN_019bb7e0(local_58,local_54);
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_0126d620(iVar6,&local_88);
      if (puVar4 == (undefined4 *)0x0) {
        local_40 = local_ac;
        local_3c = local_a8;
        local_38 = uStack_a4;
        local_34 = uStack_a0;
        uStack_30 = uStack_9c;
        uStack_2c = uStack_98;
        FUN_01274ad8(&local_58,&local_118,&local_94);
        if ((char)local_58 != '\x06') {
          FUN_00e0febc(&local_58);
        }
        goto LAB_00a39ca8;
      }
      local_50 = 0;
      local_58 = 0;
      local_34 = 0;
      local_54 = 1;
      local_38 = 0x60000020;
      local_3c = &DAT_01c25444;
      local_40 = &local_58;
      local_6c = puVar4;
      iVar6 = FUN_00667a08(&local_6c,&local_40);
      if (iVar6 != 0) {
        local_bc = iVar8;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_68,&DAT_01c2545c,&DAT_01d30334);
      }
      local_68 = local_58;
      uStack_64 = local_54;
      uStack_60 = local_50;
      FUN_012750bc(&local_40,&local_f8,&local_94);
      if (local_40 != (int *)&DAT_80000000) {
        FUN_019bb7e0(local_40,local_3c);
      }
      (**(code **)*puVar4)(puVar4);
    }
    FUN_00e0febc(&local_88);
  } while( true );
}

