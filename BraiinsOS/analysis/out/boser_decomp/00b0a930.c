// FUN_00b0a930 @ 00b0a930 size=1208 calls_out=12 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b0a930(uint *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int extraout_r2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  uint *local_110;
  undefined4 *local_d8;
  uint uStack_d4;
  undefined4 *local_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint *puStack_bc;
  uint local_b8;
  uint local_b4;
  uint *local_b0;
  uint *local_ac;
  uint local_a8;
  uint *local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint local_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  bVar19 = (undefined4 *)0x7fffffe < param_3;
  bVar18 = param_3 == (undefined4 *)0x7ffffff;
  uVar3 = (int)param_3 * 0x20;
  uVar6 = 0;
  if (param_3 < (undefined4 *)0x8000000) {
    bVar19 = 0x7ffffff7 < uVar3;
    bVar18 = uVar3 == 0x7ffffff8;
    local_110 = param_1;
  }
  if (!(bVar19 && !bVar18)) {
    if (uVar3 == 0) {
      uStack_d4 = 8;
      local_d8 = (undefined4 *)0x0;
    }
    else {
      uVar6 = 8;
      uStack_d4 = FUN_01298504(uVar3,8);
      local_d8 = param_3;
      if (uStack_d4 == 0) goto LAB_00b0a958;
    }
    local_d0 = (undefined4 *)0x0;
    uVar20 = thunk_FUN_01bee35a(local_d8,uStack_d4,0x2c0);
    puVar10 = (uint *)((int)uVar20 + extraout_r2);
    puVar9 = (undefined4 *)0x0;
    if (param_3 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
      puVar12 = (uint *)((int)((ulonglong)uVar20 >> 0x20) + 0x10);
      do {
        if ((char)puVar10[4] == '\0') {
          FUN_019ae6ac(&local_b8);
          *puVar10 = local_b8;
          puVar10[1] = local_b4;
          puVar10[2] = (uint)local_b0;
          puVar10[3] = (uint)local_ac;
          *(undefined1 *)(puVar10 + 4) = 1;
        }
        uVar3 = *puVar10;
        uVar4 = puVar10[1];
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        uVar16 = puVar10[2];
        uVar17 = puVar10[3];
        *puVar10 = uVar3 + 1;
        puVar10[1] = uVar4 + (0xfffffffe < uVar3);
        puVar12[-4] = (uint)&DAT_0056d238;
        puVar12[-3] = 0;
        puVar12[-2] = 0;
        puVar12[-1] = 0;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar16;
        puVar12[3] = uVar17;
        puVar12 = puVar12 + 8;
      } while (param_3 != puVar9);
      puVar9 = param_3;
    }
    uVar3 = uStack_d4;
    puVar1 = local_d8;
    if ((char)puVar10[4] == '\0') {
      local_d0 = puVar9;
      FUN_019ae6ac(&local_b8);
      *puVar10 = local_b8;
      puVar10[1] = local_b4;
      puVar10[2] = (uint)local_b0;
      puVar10[3] = (uint)local_ac;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_c8 = *puVar10;
    uStack_c4 = puVar10[1];
    uStack_c0 = puVar10[2];
    puStack_bc = (uint *)puVar10[3];
    *puVar10 = local_c8 + 1;
    puVar10[1] = uStack_c4 + (0xfffffffe < local_c8);
    local_d8 = &DAT_0056d238;
    uStack_d4 = 0;
    local_d0 = (undefined4 *)0x0;
    uStack_cc = 0;
    puVar10 = (uint *)*param_4;
    iVar5 = param_4[1];
    iVar13 = param_4[3];
    if (iVar5 == 0) {
      local_b8 = 0;
      local_b4 = uStack_c0;
      local_b0 = puStack_bc;
    }
    else {
      local_b8 = 8;
      local_b4 = iVar5 * 0x29 + 0x2d;
      local_b0 = puVar10 + iVar5 * -10 + -10;
    }
    puVar12 = puVar10 + 1;
    uVar4 = ~*puVar10 & 0x80808080;
    local_a0 = (int)puVar10 + iVar5 + 1;
    puVar2 = (undefined4 *)((uint)&local_98 | 4);
    local_ac = puVar10;
    local_a8 = uVar4;
    local_a4 = puVar12;
    local_9c = iVar13;
LAB_00b0ab70:
    do {
      if (iVar13 == 0) {
        iVar13 = 0;
LAB_00b0ad5c:
        local_9c = iVar13;
        FUN_01ada55c(&local_b8);
        *local_110 = (uint)puVar1;
        local_110[1] = uVar3;
        local_110[2] = (uint)puVar9;
        local_110[4] = (uint)local_d8;
        local_110[5] = uStack_d4;
        local_110[6] = (uint)local_d0;
        local_110[7] = uStack_cc;
        local_110[8] = local_c8;
        local_110[9] = uStack_c4;
        local_110[10] = uStack_c0;
        local_110[0xb] = (uint)puStack_bc;
        return;
      }
      uVar16 = uVar4;
      puVar15 = puVar12;
      if (uVar4 == 0) {
        do {
          puVar12 = puVar15 + 1;
          uVar4 = *puVar15;
          puVar10 = puVar10 + -0x28;
          puVar15 = puVar12;
        } while ((uVar4 & 0x80808080) == 0x80808080);
        uVar16 = uVar4 & 0x80808080 ^ 0x80808080;
        local_ac = puVar10;
        local_a4 = puVar12;
      }
      iVar13 = iVar13 + -1;
      uVar4 = uVar16 - 1 & uVar16;
      uVar16 = (uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                             (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
      uVar8 = puVar10[uVar16 * -10 + -10];
      uVar17 = puVar10[uVar16 * -10 + -9];
      uVar11 = puVar10[uVar16 * -10 + -8];
      local_98 = puVar10[uVar16 * -10 + -7];
      uStack_94 = puVar10[uVar16 * -10 + -6];
      uStack_90 = puVar10[uVar16 * -10 + -5];
      local_8c = puVar10[uVar16 * -10 + -4];
      uStack_88 = puVar10[uVar16 * -10 + -3];
      uStack_84 = puVar10[uVar16 * -10 + -2];
      uStack_80 = puVar10[uVar16 * -10 + -1];
      local_a8 = uVar4;
      if (uVar8 == 0x80000000) goto LAB_00b0ad5c;
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      uStack_68 = puVar2[4];
      uStack_64 = puVar2[5];
      if (param_3 != (undefined4 *)0x0) {
        puVar14 = (undefined4 *)0x0;
        do {
          puVar7 = (undefined4 *)(param_2 + (int)puVar14 * 8);
          iVar5 = (**(code **)(puVar7[1] + 0x14))(*puVar7,uVar17,uVar11);
          if (iVar5 != 0) {
            if (puVar9 <= puVar14) {
              local_9c = iVar13;
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(puVar14,puVar9,&DAT_01c11018);
            }
            local_48 = *puVar2;
            local_44 = puVar2[1];
            local_40 = puVar2[2];
            uStack_3c = puVar2[3];
            uStack_38 = puVar2[4];
            uStack_34 = puVar2[5];
            local_30 = uVar8;
            local_2c = uVar17;
            local_28 = uVar11;
            FUN_01274ad8(&local_60,uVar3 + (int)puVar14 * 0x20,&local_30);
            if ((char)local_60 != '\x06') {
              FUN_00e0febc(&local_60);
            }
            goto LAB_00b0ab70;
          }
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        } while (puVar7 + 2 != (undefined4 *)(param_2 + (int)param_3 * 8));
      }
      local_60 = uVar8;
      local_5c = uVar17;
      local_58 = uVar11;
      iVar5 = thunk_FUN_01be5118(0x10);
      if (iVar5 == 0) {
        local_9c = iVar13;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(iVar5,&DAT_0056ad08,0x10);
      local_40 = 0x10;
      local_48 = 0x10;
      local_44 = iVar5;
      FUN_01aa42f8(&local_30,&local_d8,&local_60,&local_48);
      if (local_30 != 0x80000000) {
        FUN_019bb7e0(local_30,local_2c);
      }
      FUN_00e0febc(&local_78);
    } while( true );
  }
LAB_00b0a958:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar3);
}

